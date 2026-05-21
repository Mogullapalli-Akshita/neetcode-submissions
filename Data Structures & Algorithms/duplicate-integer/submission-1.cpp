class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        unordered_set<int> h;
        for(int i=0; i<nums.size(); i++)
        {
            if(h.count(nums[i]) != 0)
                return true;
            h.insert(nums[i]);
        }
        return false;
    }
};