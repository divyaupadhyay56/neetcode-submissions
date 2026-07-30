class Solution {
public:
    bool solve (vector<int>& nums, int idx){
        int n = nums.size();
        if(idx == n-1) return true;
        for(int i=1;i<=nums[idx];i++){
            if(solve(nums,idx+i)) return true;
        }
        return false;
    }
    bool canJump(vector<int>& nums) {
        return solve(nums,0);
    }
};
