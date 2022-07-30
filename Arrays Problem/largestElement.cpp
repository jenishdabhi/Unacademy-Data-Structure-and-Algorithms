#include <iostream>
using namespace std;
int main()
{
    int arr[] = {2, 45, 78, 11, 22, 65};
    int maxarray = arr[0];

    for (int i = 0; i < 6; i++)
    {
        if (arr[i] > maxarray)
        {
            maxarray = arr[i];
        }
    }
    cout << "maxarray is " << maxarray << endl;

    return 0;
}