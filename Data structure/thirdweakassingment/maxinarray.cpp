#include<iostream>
#include<limits.h>
using namespace std;
int maxinarray(int arr[], int size){
    int maxans = INT_MIN;
    for(int i=0; i<size; i++){
        maxans = max(arr[i],maxans);
    }
    return maxans;
}
int main(){
    int arr[]={10,11,13,5,3,20,21,1,9,7};
    int size = 10;
    int maximum = maxinarray(arr, size);
    cout<<"maximum number in an Array is :  "<< maximum << endl;
    return 0;
}