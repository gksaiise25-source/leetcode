class Solution {
public:
    int largestAltitude(vector<int>& gain) {
        int n = gain.size();
        vector<int> alt(n + 1);
        int pre = 0;
        alt[0] = 0;
        for (int i = 1; i <= n; i++) {
            pre += gain[i - 1];
            alt[i] = pre;
        }
        int max = alt[0];
        for(int i=1;i<alt.size();i++){
            if(alt[i]>max){
                max = alt[i];
            }
        }
        return max;
    }
};