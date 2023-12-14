#include <iostream>
#include <vector>
using namespace std;

int countDearragement(int n){
  //BC
  if(n==1){
     return 0;
  }

  if(n==2){
    return 1;
  }

  int finalAns = (n-1) * (countDearragement(n-1) +  countDearragement(n-2));

  return finalAns;
}

int main() {
   vector<int> arr = {1,2,3,4,5,7,8,9};
   cout << countDearragement(4);

  return 0;
}