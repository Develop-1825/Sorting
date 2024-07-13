#include <iostream>
#include <stdlib.h>
#include <vector>
using namespace std;

// Bubble sort - Places the ith largest element at the end in the ith iteration. Uses pairwise swap.
void bubble(vector<int> &arr)
{
    int n = arr.size();
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = 0; j < n - i - 1; j++)
        {
            if (arr[j + 1] < arr[j])
                swap(arr[j + 1], arr[j]);
        }
    }
}
void print(vector<int> &nums)
{
    for (int i = 0; i < nums.size(); i++)
    {
        cout << nums[i] << " ";
    }
}
int main()
{

    system("cls");

    vector<int> nums;
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
    bubble(nums);
    cout << endl;
    print(nums);

    return 0;
}