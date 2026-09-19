class Solution {
public:
    int findMin(vector<int>& nums) {
        int n = nums.size();
        int st = 0 ;
        int end = n-1;
        int ans = nums[0];
         while (st <= end) {
            
            if (nums[st] <= nums[end]) {
                ans = min(ans, nums[st]); 
                break;
            }

            int mid = st + (end - st) / 2;

            ans = min(ans, nums[mid]);

            if (nums[st] <= nums[mid]){
                st = mid + 1; 
            }
         
            else {
                end = mid - 1;
            }
        }

        return ans;
    }
};