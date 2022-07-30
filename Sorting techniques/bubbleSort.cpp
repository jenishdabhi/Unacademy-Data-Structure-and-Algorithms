#include <iostream>
using namespace std;
void bubblesort(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j <= n - 1; j++)
        {
            if (arr[i] > arr[j])
            {
                swap(arr[i], arr[j]);
            }
        }
    }
}
void printarray(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << endl;
    }
}
int main()
{
    int arr[] = {2, 9, 45, 0, 11};
    int n = sizeof(arr) / sizeof(arr[0]);

    bubblesort(arr, n);
    printarray(arr, n);

    return 0;
}