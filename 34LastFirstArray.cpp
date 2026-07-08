/*Given an array of integers nums sorted in non-decreasing order, find the starting and ending position of a given target value.

If target is not found in the array, return [-1, -1].

You must write an algorithm with O(log n) runtime complexity.

 

Example 1:

Input: nums = [5,7,7,8,8,10], target = 8
Output: [3,4]*/#include<bits/stdc++.h>
using namespace std;
int main ()
{
    int nums[]={1,2,3,3,5};
    int target=3;
    vector<int> v={-1,-1};

    int len=sizeof(nums)/sizeof(nums[0]);
    if(len==0)
    {
        return 0;
    }
    int j=len-1;
for(int i=0, j=len-1; i<len; i++, j--)
{
    if(nums[i]==target && v[0]==-1)
        v[0]=i;

    if(nums[j]==target && v[1]==-1)
        v[1]=j;
}
    cout<<v[0]<<" "<<v[1]<<endl;
    return 0;

}