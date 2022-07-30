#include<iostream>
using namespace std;
int main()
{
    
    int largest=INT16_MIN;
    int secondlargest=INT16_MIN;

    int arr[]={2,4,8,10,10,45,78};
    int n = sizeof(arr) / sizeof(arr[0]);
    

    for(int i=0;i<n;i++)
    {
        if(arr[i]>largest)
        {
            secondlargest=largest;
            largest=arr[i];
        }
        else if(largest>arr[i] && secondlargest<arr[i])
        {
            secondlargest=arr[i];
        }   
    }
    return secondlargest;
}
