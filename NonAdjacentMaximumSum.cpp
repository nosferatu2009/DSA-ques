#include <iostream>
#include <vector>
using namespace std;

int nonAdjacentMaxSum(vector<int>& arr,int index){
  //BC
  if(index>= arr.size()){
     return 0;
  }

// inclusion
  int option1 = arr[index] + nonAdjacentMaxSum(arr,index+2);
  // exlusion
  int option2 = 0 + nonAdjacentMaxSum(arr,index+1);

  int finalAns = max(option1,option2);

  return finalAns;
}

int main() {
   vector<int> arr = {1,2,3,4,5};
   cout << nonAdjacentMaxSum(arr,0);

  return 0;
}