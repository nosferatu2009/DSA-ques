#include <iostream>
#include <string>
#include <vector>
using namespace std;

string zigzagConversion(string val,int numRows){
   
  vector<string> zigzag(numRows);
  int direction = 1,i = 0 ,row = 0 ;
  string zigstring;

  while(true){
    if(direction){
       while(row < numRows && i < val.size()){
          zigzag[row++].push_back(val[i++]);
       }
       row = numRows - 2;
    }
    else{
        while(row >= 0 && i < val.size()){
          zigzag[row--].push_back(val[i++]);
       }
       row = 1;
    }

    direction = !direction;

    if(i >= val.size()) break;
  }

  for(auto s : zigzag){
     zigstring.append(s);
  }

  return zigstring;
}


int main() {
  cout << "Zig Zag String" << endl;
  cout << zigzagConversion("ABCDEFGHJ",3);
  return 0;
}