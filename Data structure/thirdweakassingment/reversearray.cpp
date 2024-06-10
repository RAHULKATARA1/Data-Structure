#include<iostream>
using namespace std;
void reversearray(int arr[], int size){
    int right= size-1;
    int left = 0;
    while(left<=right){
        swap(arr[left], arr[right]);
        left++;
        right--;
    }
    for(int i=0; i<size; i++){
        cout<< arr[i]<< " ";
    }
}
int main(){
    int arr[]={10,20,30,40,50,60,70,80,90};
    int size=9;
    reversearray(arr, size);
    return 0;
}