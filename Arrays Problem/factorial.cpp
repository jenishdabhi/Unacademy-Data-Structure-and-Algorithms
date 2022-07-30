#include<iostream>
using namespace std;
int main()
{
   long long int fact=1;
   long long int n=15;

    for(int i=1;i<=n;i++)
    {
        fact=fact*i;
    }
    cout<<"factorial number is : "<<fact<<endl;
}