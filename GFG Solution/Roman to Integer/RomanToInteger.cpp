/*  
Question:- Roman to Integer

Link:- 


*/

// Solution. 1 (CPP)

class Solution {
  public:
    int num(char c) {
      if(c == 'I') return 1;
      else if(c == 'V') return 5;
      else if(c == 'X') return 10;
      else if(c == 'L') return 50;
      else if(c == 'C') return 100;
      else if(c == 'D') return 500;
      else if(c == 'M') return 1000;
      return 0;   // default case,
    }
    
    int romanToDecimal(string &s){
      int index = 0, sum = 0;
      while(index < s.size()-1){
        if(num(s[index]) < num(s[index+1])){
          // make left num as negative / Subtraction case
          sum -= num(s[index]);
        } else {
          sum += num(s[index]);
        }
        index++;
      }
    
      // last element
      sum += num(s[s.size()-1]);
      return sum;
    }
};



