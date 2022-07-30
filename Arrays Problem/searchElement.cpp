#include<iostream>
using namespace std;

int main()
{
    int arr[]={1,2,3,4,5,6,7,8,9};
    int n=sizeof(arr)/sizeof(arr[0]);
    int k=8;

    for(int i=0;i<n;i++)
    {
        if(arr[i]==k)
        {
            cout<<"element is present"<<endl;
        }
        else{
            cout<<"element is not present"<<endl;
        }
    }
}