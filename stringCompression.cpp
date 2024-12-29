// Given an array of characters chars, compress it using the following 
// algorithm:
// Begin with an empty string s. For each group of consecutive 
// repeating characters in chars:
// If the group's length is 1, append the character to s.
// Otherwise, append the character followed by the group's length.
// The compressed string s should not be returned separately, 
// but instead, be stored in the input character array chars. 
// Note that group lengths that are 10 or longer will be split into
// multiple characters in chars.
// After you are done modifying the input array, 
// return the new length of the array.

#include<iostream>
#include<string>
#include<vector>
using namespace std;

int compress(vector<char> chars){
    int count =1;
    vector<char> result;
    for(int i =0; i<chars.size(); i++){
        if( chars[i] == chars[i-1]){
            count++;
        }
        else{
            result.push_back(chars[i-1]);
            if( count > 1){
                string countStr = to_string(count);
                for( char ch : countStr){
                    result.push_back(ch);
                }
            }
            count = 1;
        }
    }
    chars = result;
    return chars.size();
}
