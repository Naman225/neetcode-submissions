class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        int n = nums.size();
        unordered_map <int, int> mpp(n);
        for (int i =0; i< n; i++) mpp[nums[i]]++;
        for (auto it: mpp){
            if (it.second >1 ) return true; 
        }
        return false;

    }
};