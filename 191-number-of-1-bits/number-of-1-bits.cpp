class Solution {
public:
    int hammingWeight(int n) {
        vector<char> ans;
        int cnt = 0;
        while (n > 0) {
            
            int x = n % 2;
            ans.push_back(x);
            n /= 2;
        }
        for(int i=0;i<ans.size();i++){
            if(ans[i]==1){
                cnt++;
            }
        }
        return cnt;
    }
};