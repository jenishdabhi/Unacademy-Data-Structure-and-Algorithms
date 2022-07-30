#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main()
{
    string str = "ABC";
    int start = 0;
    int end = str.size()-1;

    while (start <= end)
    {
        swap(str[start], str[end]);
        start++;
        end--;
    }

    cout << "reverse string is " << str << endl;

    return 0;
}