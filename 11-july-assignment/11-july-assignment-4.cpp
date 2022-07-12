#include<iostream>
using namespace std;

int main()
{
    int n,i,f=1;

    cout<<endl<<"Enter the number :";
    cin>>n;

    for (i=1; i<=n; i++)
    { 
        f=f*i;
    }

    cout<<endl<<"factorial of "<<n<<" is "<<f;
    
    return 0;

}