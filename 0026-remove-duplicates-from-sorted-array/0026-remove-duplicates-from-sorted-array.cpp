class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int n = nums.size();
        vector<int> ans;
        int cnt =0;
        for(int i=0;i<n-1;i++){
            if(nums[i] == nums[i+1]){
                continue;
            }else{
                 ans.push_back(nums[i]);
                 cnt++;
            }

        }
        
        ans.push_back(nums[n-1]);
        cnt++;

        for(int i=0;i<ans.size();i++){
              nums[i]=ans[i];
        }
        
        return cnt;
    }
};