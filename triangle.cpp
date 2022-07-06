#include<iostream>
using namespace std;

int main()
{
    int a,b,c;

    cout<<endl<<"Is it Triangle";
    cout<<endl<<"Angle 1 = ";
    cin>>a;

    cout<<endl<<"Angle 2 = ";
    cin>>b;

    cout<<endl<<"Angle 3 = ";
    cin>>c;

    
    if(a+b+c==180)
    {
        cout<<endl<<"This is a Triangle";
    }
    else
    {
        cout<<endl<<"This is not a Triangle";   
    }
    

    return 0;
}