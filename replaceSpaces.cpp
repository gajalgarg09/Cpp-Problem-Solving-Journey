// You have been given a string 'STR' of words. 
// You need to replace all the spaces between words with “@40”.

#include<iostream>
#include<string>
using namespace std;

string replaceString(string &str){

    string temp = "";
    for(int i =0; i<str.length(); i++){
        if(str[i] == ' '){
            temp.push_back('@');
            temp.push_back('4');
            temp.push_back('0');
        }
        else{
            temp.push_back(str[i]);
        }
    }
    return temp;
}

int main() {
    string s;
    cout << "Enter the string:" << endl;
    getline(cin, s); 

    cout << "You entered: " << s << endl;

    string newString = replaceString(s); 
    cout << "New String: " << newString << endl;

    return 0;
}
