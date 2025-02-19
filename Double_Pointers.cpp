#include<iostream>
using namespace std;

void udate(int** p2){
    //p2 = p2 + 1;   -> no change

    //*p2 = *p2 + 1;  -> only change in p

    // **p2 = **p2 + 1;  -> only change in value of p
}

int main(){
    
    int i = 5;
    int* p = &i;
    int** p2 = &p;

   /* 
    // prints the value of i
    cout << i << endl;
    cout << *p << endl;
    cout << **p2 << endl;

    // prints the address of i
    cout << &i << endl;
    cout << *p2 << endl;
    cout << p << endl;
    
    // prints the address of p
    cout << &p << endl;
    cout << p2 << endl;
*/

    cout << "before " << i << endl;
    cout << "before " << p << endl;
    cout << "before " << p2 << endl;
    udate(p2);
    cout << "after " << i << endl;
    cout << "after " << p << endl;
    cout << "after " << p2 << endl;


    return 0;
}
