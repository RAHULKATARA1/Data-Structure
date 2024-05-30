#include<iostream>
using namespace std;
int main()
{
    // outerloop -> row
    for(int i=0; i<3; i++)
    {
        // for each row print 5 star
        // innerloop -> collum
        for( int j=0; j<5; j++)
        {
            cout << " * ";
        }
        cout<<endl;
    }
}