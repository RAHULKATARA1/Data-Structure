#include<iostream>
using namespace std;
void minimum(int *arr , int size , int index, int &maxi){
    // base case
    if(index >= size){
        return;
    }
    maxi = max(maxi , arr[index]);
    // recursive call
    minimum(arr , size , ++index , maxi);
}
int main()
{
    int arr[]={40,30,10,50,20};
    int size =5;
    int index = 0;
    int maxi = INT_MIN;
    minimum(arr, size , index ,maxi);
    cout<<maxi<<endl;

    return 0;
}