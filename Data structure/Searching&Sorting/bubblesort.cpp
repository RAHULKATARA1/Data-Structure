#include<iostream>
using namespace std;

void bubblesort(int arr[], int size){
    for(int i=0; i<size-1; i++){
        for(int j=0; j<size-i-1; j++){
            if(arr[j] > arr[j+1]){
                swap(arr[j], arr[j+1]);
            }
        }
    }
}

int main(){
    int arr[] = {2, 3, 1, 6, 5};
    int size = 5;
   
    bubblesort(arr, size);
    
    cout << "Sorted array: ";
    for(int i=0; i<size; i++){
        cout << arr[i] << " ";
    }
    cout << endl;
    
    return 0;
}
