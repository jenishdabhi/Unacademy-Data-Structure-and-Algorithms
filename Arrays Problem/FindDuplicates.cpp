#include<iostream>
#include<vector>
using namespace std;

 vector<int>duplicates(int arr[],int n)
{
    
    vector<int>ans;
    for(int i=0;i<n;i++)
    {
        if(arr[i]==arr[i+1])
        ans.push_back(arr[i]);
    }
    return ans;
    
}
int main()
{
    int arr[]={2,3,1,2,3};
    int n=sizeof(arr)/sizeof(arr[0]);
    

 return 0;
}