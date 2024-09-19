#include<iostream>
#include<queue>
using namespace std;

// maxheap by default
int main(){
    // create max heap
    priority_queue<int>pq;

    // insertion
    pq.push(10);
    pq.push(20);
    pq.push(30);
    pq.push(40);
    pq.push(50);
    pq.push(60);

    cout<<"Top element of heap  "<<pq.top()<<endl;
    
    pq.pop();

    cout<<pq.top()<<endl;
    return 0;
}