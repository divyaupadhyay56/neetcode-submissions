class Solution {
    unordered_map<string, int> mp;
public:
    int climbStairs(int n) {
        return dfs(n,0);
    }
    int dfs(int n,int i){
        if(i>n){
            return 0;
        }
        if(i==n){
            return 1;
        }
        string key = to_string(n) + "_" + to_string(i);
        if(mp.find(key) != mp.end()) return mp[key];
        return mp[key] = dfs(n,i+1)+dfs(n,i+2);
    }
};
