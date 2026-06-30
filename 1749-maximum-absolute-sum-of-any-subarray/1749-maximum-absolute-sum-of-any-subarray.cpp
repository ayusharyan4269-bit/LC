class Solution {
public:
    int maxAbsoluteSum(vector<int>& a) {
        long long sum = a[0];
        long long bestEnding = a[0];
        
    long long maxCur = 0, minCur = 0;
    long long ans = 0;
    int n = a.size();
    for (int i = 0; i < n; i++) {
        maxCur = max((long long)a[i], maxCur + a[i]);
        minCur = min((long long)a[i], minCur + a[i]);
        ans = max(ans, max(abs(maxCur), abs(minCur)));
    }
        return ans;
        
    }
};