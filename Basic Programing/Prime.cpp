#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"enter number"<<endl;
    cin>>n;
    for(int i=2;i<n/2;i++)
    {
        if(n%i==0)
        {
            cout<<"Number is prime Number"<<endl;
            
        }
        else{

            cout<<"Number is not prime number"<<endl;
        }
    }
}