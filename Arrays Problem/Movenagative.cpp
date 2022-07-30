#include<iostream>
using namespace std;
void sorted(int arr[],int n)
{
    int j = 0;
    for (int i = 0; i < n; i++) {
        if (arr[i] < 0) {
            if (i != j)
                swap(arr[i], arr[j]);
            j++;
        }
    }
        
}
void printarray(int arr[],int n)
{
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }cout<<endl;
}
int main()
{
    
    int arr[]={2,-3,2,-4,5};
    int n=sizeof(arr)/sizeof(arr[0]);
    
    sorted(arr,n);
    printarray(arr,n);

    return 0;
}