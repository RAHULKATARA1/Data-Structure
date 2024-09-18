#include<iostream>
using namespace std;

class Heap{
    public:
    int *arr;
    int capacity;
    int size;
    Heap(int capacity){
        this->arr = new int[capacity];
        this->capacity = capacity;
        // size = current number of element in heap
        this->size = 0;
    }
    void insert(int val){

        if(size==capacity){
            cout<<"Heap overflow"<<endl;
            return;      
        }
        // size increase
        size++;
        int index = size;
        arr[index]=val;

        //correct position leke jana h

        while(index>1){
            int parentindex = index/2;
            if(arr[index]>arr[parentindex]){
                swap(arr[index],arr[parentindex]);
                index = parentindex;
            }
            else{
                break;
            }
        }
        
    }
    //print heap
    void printHeap(){
        for(int i =1; i<size; i++){
            cout<<arr[i]<<"   ";
        }
        cout<<endl;
    }
    int deleteheap(){
        int  answer = arr[1];
        //replace
        arr[1]=arr[size];
        //last element ko delete krdo uski original position se
        size--;

        int index=1;
        while(index<size){
            int leftindex = 2*index;
            int rightindex = 2*index+1;
            //find out sabse bada kon h
            int largestindex = index;
            //check left child
            if(leftindex <= size && arr[largestindex]<arr[leftindex]){
                largestindex = leftindex;
            }
            if(rightindex <=size && arr[largestindex]<arr[rightindex]){
                largestindex = rightindex;
            }
            // no change
            if(index==largestindex){
                break;
            }
            else{
                swap(arr[index],arr[largestindex]);
                index = largestindex;
            }

        }
        return answer;
    }
};

void heapify(int *arr , int n, int index){
    int leftindex = 2*index;
    int rightindex = 2*index+1;
    int largestindex = index;

    // 3 mese max nikalo
    
    if(leftindex<=n && arr[leftindex]>arr[largestindex]){
        largestindex = leftindex;

    }
    if(rightindex <=n && arr[rightindex]>arr[largestindex]){
        largestindex = rightindex;
    }
    if(index != largestindex){
        swap(arr[index],arr[largestindex]);

        //recursion
        index = largestindex;
        heapify(arr,n,index);
    }
}
// create  a heap from array

void buildheap(int arr[],int n){
    for(int index = n/2 ; index>0; index--){
        heapify(arr,n,index);
    }
}
void heapsort(int arr[],int n){
    while(n!=1){
        swap(arr[1],arr[n]);
        n--;
        heapify(arr,n,1);
    }
}


int main(){
    int arr[]={-1,5,10,15,20,25,12};
    int n=6;
    buildheap(arr,6);
    cout<<"printing heap:   "<<endl;
    for(int i=1; i<=6; i++){
        cout<<arr[i]<<" ";

    }
    cout<<endl;
    heapsort(arr,n);
    cout<<"printing heap sort:  "<<endl;
    for(int i=1; i<=6;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    return 0;
}