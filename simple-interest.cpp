#include<iostream>
using namespace std;

int main()
{
    int p,r,t,simpleInterest;

    cout<<endl<<"Calculate Simple Interest :";
    cout<<endl<<"Principal = ";
    cin>>p;

    cout<<endl<<"Rate of interest = ";
    cin>>r;

    cout<<endl<<"Time = ";
    cin>>t;

    simpleInterest = p*r/100*t;

    cout<<endl<<"Simple Interest = "<<simpleInterest;
    

    return 0;
}