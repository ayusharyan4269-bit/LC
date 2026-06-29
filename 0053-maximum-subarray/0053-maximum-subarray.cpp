class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int ans = nums[0];
int n = nums.size();
int be = nums[0];
int v2 = nums[0];

        for(int i=1;i<n;i++){
            int v1 = nums[i];
           v2 = nums[i] + be;

            be = max(v1,v2);

            ans = max(ans , be);


        }
    
    return ans;
    }
};