#include<iostream>
using namespace std;
int firstOccurance(int num,int target)
{

    int start=0;
    int end=nums.size()-1;
    int ans=-1;
    int mid=start+(end-start)/2;
    
    while(start<=end)
    {
        if(nums[mid]==target)
        {
            ans=mid;
            end=mid-1;
        }
        if(nums[mid]<target)
        {
            start=mid+1;
        }
        if(nums[mid]>target)
        {
            end=mid-1;
        }
        mid=start+(end-start)/2;
    }
    return ans;       
}
int lastOccurance(int num,int target)
{

    int start=0;
    int end=n-1;
    int ans=-1;
    int mid=start+(end-start)/2;
    
    while(start<=end)
    {
        if(num[mid]==target)
        {
            ans=mid;
            start=mid+1;
        }
        if(nums[mid]<target)
        {
            start=mid+1;
        }
        if(nums[mid]>target)
        {
            end=mid-1;
        }
        mid=start+(end-start)/2;
    }
    return ans;       
}
int main()
{

    int first=firstOccurance(nums,target);
    int last=lastOccurance(nums,target);
        
      
        ans.push_back(first);
        ans.push_back(last);
        
        return ans;
 return 0;
}