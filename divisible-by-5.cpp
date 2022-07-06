#include<iostream>
using namespace std;

int main()
{
    int n;

    cout<<endl<<"Is the number divisible by 5 ?";
    cout<<endl<<"Put the number = ";
    cin>>n;

    

    
    if(n%5==0)
    {
        cout<<endl<<"Yes, it is divisible by 5.";
    }
    else
    {
        cout<<endl<<"No, it is not divisible by 5.";   
    }
    

    return 0;
}