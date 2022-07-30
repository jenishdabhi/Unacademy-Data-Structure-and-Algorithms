#include<iostream>
using namespace std;
int main(){

    int n,reminder;
    cin>>n;
    int reversed=0;
    int sum=n;

    while (n!=0)
    {
        reminder=n%10;
        reversed=(reversed*10)+reminder;
        n=n/10;
    }

    cout<<"reverse is "<<reversed<<endl;
    
    if(sum==reversed){
        cout<<"number is palindrome"<<endl;
    }
}