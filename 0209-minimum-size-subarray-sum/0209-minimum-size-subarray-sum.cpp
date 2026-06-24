class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {

        int low = 0;
        int high = 0;
        int sum = nums[0];

        int n = nums.size();
        int minlen = INT_MAX;

        while(high < n) {

            if(sum >= target) {

                minlen = min(minlen, high - low + 1);

                sum -= nums[low];
                low++;
            }
            else {

                high++;

                if(high < n)
                    sum += nums[high];
            }
        }

        return minlen == INT_MAX ? 0 : minlen;
    }
};