#include<iostream>
using namespace std;

int modularExponentiation(int x, int n, int m) {
	int result = 1;
	while( n> 0){

		if( n & 1) // odd
		{
			result = (1LL*(result)* (x)%m)%m;
		}
		x = (1LL *(x)%m * (x)%m)%m;
		n = n >> 1; // its optimal rather than dividing
	}
	return result;
};