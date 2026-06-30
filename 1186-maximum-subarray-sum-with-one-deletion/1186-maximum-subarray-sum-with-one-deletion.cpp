class Solution {
public:
    int maximumSum(vector<int>& arr) {

        int prevnodelete = arr[0];
        int prevonedelete = arr[0];
        int ans = arr[0];

        for (int i = 1; i < arr.size(); i++) {

            int temp = prevnodelete;

            prevnodelete = max(prevnodelete + arr[i], arr[i]);

            prevonedelete = max(prevonedelete + arr[i], temp);

            ans = max(ans, max(prevnodelete, prevonedelete));
        }

        return ans;
    }
};