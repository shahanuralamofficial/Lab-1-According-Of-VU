//write a c++ program to count the total negative numbers in an array.

#include<iostream>
using namespace std;
int main()

{
    int n,i,count=0;
    cout<<"Enter the size of the array: ";
    cin>>n;

    int a[n];
    cout<<"\nEnter some positive & Negative: ";
    for(i=0; i<n; i++)
    {
        cin>>a[i];
        if(a[i]<0)
        {
            count++;
        }
    }

    cout<<"\nThe total number of negative numbers in the array is: "<<count<<endl;
    return 0;
}
