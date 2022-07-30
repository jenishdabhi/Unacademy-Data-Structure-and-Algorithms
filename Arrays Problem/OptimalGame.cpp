#include <iostream>
using namespace std;
void Optimalgame(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
    
}

int main()
{
    int arr[] = {5, 3, 7, 10};
    int n = sizeof(arr) / sizeof(arr[0]);

    return 0;
}