#include <iostream>
using namespace std;

int binarySearch(int arr[], int size, int key)
{

    int start = 0;
    int end = size - 1;

    int mid = start + (end - start) / 2;

    while (start <= end)
    {
        if (arr[mid] == key)
        {
            return mid;
        }   
        if (key > arr[mid])
        {
            start = mid + 1;
        }
        else
        {
            end = mid - 1;
        }

        mid = start + (end - start)/2;
    }
    return -1;
}

int main()
{

    int even[6] = {-1,0,3,5,9,12};
    int odd[5] = {3, 5, 7, 9, 11};

    int evenindex = binarySearch(even, 6, 9);
    cout << "index of 5 is  " << evenindex << endl;

    int oddindex = binarySearch(odd, 5, 8);
    cout << "index of 3 is " << oddindex << endl;

    return 0;
}
