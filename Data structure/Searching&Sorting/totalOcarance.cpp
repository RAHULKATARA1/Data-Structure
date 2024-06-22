#include<iostream>
using namespace std;
int findFirstOcarance(int arr[], int size, int target){
    int start = 0;
    int end = size-1;
    int mid =  start +(end - start)/2;
    int ans = -1;
    while(start <= end){
        if(arr[mid] == target){
            //ans store
            ans = mid;
            // left me jao
            end = mid-1;

        }
        else if (target > arr[mid]){
            //right me jao
            start = mid+1;
        }
        else if (target < arr[mid]){
            // left me jao
            end = mid-1;
        }
        // galti yha hogi
        mid =  start +(end - start)/2;
    }
    return ans;
}
int findLastOcarance(int arr[], int size, int target){
    int start = 0;
    int end = size-1;
    int mid =  start +(end - start)/2;
    int ans = -1;
    while(start <= end){
        if(arr[mid] == target){
            //ans store
            ans = mid;
            // first or last me yhi h change
            // right me jao
            start = mid+1;

        }
        else if (target > arr[mid]){
            //right me jao
            start = mid+1;
        }
        else if (target < arr[mid]){
            // left me jao
            end = mid-1;
        }
        // galti yha hogi
        mid =  start +(end - start)/2;
    }
    return ans;
}
int totalOcaranace(int arr[], int size, int target){
    int firstOcc =  findFirstOcarance(arr, size, target);
    int latsOcc =   findLastOcarance(arr, size, target);
    int total = latsOcc - firstOcc + 1;
    return total;
}
int main(){
    int arr[] = {10,20,30,30,30,30,50,60};
    int size = 8;
    int target = 30;
    int answer = totalOcaranace(arr, size, target);
    cout<<"total occorance is "<<"->"<<answer<<endl;
     return 0;

}