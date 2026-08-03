class Solution {
public:
    void nextPermutation(vector<int>& nums) {
        int n = nums.size();
        bool check ;
        int j = n-1;
        for(int i=n-2;i>=0;i--){
            if(nums[i]>nums[i+1]){
                check = true;
                continue;
                
            }if(nums[i]<nums[i+1]){
                   check = 0;
                   while(nums[i]>=nums[j]){
                    j--; 
                   }
                   swap(nums[i],nums[j]);
                   j=i+1;
                   
                   break;
            }}
            if(check){
                reverse(nums.begin(),nums.end());
                }if(!check){
            sort(nums.begin()+j,nums.end());
            }

        
    }
};


