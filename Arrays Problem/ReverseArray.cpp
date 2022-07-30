#include<iostream>
using namespace std;
void reverse(int arr[],int n)
{
    int i=0;
    int j=n-1;
    while (i<=j)
    {
        swap(arr[i],arr[j]);
        i++;
        j--;
    }
    
}
int main()
{
    int arr[]={1,2,3,4,5};
    reverse(arr,5);

    for(int i=0;i<5;i++)
    {
    cout<<arr[i]<<" ";
    cout<<endl;
    }
    return 0;
}