#include<iostream>
using namespace std;
int findMissingelement(int arr[], int size){
    int start = 0;
    int end = size-1;
    int mid = start + (end - start)/2;
    int ans=-1;
    
    while(start <= end){
        int diff = arr[mid] - mid;
        if (diff==1){
            // right me jao
            start=mid+1;
        }
        else{
            ans = mid;
            // left me jao
            end = mid-1;
        }
        mid = start + (end - start)/2;
    }
    if(ans+1 ==0){
        return size+1;
    }
    return ans+1;

}
int main(){
    int arr[]={1,2,3,4,6,7,8,9};
    int size = 8;
    int answer = findMissingelement(arr, size);
    cout<<"find missing element "<< "->"<< answer;
    cout<< endl;
    return 0;
}