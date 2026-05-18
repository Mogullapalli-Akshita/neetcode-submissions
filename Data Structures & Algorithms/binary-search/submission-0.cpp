class Solution {
public:
    int search(vector<int>& nums, int target) {
        int len, mid, low, high;
        len = nums.size();
        low = 0;
        high = len-1;
        while(low <= high)
        {
            mid = (low+high)/2;
            cout<<low<<" "<<mid<<" "<<high<<endl;
            if(nums[mid] == target)
                return mid;
            else if (nums[mid] < target)
            {
                low = mid+1;
            }
            else if (nums[mid] > target)
            {
                high = mid-1;
            }
        } 
        return -1;
    }
};
