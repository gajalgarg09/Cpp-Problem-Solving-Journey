// Given a string s of lowercase alphabets. The task is to find the maximum occurring character in the string s. 
// If more than one character occurs the maximum number of times then print the lexicographically smaller character.

// Examples:
// Input: s = "testsample"
// Output: 'e'
// Explanation: e is the character which is having the highest frequency.

#include<iostream>
using namespace std;

char maxCharCount(string s){

    int arr[26] = {0};

    // create an array of count of characters
    for(int i =0; i<s.length(); i++){
        char ch = s[i];
        int num = 0;
        num = ch - 'a';
        arr[num]++;
    }

    // find maximum occ character
    int maxi = -1 , ans = -1;
    // max -> count , ans -> index
    for(int i=0; i<26; i++){
        if(maxi < arr[i]){
            ans = i;
            maxi = arr[i];
        }
        
    }
    char finalAns = 'a' + ans;
    return finalAns;

}

int main(){
    string s;
    cout << "Enter the string : ";
    cin >> s;
    cout << maxCharCount(s);
}
