/*347. Top K Frequent Elements

Given an integer array nums and an integer k, return the k most frequent elements. You may return the answer in any order.

 

Example 1:

Input: nums = [1,1,1,2,2,3], k = 2

Output: [1,2]

Example 2:

Input: nums = [1], k = 1

Output: [1]

Example 3:

Input: nums = [1,2,1,2,1,2,3,1,3,2], k = 2

Output: [1,2] 


class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {

        map<int, int> mp;
        vector<pair<int, int>> num;
        vector<int> ans;

        for(int i = 0; i < nums.size(); i++)
        {
            mp[nums[i]]++;
        }

        for(auto p : mp)
        {
            num.push_back({p.second, p.first});
        }

        sort(num.begin(), num.end(), greater<pair<int,int>>());

        for(int i = 0; i < k; i++)
        {
            ans.push_back(num[i].second);
        }

        return ans;
    }
};
*/