#include<iostream>
using namespace std;
void selectionsort(int arr[], int size){
    for(int i=0; i<size-1; i++){
        int minindex = i;
        for(int j=i+1; j<size; j++){
            if(arr[j]<arr[minindex]){
                //ith element hi smallest hai.
                minindex = j;
            }

        }
        //ith element and minindex ko swap krte hi kam pura
        swap(arr[i],arr[minindex]);
    }
}
int main(){
    int arr[5];
    int size=5;
    cout<<"enter the values in Array"<<" ->"<<endl;
    for(int i=0; i<size; i++){
        cin>>arr[i];
    }
    selectionsort(arr,size);
    cout<<"the sorted array is ->";
    for(int i=0; i<size; i++){
        cout<<arr[i]<< " ";
    }
    cout<<endl;
    return 0;
}