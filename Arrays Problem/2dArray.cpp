#include<iostream>
using namespace std;
bool find(int arr[3][3],int target,int row,int col)
    {
        
        for(int i=0;i<row;i++)
        {
            for(int j=0;j<col;j++)
            {
                
                if(arr[i][j]==target)
                {
                    return true;
                }
            }
            
        }
        return false;
    }
int main()
{
    int arr[3][3]={0,1,2,3,4,5,6,7,8};
    int n=13;
    
    cout<<"array is "<<find(arr,3,3,3)<<endl;
    
    return 0;
}