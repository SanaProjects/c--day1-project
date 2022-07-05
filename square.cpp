#include<iostream>
using namespace std;

int main()
{
    int x,perimeter,area;

    cout<<endl<<"Calculate Perimeter & Area of a Square.";
    cout<<endl<<"Side Length = ";
    cin>>x;

    perimeter=4*x;
    area=x*x;

    cout<<endl<<"Perimeter ="<<perimeter;
    cout<<endl<<"Area ="<<area;

    return 0;
}
