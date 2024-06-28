#include<iostream>
using namespace std;
void moveAllNegativeToleft(int arr[], int n){
    int l=0;
    int h=n-1;
    while(l<h){
        if(arr[l]<0){
            l++;
        }
        else if(arr[h]>0){
            h--;
        }
        else {
            swap(arr[l],arr[h]);
        }
    }

}
int main(){
    int arr[] = {1,2,3,-4,5,-6,-8,9};
    int n = 8;
    moveAllNegativeToleft(arr, n);

    for(int i=0; i<n; i++){
        cout<<arr[i]<< " ";
    }
    cout<<endl;
    
    return 0;

}