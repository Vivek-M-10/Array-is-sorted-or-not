#include<iostream>
using namespace std;

bool isSorted(int a[], int n)
{  
    //base case
    if(n==0 or n==1)
    {
        return true;
    }
    if(a[0]<a[1] and isSorted(a+1,n-1))
    {
        return true;
    }

    return false;

}

bool isSorted1(int a[], int i, int n)
{
    if(i==n-1)
    {
        return true;
    }
    if(a[i]<a[i+1] and isSorted1(a,i+1,n))
    {
        return true;
    }

    return false;


}

int main()
{
    int n_o_e;
    cout<<"Number of element = ";
    cin>>n_o_e;
    int a[n_o_e];
    int i = 0;
    int size = sizeof(a)/sizeof(int);
    for(int i=0;i<size;i++)
    {
        cin>>a[i];
    }

    cout<<isSorted(a,size-1)<<endl;
    cout<<isSorted1(a,i,size-1);


}