#include<iostream>
#include<vector>
using namespace std;
void search(int *arr , int size , int index,int target, vector<int>&ans){
    // base case
    if(index >= size){
        return;
    }
    //progressing
     if(arr[index]==target){
        ans.push_back(index);
     }
     //recursive call
     search(arr,size,index+1,target,ans);

}
int main()
{
    int arr[]={40,30,10,20,10,10};
    int size =6;
    int index = 0;
    int target = 10;
    vector<int>ans;
    search(arr, size , index ,target ,ans);
    cout<<"indices where target found  ";
    for(auto num: ans){
        cout<<num<<" ";
    }
    cout<<endl;

    return 0;
}