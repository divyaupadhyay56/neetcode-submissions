class Solution {
public:
    bool banana(vector<int> piles,int h, int k){
        int count =0;
        for(int i=0;i<piles.size();i++){
            count = count + ceil((double)piles[i] / k);;

        }
        if(count <= h){
            return true;
        }
        return false;
    }
    int minEatingSpeed(vector<int>& piles, int h) {
        int n = piles.size();
        sort(piles.begin(),piles.end());
        int left = 1;
        int right = piles[n-1];
        int ans = right;
        while(left <= right){
            int mid = (left+right)/2;
            if (banana(piles,h,mid)){
                ans = mid;
                right = mid-1;
            }
            else{
                left = mid+1;
            }
            
        }
        return ans;
    }
};
