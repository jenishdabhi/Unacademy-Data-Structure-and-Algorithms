#include <iostream>
using namespace std;
void rotate(int arr[], int n)
{
    int i = 0, j = n - 1;
    while (i != j)
    {
        swap(arr[i], arr[j]);
        i++;
    }
}
int main()
{
    int arr[] = {1, 2, 3, 4, 5};

    int n = sizeof(arr) / sizeof(arr[0]);

    rotate(arr, n);

    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << endl;
    }

    return 0;
}