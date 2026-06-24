class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
    int low = 0 ;
    int high =0;
int sum = 0;
int n = nums.size();
int len;
int minlen = INT_MAX;
    for(int i = low ; i<= high ; i++){
        sum += nums[i];
    }

while(high<n){
if(sum>=target){

   minlen = min (minlen ,  high - low + 1);
    low++;
sum = sum - nums[low-1];
}

else{
    high++;
  if(high<n){
    sum = sum + nums[high];
  }
}

}
return minlen == INT_MAX ? 0 : minlen;
    }
};