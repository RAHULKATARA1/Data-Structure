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
    void printHeap(){
        for(int i =1; i<size; i++){
            cout<<arr[i]<<"   ";
        }
        cout<<endl;
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
    return 0;
}