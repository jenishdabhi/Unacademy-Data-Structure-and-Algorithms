#include <iostream>
using namespace std;
int main()
{
    int arr[] = {15, 18, 16, 18, 16, 15, 89};
    int n = sizeof(arr) / sizeof(arr[0]);

    int ans = arr[0];
    for (int i = 1; i < n ; i++)
    {
        ans = ans ^ arr[i];
    }
    cout << ans << endl;

    return 0;
}