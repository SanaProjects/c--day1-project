#include<iostream>
using namespace std;

int main()
{
    int a,b,c,s,perimeter,area;

    cout<<endl<<"Calculate Perimeter & Area of a Triangle.";
    cout<<endl<<"Side 1 Length = ";
    cin>>a;

    cout<<endl<<"Side 2 Length = ";
    cin>>b;

    cout<<endl<<"Side 3 Length = ";
    cin>>c;

    perimeter=a+b+c;
    s=(a+b+c)/2;
    area=(s*(s-a)*(s-b)*(s-c))^2;

    cout<<endl<<"Perimeter = "<<perimeter;
    cout<<endl<<"Area = "<<area;

    return 0;
}