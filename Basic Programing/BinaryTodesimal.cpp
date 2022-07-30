#include<iostream>
#include<math.h>
using namespace std;
int main(){

    /*    int n=13;

    while(n!=0)
        {
            int digit=n%10;
            cout<<"digit:"<<digit<<endl;
            n=n/10;
        } */
        int n=50;
        int i=0;
        int ans=0;/* code */
        while (n!=0)
        {
            int bit=n&1;
            ans=(bit*pow(10,i)+ans);
            n=n>>1;
            i++;
        }
        cout<<"binary is "<<ans<<endl;
        
        for(int i=0;i<=n;i++)
        {
            for(int j=0;j<=n;j++)
            {
                cout<< "i is: "<<i<<" and "<<"j is: "<<j <<endl;
            }
        }

}