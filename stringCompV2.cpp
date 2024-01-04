#include <iostream>
#include <vector>
using namespace std;

int compressString(vector<char> &s){
  int count = 1,index = 0;
  char prev = s[0];

  for(int i =0 ; i< s.size();i++){
    if(prev == s[i]){
      count++;
    }
    else{
      s[index++] = prev;
      if(count>1){
        while(count){
        s[index++] = (count%10) + '0';
        count = count/10;
      }

      count = 1;
      prev = s[i];
    }
  }
}
s[index++] = prev;
if(count>1 ){
    while(count){
        s[index++] = (count%10) + '0';
        count = count/10;
        }
}

 return s.size();
}
int main() {
  vector<char> s = {'a','a','b','b','e'};
  cout << "compressed length is. : " << compressString(s) <<endl;
  cout << "compressed string " ;
  for(int i=0;i<s.size();i++){
    cout<<s[i];
  }
  return 0;
}