#include <iostream>
using namespace std;
int main()
{

    cout << "even number is " << endl;
    int count = 10;
    for (int i = 0; i < count; i++)
    {
        if (i % 2 == 0)
        {
            cout << i << endl;
        }
    }
    cout << "odd number is " << endl;
    for (int i = 0; i < count; i++)
    {
        if (i % 2 != 0)
        {
            cout << i << endl;
        }
    }
    return 0;
}