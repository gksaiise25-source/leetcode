class Solution {
public:
    int countSpecialIntegers(vector<int>& nums) {
        int n =nums.size();
        int cnt = 0;
        map<int , vector<int> > mp;
        for(int i=0;i<n;i++){
            mp[nums[i]].push_back(i);
        }
        for(auto x:mp){
            int y = x.second.size();
            if(y >= 3){
                
                bool ans = true;
                int check = x.second[1]-x.second[0];
                for(int i=1;i<y-1;i++){
                    if(x.second[i+1]-x.second[i] != check){
                        ans = false;
                        break;
                    }
                }
                if(ans){
                    cnt++;
                }
            }
        }
        return cnt;
    }
};