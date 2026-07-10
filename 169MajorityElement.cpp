// 169. Majority Element


// Given an array nums of size n, return the majority element.

// The majority element is the element that appears more than ⌊n / 2⌋ times. You may assume that the majority element always exists in the array.

 

// Example 1:

// Input: nums = [3,2,3]
// Output: 3
// Example 2:

// Input: nums = [2,2,1,1,1,2,2]
// Output: 2


/*class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int size=nums.size();
        unordered_map<int,int> mpp;
        for(int i=0;i<size;i++)
        {
            mpp[nums[i]]++;
        }
        int element = 0, maxFreq = 0;

    for(auto p :mpp) {
        if(p.second > maxFreq) {
            maxFreq = p.second;
            element = p.first;
        }
    }

    return element;
    }
};*/