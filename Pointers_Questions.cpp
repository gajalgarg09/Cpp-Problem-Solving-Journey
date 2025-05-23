#include<iostream>
using namespace std;

// Find the output of the following code snippets : 

int main(){
    /*  Question - 1
    int first = 8;
    int second = 18;
    int *ptr = &second;
    *ptr = 9;
    cout << first << " " << second << endl;
    */

    /* Question - 2
    int first = 6;
    int *p = &first;
    int *q = p;
    (*q)++;
    cout << first << endl;
    */

    /* Question - 3
    int first = 8;
    int *p = &first;
    cout << (*p)++ << " " ;
    cout << first << endl;
    */

    /*  Question - 4   (Segmentation fault)
    int *p = 0;
    int first = 110;
    *p = first;  -> error because if this
    cout << *p << endl;
    */

    /*  Question - 5
    int *p = 0;
    int first = 110;
    p = &first;
    cout << *p << endl;
    */

    /*  Question - 6
    int first = 8;
    int second = 11;
    int *third = &second;
    first = *third;
    *third = *third + 2;
    cout << first << " " << second << endl;
    */

    /*  Question - 7
    float f = 12.5;
    float p = 21.5;
    float* ptr = &f;
    (*ptr)++;
    *ptr = p;
    cout << *ptr << " " << f << " " << p << endl;
    */

    /*  Question - 8
    int arr[5];
    int *ptr;
    cout << sizeof(arr) << " " << sizeof(ptr) << endl;
    */

    /*  Question - 9
    int arr[] = {11, 21 , 12, 14};
    cout << *(arr) << " " << *(arr + 1) << endl; 
    */

    /*  Question - 10
    int arr[6] = {11 , 12, 31};
    cout << arr << " " << &arr << endl;
    */

    /*  Question - 11
    int arr[6] = {11 , 21, 13};
    cout << (arr+ 1) << endl;
    */

    /*  Question - 12
    int arr[6] = {11 , 21, 13};
    int *p = arr;
    cout << p[2] << endl;
    */

    /*  Question - 13
    int arr[] = {11, 12,13, 14, 15};
    cout << *(arr) << " " << *(arr + 3) << endl;
    */

    /*  Question - 14  (ERROR)
    int arr[] = {11, 21, 31, 41};
    int *ptr = arr++;  (here we tried to update the symbol table)
    cout << *ptr << endl;
    */

    /*  Question - 15
    char ch = 'a';
    char *ptr = &ch;
    ch++;
    cout << *ptr << endl;
    */

    /*  Question - 16  (whole array will be printed)
    char arr[] = "abcde";
    char *p = &arr[0];
    cout << p<< endl;
    */

    /*  Question - 17
    char str[] = "babbar";
    char *p  = str;
    cout << str[0] << " " << p[0] << endl;
    */

    /*  Question - 18
    void update(int *p){
        *p = (*p) * 2;
    }

    int main(){
        int i = 10;
        update(&i);
        cout << i << endl;
    }
    */

    /*  Question - 19
    int first =  110;
    int *p = &first;
    int **q = &p;
    int second = (**q)++ + 9;
    cout << first << " " << second << endl;
    */

    /*  Question - 20
    int first = 100;
    int *p = &first;
    int**q = &p;
    int second = ++(**q);
    int *r = *q;
    ++(*r);
    cout<< first << " " << second << endl;
    */
    
    return 0;
}
