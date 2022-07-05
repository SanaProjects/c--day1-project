#include<iostream>
using namespace std;

int main()
{
    int x,y,perimeter,area;

    cout<<endl<<"Calculate Perimeter & Area of a Rectangle.";
    cout<<endl<<"Longer Side Length = "; 
    cin>>x;

    cout<<endl<<"Shorter Side Length = "; 
    cin>>y;

    perimeter=2*(x+y);
    area=x*y;

    cout<<endl<<"Perimeter = "<<perimeter;
    cout<<endl<<"Area = "<<area;

    return 0;
}
