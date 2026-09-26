class Solution {
public:
    int countSpecialIntegers(vector<int>& nums) {
        int n = nums.size();
        int cnt = 0;
        map<int,int> mp;
        for(auto x:nums){
            mp[x]++;
        }
        vector<int> sai;
        for(auto x:mp){
            if(x.second == 3){
                for(int i=0;i<n;i++){
                    if(nums[i]==x.first){
                        sai.push_back(i);
                    }
                }
                
                if(sai[1]-sai[0] == sai[2]-sai[1]){
                    cnt++;
                }
            }
            sai.clear();
        }
        return cnt;
    }
};