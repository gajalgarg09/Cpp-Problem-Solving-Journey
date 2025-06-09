#include<iostream>
#include<vector>
using namespace std;

class MyHashSet{
    public:
        vector<bool> v;

        MyHashSet(){
            v = vector<bool>(1000001,false);
        }

        void addkey(int key){
            v[key] = true;
        }

        void removekey(int key){
            v[key] = false;
        }
        
        bool contains(int key){
            return v[key];
        }

};