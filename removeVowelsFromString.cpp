// You are given a string STR of length N. Your task is to remove all the vowels present in that string and print the modified string.
// English alphabets ‘a’, ‘e’, ‘i’, ‘o’, ‘u’ are termed as vowels. All other alphabets are called consonants.
// Note: You have to only remove vowels from the string. There will be no change in the relative position of all other alphabets.
// For example:
// (i)  If the input string is 'CodeGeek', the output should be CdGk after removing ‘o’ and ‘e’.
// (ii) If the input string is 'Odinson', the output should be 'dnsn' after removing ‘o’ and ‘i’. 

#include<iostream>
#include<string>
using namespace std;

string removeVowel(string s){
    string ans = "";

    for(int i =0; i<s.size(); i++){

        if(s[i] == 'a' || s[i] == 'A' || s[i] == 'e' || s[i] == 'E' || s[i] == 'i' || s[i] == 'I' || s[i] == 'o' || s[i] == 'O' || s[i] == 'u' || s[i] == 'U'){
            continue;
        }
        ans.push_back(s[i]);
    }
    return ans;
}
