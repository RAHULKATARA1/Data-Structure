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


int main(){

    Heap h(20);
    //insertion

    h.insert(10);
    h.insert(20);
    h.insert(5);
    h.insert(11);
    h.insert(6);

    cout<<"printing the Heap    "<<endl;
    h.printHeap();
    int ans = h.deleteheap();
    cout<<"After deletion   "<<ans<<endl;
    h.printHeap();
    return 0;
}