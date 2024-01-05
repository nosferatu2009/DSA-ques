#include <iostream>
#include <string>
#include <unordered_map>
#include <iterator>
using namespace std;

string intToRoman(int val){
   
   string roman[] = {"M","CM","D","CD","C","XC","L","XL","X","IX","V","IV","I"};
   int nums[] = {1000,900,500,400,100,90,50,40,10,9,5,4,1};


   string romanNum;

   for(int i = 0 ;i <13;i++){
      while(val >= nums[i]){
        val = val - nums[i];
        romanNum.append(roman[i]);
     }
    
   }
 
 return romanNum;
}


int main() {
  cout << "Integer to Roman conversion" << endl;
  cout << intToRoman(10);
  return 0;
}