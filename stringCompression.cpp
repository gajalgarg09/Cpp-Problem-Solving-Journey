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