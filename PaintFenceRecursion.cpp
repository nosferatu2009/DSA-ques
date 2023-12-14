#include <iostream>
#include <vector>
using namespace std;

int paintFence(int n,int k){
  //BC
  if(n==1){
     return k;
  }

  if(n==2){
    return k + (k*(k-1));
  }

  int finalAns = (k-1) * (paintFence(n-1,k) +  paintFence(n-2,k));

  return finalAns;
}

int main() {
   int n = 2, k = 3;
   cout << paintFence(n,k);

  return 0;
}