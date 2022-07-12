#include<iostream>
using namespace std;

int main()
{
    int n,i;

    cout<<endl<<"Table of :";
    cin>>n;

    for (i=1; i<=10; i++)
    { 
        cout<<endl<<i*n;
    }
    
    return 0;

}