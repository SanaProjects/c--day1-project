#include<iostream>
#include<iomanip>
using namespace std;

int main()
{
    int a[3][3],b[3][3],c[3][3],i,j;

    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            cout<<endl<<"Enter value of a: ";
            cin>>a[i][j];
        }
        
        
    }
    for(i=0;i<3;i++)
    {       
        for(j=0;j<3;j++)
        {
            cout<<endl<<"Enter value of b: ";
            cin>>b[i][j];
        }
        
    }
    for(i=0;i<3;i++)
    {       
        for(j=0;j<3;j++)
        {
           c[i][j]=a[i][j]+b[i][j];
        }
        
    }
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            cout<<setw(3)<<a[i][j]; 
            
        }
        cout<<"    ";

        for(j=0;j<3;j++)
        {
            cout<<setw(3)<<b[i][j]; 
        }
        cout<<"    ";

        for(j=0;j<3;j++)
        {
            cout<<setw(3)<<c[i][j]; 
        }
        cout<<endl;
        
    }
    
   
    
    
    


    return 0;
}