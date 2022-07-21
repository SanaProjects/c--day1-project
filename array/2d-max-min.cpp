#include<iostream>
#include<iomanip>
using namespace std;

int main()
{
    int a[3][3],b[3][3],max1,min1,max2,min2,max,min,i,j;

    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            cout<<endl<<"Enter value of a: ";
            cin>>a[i][j];

            if (i==0 && j==0)
            {
                max1=a[i][j];
                min1=a[i][j];
            }
            else if (a[i][j]>max1)
            {
                max1=a[i][j];
            }
            else if (a[i][j]<min1)
            {
                min1=a[i][j];
            }
        }
        
        
    }
    for(i=0;i<3;i++)
    {       
        for(j=0;j<3;j++)
        {
            cout<<endl<<"Enter value of b: ";
            cin>>b[i][j];

             if (i==0 && j==0)
            {
                max2=b[i][j];
                min2=b[i][j];
            }
            else if (b[i][j]>max2)
            {
                max2=b[i][j];
            }
            else if (b[i][j]<min2)
            {
                min2=b[i][j];
            }
        }
        
    }

    if (max1>=max2)
    {
        max=max1;
        
    }
    else if (max1<max2)
    {
        max=max2;
        
    };

    if(min1<=min2)
    {
        min=min1;
    }
    else if(min1>min2)
    {
        min=min2;
    };
   

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
        
        cout<<endl;
        
    }
    
    cout<<endl<<"Maximum A = "<<max1;
    cout<<endl<<"Minimum A = "<<min1;
    cout<<endl<<"Maximum B = "<<max2;
    cout<<endl<<"Minimum B = "<<min2;
    cout<<endl<<"Maximum of A & B = "<<max;
    cout<<endl<<"Minimum of A & B = "<<min;
    
   
    
    
    


    return 0;
}