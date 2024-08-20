// Problem statement
// You are given two positive integers 'n' and 'm'. You have to return the 'nth' root of 'm', i.e. 'm(1/n)'. If the 'nth root is not an integer, return -1.

// I've used Binary Search for solving the problem.

#include <cmath>

int NthRoot(int n, int m) {
  int s = 1;
  int e = m;

  while( s <= e){

    int mid = s + (e-s)/2;

    if( pow(mid , n) == m)
      return mid;
    else if( pow(mid , n) > m)
      e = mid -1;
    else  
      s = mid + 1;

  } 

  return -1;

  
}
