#include<iostream>
#include<vector>

using namespace std;
int bruteforce(vector<int>nums){
    for(int i=0; i<nums.size(); ++i){
        int lsum=0;
        int rsum=0;
        // find left sum without including current index
        for(int j=0; j<i; ++j){
            lsum += nums[j];
        }
        // find right sum without including current index
        for(int j=i+1; j<nums.size(); ++j){
            rsum += nums[j];
        }
        if(lsum == rsum){
            return i;
        }
    }
    return false;
}
int main(){
  
  vector<int>nums;
  nums.push_back(1);
  nums.push_back(7);
  nums.push_back(3);
  nums.push_back(6);
  nums.push_back(5);
  nums.push_back(6);
  //int n = nums.size();
  int ans = bruteforce(nums);
  if(ans == false){
    cout<<"pivot index not found"<< endl;
  }
  else{
    cout<< "pivot index is found at the index :->"<< ans<< endl;
  }
  return 0;
}