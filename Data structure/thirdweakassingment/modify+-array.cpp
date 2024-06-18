#include<iostream>
using namespace std;
void shiftNegativeOneside(int arr[], int size){
    int j=0;
    // j-> memory block jha pr main negative store kar 
    // skta hu
    for(int index=0; index<size; index++){
        if(arr[index]<0){
            swap(arr[index],arr[j]);
            j++;
        }
    }
}
int main(){
    int arr[]={28,-7,12,-10,11,40,-60};
    int size=7;
    shiftNegativeOneside(arr, size);
    cout<<"printing the array"<<endl;
    for(int i=0; i<size; i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}