#include<iostream>
using namespace std;
int binarySearch(int arr[], int size, int target){
    int start = 0;
    int end = size-1;
    int mid = (start + end )/2;
    
    while(start <= end){

        // for found the target

        if(arr[mid] == target){
            // return the index of found element
            return mid;
        }
        // not found

        else if (target > arr[mid] ){
            // right me jao

            start = mid+1;
        }
        else if (target < arr[mid] ){
            // left me jao

            end = mid-1;
        }
        // yaha par galti hoti h 
        // last me bhi mid ki value update krni h
        mid = (start + end )/2;
    }
    // agar yha tak phuche ho to target nahi  mila
    return -1;
}
int main(){
    int arr[]={10,20,30,40,50,60,70,80,90};
    int size = 9;
    int target = 90;
    int ansIndex = binarySearch(arr, size, target );
    
    if(ansIndex == -1){
        cout<<"element index is not found "<< endl;
    }
    else{
        cout<<" element found at index "<< ansIndex << endl;
    }



    return 0;
}