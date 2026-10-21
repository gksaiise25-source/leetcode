class Solution {
public:
    int maximizeSum(vector<int>& nums, int k) {
        int n = nums.size();
        int mx = nums[0];
        for(int i=1;i<n;i++){
            if(nums[i]>mx){
                mx = nums[i];
            }
        }
        int sum = 0;
        for(int i=0;i<k;i++){
            sum+=mx+i;
        }
        return sum;
    }
};