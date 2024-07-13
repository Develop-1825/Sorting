#include<iostream>
#include<stdlib.h>
#include<vector>
#include<bits/stdc++.h>
using namespace std;
bool myComp(vector<int>&a,vector<int>&b)
{
    // return a[1]<b[1]; //decreasing order
    return a[1]>b[1]; //increasing order
}


void print_vec(vector<vector<int>> &v)
{
    vector<int> temp;
    for(int i=0;i<v.size();i++)
    {
        temp = v[i];
        cout<<temp[0]<<" "<<temp[1]<<endl;
    }
}


int main()
{

    system("cls");
    vector<vector<int>> v;
    // vector<int> inner; //has to be cleared in every iteration,otherwise elements are going to be inserted.
    int n;
    cout<<"Enter the size of the vector: ";
    cin>>n;
    int a,b;
    for(int i=0;i<n;i++)
    {
        cout<<"Enter first and second element: ";
        cin>>a>>b;
        vector<int> inner; //has to be initialised inside the loop so that in every iteration it can be reinitiated
        inner.push_back(a);
        inner.push_back(b);
        v.push_back(inner);
        // inner.clear();
    }

    cout<<"Original Vector:"<<endl;
    print_vec(v);

    cout<<"Sorted Vector normally:"<<endl;
    sort(v.begin(),v.end());
    print_vec(v);

    cout<<"Sorted Vector (by 2nd Element/First Index):"<<endl;
    sort(v.begin(),v.end(),myComp);
    print_vec(v);
    return 0;
}