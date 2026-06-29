class Solution {
public:
    int maxProduct(vector<int>& a) {
   
        int ans = a[0];
int n = a.size();
int minend = a[0];
int maxend = a[0];
int be = a[0];
for(int i=1; i< n ; i++){

int v1 = a[i];
int v2 = minend * a[i];
int v3 = maxend*a[i];


 minend = min(v1 , min(v2,v3));
 maxend = max (v1 , max(v2,v3));

 
    be = max (minend , maxend);
    ans = max(ans,be);
}
return ans;
    }
};