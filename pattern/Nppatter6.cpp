#include<iostream>
using namespace std;
int main()
{
    int n=5;
    for(int i=1;i<=n;i++){
        for(int j=0;j<n;j++){
            cout<<(i%2)<<" ";
        }
        cout<<endl;
    }
 return 0;
}

// 1111
// 0000
// 1111
// 0000