#include<iostream>
#include<vector>
using namespace std;
void findeven(int *arr , int size , int index, vector<int>&ans){
    // base case
    if(index >= size){
        return;
    }
    //progressing
     if((arr[index]&1)==0){
        ans.push_back(arr[index]);
     }
     //recursive call
     findeven(arr,size,index+1,ans);

}
int main()
{
    int arr[]={1,2,3,4,5,6};
    int size =6;
    int index = 0;
    vector<int>ans;
    findeven(arr, size , index ,ans);
    for(auto num: ans){
        cout<<num<<" ";
    }
    cout<<endl;

    return 0;
}