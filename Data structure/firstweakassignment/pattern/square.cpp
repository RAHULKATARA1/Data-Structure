#include<iostream>
using namespace std;
int main()
{
    // outerloop -> row
    for(int i=0; i<4; i++)
    {
        // innerloop -> collum
        for( int j=0; j<4; j++)
        {
            cout << " * ";
        }
        cout<<endl;
    }
}