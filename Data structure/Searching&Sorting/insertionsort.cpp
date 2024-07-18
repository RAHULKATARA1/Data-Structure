#include<iostream>
using namespace std;
void insertionsort(int arr[], int size){
    for(int i=0; i<size; i++){
        int key = arr[i];
        int j = i-1;
        // move element of array that are greater than key 
        // to one position ahead of their current position
        while(j>=0 && arr[j]>key){
            arr[j+1] = arr[j];
            j--;

        }
        arr[j+1] = key; // insertion sort
    }
}
int main(){
    int arr[5];
    int size=5;
    cout<<"enter the values in Array"<<" ->"<<endl;
    for(int i=0; i<size; i++){
        cin>>arr[i];
    }
    insertionsort(arr,size);
    cout<<"the sorted array is ->";
    for(int i=0; i<size; i++){
        cout<<arr[i]<< " ";
    }
    cout<<endl;
    return 0;
}