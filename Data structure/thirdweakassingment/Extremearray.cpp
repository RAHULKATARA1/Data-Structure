#include<iostream>
using namespace std;
void extremeArray(int arr[], int size){
    int right= size-1;
    int left = 0;
    while(left<=right){
       if(left == right) {
      cout << arr[left] << endl;  
    }
    else {
      cout << arr[left] << endl;
      cout << arr[right] << endl;
    }
    
    left++;
    right--;
    }
   
}
int main(){
    int arr[]={10,20,30,40,50,60,70,80,90};
    int size=9;
    extremeArray(arr, size);
    return 0;
}