class Solution {
public:
    int threeSumClosest(vector<int>& nums, int target) {

        sort(nums.begin(), nums.end());

        int n = nums.size();

        int sum = nums[0] + nums[1] + nums[2];
        int min_diff = abs(target - sum);

        for(int i = 0; i < n - 2; i++) {

            int left = i + 1;
            int right = n - 1;

            while(left < right) {

                int curr = nums[i] + nums[left] + nums[right];
                int diff = abs(target - curr);

                if(diff < min_diff) {
                    min_diff = diff;
                    sum = curr;
                }

                if(curr == target) {
                    return target;
                }
                else if(curr < target) {
                    left++;
                }
                else {
                    right--;
                }
            }
        }

        return sum;
    }
};