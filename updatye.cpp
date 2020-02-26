//A program for delete array element
#include<iostream>
using namespace std;
int main()
{
    int a[6],n,i,j,m ;
    int temp;
    cin>>n;
    cout<<"Enter the array elements:";
    for(i=0;i<n;i++)
        cin>>a[i];
    cout<<"Enter the delete position:";
    cin>>m;
     for(i=m-1;i<n-1;i++)
     {
         a[i]=a[i+1];
     }
     cout<<"array elements after deletion:";
     for(i=0;i<n-1;i++)
     cout<<a[i]<<" ";
     return 0;
}
i love my country
