//Program to reverse the array

#include <iostream>

using namespace std;

int main()
{
    int a[10];
    int n,temp;
    cout<<"Enter the number of elements: ";
    cin>>n;
    cout<<"\nEnter the elements: "<<endl;
    for(int i=0;i<n;i++)
        cin>>a[i];
    for(int i=0,j=n-1;i<j;i++,j--)
    {
        temp = a[i];
        a[i] = a[j];
        a[j] = temp;
     
    }

    cout<<"\nThe reversed Array is: ";
    for(int i=0;i<n;i++)
        cout<<a[i]<<" ";
    cout<<endl;
}