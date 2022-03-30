//Program to find the maximum and minimum elements in the array

#include <iostream>

using namespace std;

int min(int A[], int n)
{
    int min = A[n];
    for(int i=0;i<n;i++)
    {
        if(A[i]<min)
            min = A[i];
    }
    return min;
}

int max(int A[], int n)
{
    int max = A[0];
    for(int i=0;i<n;i++)
    {
        if(A[i]>max)
            max = A[i];
    }
    return max;
}

int main()
{
    int A[10],n,minimum,maximum;
    cout<<"Enter the number of elements in the array: ";
    cin>>n;
    cout<<"\nEnter the elements in the array: ";
    for(int i = 0;i<n;i++)
        cin>>A[i];
    
    minimum = min(A,n);
    maximum = max(A,n);

    cout<<"The Minimum element in the array is: "<<minimum<<endl;
    cout<<"The Maximum element in the array is: "<<maximum<<endl;
}