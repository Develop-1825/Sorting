#include<iostream>
#include<stdlib.h>
#include<vector>
using namespace std;

//Selection sort - In each iteration places the ith element at its proper position.
void insertion(vector<int> &arr)
{
    int n=arr.size();
    for(int i=0;i<n-1;i++) //iterate till n-1 as j starts from i+1 hence if i=n-1 j=n =>out of bound.
    {
        for(int j=i+1;j<n;j++)
        {
            if(arr[i]>arr[j])
            swap(arr[j],arr[i]);
        }
    }
}
void print(vector<int>&nums)
{
    for(int i=0;i<nums.size();i++)
    {
        cout<<nums[i]<<" ";
    }
}
int main()
{

    system("cls");

    vector<int>nums;
    nums.push_back(10);
    nums.push_back(10);
    nums.push_back(2);
    nums.push_back(2);
    nums.push_back(5);
    nums.push_back(5);
    nums.push_back(2);
    nums.push_back(5);
    nums.push_back(5);
    nums.push_back(20);
    nums.push_back(20);
    nums.push_back(11);
    nums.push_back(11);
    nums.push_back(10);
    nums.push_back(10);

    print(nums);
    insertion(nums);
    cout<<endl;
    print(nums);
    
    return 0;
}