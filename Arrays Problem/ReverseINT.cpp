#include<iostream>
using namespace std;
int main(){

    int n,reminder,revers=0;
    cout<<"enter number : ";
    cin>>n;
    int sum=n;

    while (n!=0)
    {
        reminder=n%10;
        revers=(revers*10)+reminder;
        n=n/10;
        
    }
    cout<<"reveres num is : "<<revers<<endl;
}