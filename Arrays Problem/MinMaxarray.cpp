#include<iostream>
using namespace std;

int maxarray(int arr[],int n)
{
    int maxarray=arr[0];
    for(int i=0;i<n;i++)
    {
        if(arr[i]>maxarray)
        maxarray=arr[i];
    }
    return maxarray;
}
int minarray(int arr[],int n)
{
    int minarray=arr[0];
    for(int i=1;i<n;i++)
    {
        if(arr[i]<minarray)
        minarray=arr[i];
    }
    return minarray;
}
int main()
{

   int arr[]={2,4,8,10,-12,500,154,35,3546,46};

    cout<<"maxarray is "<<maxarray(arr,10)<<" ";
    cout<<endl;

    cout<<"minarray is "<<minarray(arr,10)<<" ";
    cout<<endl;

    return 0;
}