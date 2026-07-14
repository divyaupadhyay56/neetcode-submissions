class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        vector<vector<int>> ans;
        set<vector<int>> s;
        sort(nums.begin(), nums.end());
        for(int i=0;i<nums.size();i++){
            for(int j=i+1;j<nums.size();j++){
                for(int k=j+1;k<nums.size();k++){
                    if((nums[i]+nums[j]+nums[k])==0){
                        vector<int> result;
                        result.push_back(nums[i]);
                        result.push_back(nums[j]);
                        result.push_back(nums[k]);
                        s.insert(result);
                    }
                }
            }
        }
        for(auto i : s){
            ans.push_back(i);
        } 
        return ans;
    }
};
