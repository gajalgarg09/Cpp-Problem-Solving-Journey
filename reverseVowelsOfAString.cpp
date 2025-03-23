// Given a string s, reverse only all the vowels in the string and return it.
// The vowels are 'a', 'e', 'i', 'o', and 'u', and they can appear in both lower and upper cases, more than once.

#include<iostream>
#include<string>
using namespace std;

bool isVowel(char c){
    if(c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u' || c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U'){
        return true;
    }
    return false;
}

string reverseVowles(string s){

    int n = s.length();
    int l = 0 , r = n-1;

    while( l < r){
        while(l < r &&  !isVowel(s[l])) l++;
        while(l < r &&  !isVowel(s[r])) r++;

        swap(s[l] , s[r]);
        l++;
        r--;

    }
    return s;
}
