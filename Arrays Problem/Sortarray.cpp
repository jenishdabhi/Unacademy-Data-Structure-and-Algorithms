#include<iostream>
using namespace std;

int main()
{
    int arr[] = {2, 4, 7, 6, 4, 98, 46};
    int n = sizeof(arr) / sizeof(arr[0]);

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
    
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << endl;
    }

}