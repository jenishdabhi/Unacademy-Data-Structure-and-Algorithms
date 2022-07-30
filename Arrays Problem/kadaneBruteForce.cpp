#include<iostream>
using namespace std;
int maxarray(int arr[],int n)
{
    int cursum=0;
    int maxsum=INT32_MIN;
    for(int i=0;i<n;i++)
    {
        cursum+=arr[i];
        if(cursum<maxsum)
        {
            cursum=max(maxsum,cursum);
        }
        if(maxsum<0)
        {
            maxsum=0;
        }
        
    }
    return cursum;
}

int main()
{
    int arr[]={-2, -3, 4, -1, -2, 1, 5, -3};
    int n=sizeof(arr)/sizeof(arr[0]);
    int maxi=maxarray(arr,n);
    cout<<"Maximum subarray is "<<maxi<<endl;

    return 0;
} 