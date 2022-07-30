#include <iostream>
using namespace std;
// int factorial(int n)
// {
    
//     if (n == 1)
//         return 1;
    
//     int smallproblem=factorial(n-1);
//     int bigproblem=n*smallproblem;
//     return bigproblem;
// }
void print(int n){
    //counting
if(n<1){
    return;
}

print(n-1);
cout<<n<<endl;
}
int main()
{

    // int n;
    // cout << "Enter n Number" << endl;
    // cin >> n;

    // cout << "factorial is " << factorial(n) << endl;
    print(5);

}

