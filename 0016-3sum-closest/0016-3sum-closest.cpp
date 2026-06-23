class Solution {
public:
    int threeSumClosest(vector<int>& nums, int target) {

        sort(nums.begin(), nums.end());

        int n = nums.size();
        int sum = 0;
        int diff;
        int min_diff = INT_MAX;

        for(int i = 0; i < n; i++) {

            int left = i + 1;
            int right = n - 1;   

            while(left < right) {

                int curr = nums[left] + nums[right] + nums[i];

                if(curr == target) {
                    return target;   
                }

                else if(curr < target) {

                    diff = abs(target - curr);

                    if(diff < min_diff) {
                        min_diff = diff;
                        sum = curr;
                    }

                    left++;
                }

                else {

                    diff = abs(curr - target);

                    if(diff < min_diff) {
                        min_diff = diff;
                        sum = curr;
                    }

                    right--;
                }
            }
        }

        return sum;  
    }
};