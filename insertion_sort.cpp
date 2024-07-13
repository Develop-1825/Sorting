#include <iostream>
#include <stdlib.h>
#include <vector>
using namespace std;

// Insertion sort - In each iteration places the ith element at its proper position.
void print(vector<int> &nums)
{
    for (int i = 0; i < nums.size(); i++)
    {
        cout << nums[i] << " ";
    }
}
void insertion(vector<int> &arr)
{
    int n = arr.size();

    //*using while loop
    // int i=1;
    // int j=0;
    // int temp;

    // while(i<n)
    // {

    //     temp=arr[i];
    //     j=i-1;
    //     while(arr[j]>temp && j>=0) //if previous element is greater keep decreasing j
    //     {
    //         //shift the elements to right
    //         arr[j+1]=arr[j];
    //         //decrease j
    //         j--;
    //     }
    //     arr[j+1]=temp;
    //     i++;

    // }

    //*using for loop
    int i, j;
    int temp;
    for (i = 1; i < n; i++)
    {
        temp = arr[i];
        for (j = i - 1; j >= 0 && arr[j] > temp; j--)
        {
            arr[j + 1] = arr[j];
        }
        arr[j + 1] = temp; // imp step
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
    insertion(nums);
    cout << endl;
    print(nums);

    return 0;
}