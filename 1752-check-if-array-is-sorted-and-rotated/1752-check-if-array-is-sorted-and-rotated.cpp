class Solution {
public:
    bool check(vector<int>& nums) {
        int n= nums.size();
        for(int i=0;i<n;i++){
            if(is_sorted(nums.begin(),nums.end())){
                return true;
            }
            rotate(nums.begin(),nums.begin()+n-1,nums.end());
        }
        return false;
    }
};