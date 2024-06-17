#include<iostream>
using namespace std;
void rightShiftArray(int arr[], int size){
    int temp=arr[0];
    for(int i=0; i<size; i++){
        arr[i]=arr[i+1];
    }
    arr[size-1]=temp;
}
int  main(){
    int arr[]={10,20,30,40,50};
    int size = 5;
    rightShiftArray(arr,size);
    for(int i=0; i<size; i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}