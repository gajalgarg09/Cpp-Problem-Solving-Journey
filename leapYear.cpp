// You are given an Integer n. Return true if It is a Leap Year otherwise return false.

class Solution {
  public:
    bool checkYear(int n) {
        if(n % 100 == 0 ){
            if(n % 400 == 0){
                return true;
            }
        }
        else if(n % 4 == 0){
            return true;
        }
        return false;
    }
};