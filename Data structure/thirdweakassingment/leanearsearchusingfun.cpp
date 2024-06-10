#include<iostream>
using namespace std;
bool linearsearch(int arr[], int size, int target){
    for(int i=0; i<size; i++){
        if(arr[i]==target){
            return true; 
        }
    }
    return false;
}
int main(){
    int arr[]={10,11,24,25,37};
    int size=5;
    int target=37;
    bool ans = linearsearch(arr, size , target);
    if(ans==1){
        cout<<"Target is found"<< endl;
    }
    else{
        cout<< "target is not found"<< endl;
    }
}