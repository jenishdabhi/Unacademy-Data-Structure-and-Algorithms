#include<iostream>
using namespace std;
int getMax(int arr[],int n)
{
    int Ans=0;
    int maxsum=INT16_MIN;

    for(int i=0;i<n;i++)
    {
        maxsum+=arr[i];
        if(Ans<maxsum)
        {
            Ans=maxsum;
        }
        if(maxsum<0)
        {
            maxsum=0;
        }   
    }
     return Ans;
}
int main()
{
    int arr[]={-2, -3, 4, -1, -2, 1, 5, -3};
    cout<<"Max sub array is "<<getMax(arr,5)<<endl;

}