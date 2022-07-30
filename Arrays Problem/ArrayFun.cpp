#include<iostream>
using namespace std;
void facto(int n)
{

    int fact=n*(n-1);
    for(int i=1;i<=n;i=i+1)
    {
        //cout<<"even number is "<<i<<endl;
        cout<<"square is "<<(i*i)<<endl;
        int fact=n*(n-1);
        cout<<"Factorial is "<<fact<<endl;

    }
}
int main()
{
    int n=6;
    facto(n);

    return 0;
}