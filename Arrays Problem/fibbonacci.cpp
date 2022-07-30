#include <iostream>
using namespace std;
int main()
{
    int a = 0;
    int b = 1;
    int n = 10;
    int sum=0;

    for (int i = 1; i <= n; i++)
    {
        if (i == 1)
        {
            cout << a<<","<<endl;
            continue;
        }
        if (i == 2)
        {
            cout << b<<","<<endl;
            continue;
        }
        
        sum = a + b;
        a = b;
        b = sum;
        cout << sum << ","<<endl;
    }

    return 0;
}