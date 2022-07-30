#include<iostream>
using namespace std;
int main()
{

    for(int row=1;row<5;row++)
    {
        for(int col=0;col<=5;col++)
        {
            cout<<((row+col)%2);
        }
        cout<<endl;
    }   
 return 0;
}

// 10101
// 01010
// 10101
// 01010