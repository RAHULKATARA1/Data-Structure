#include<iostream>
#include<queue>
using namespace std;

int main(){

    // min heap banane ka syntax

    priority_queue<int, vector<int>, greater<int> > pq;

    //insertion
    pq.push(100);
    pq.push(90);
    pq.push(70);

    // corrected 'end' to 'endl'
    cout << "top element  " << pq.top() << endl;

    return 0;
}
