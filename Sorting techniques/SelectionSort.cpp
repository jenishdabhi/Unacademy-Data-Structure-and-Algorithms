#include<iostream>
using namespace std;
void swap(int *a,int *b)
{
    int temp=*a;
    *a=*b;
    *b=temp;   
}
void selectionSort(int arr[],int n)
{
    for (int i = 0; i < n-1; i++)
    {
        int minindex=i;
        for(int j=i+1;j<=n;j++)
        {
            if(minindex<arr[j])
            minindex=arr[j];
        }
        swap(arr[i],arr[minindex]);
    }
}
void printarray(int arr[],int n)
{
    for (int i = 0; i < n; i++)
    {
        cout<<arr[i]<<endl;
    }   
}
int main()
{

int arr[]={6,2,8,4,10};
int n=sizeof(arr)/sizeof(arr[0]);

selectionSort(arr,n);
cout<<"Sorted Array is "<<endl;
printarray(arr,n);

 return 0;
}