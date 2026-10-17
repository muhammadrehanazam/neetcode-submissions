class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        unordered_set<int> s;
        for(int i=0;i<nums.size();i++)
        {
            s.insert(nums[i]);
        }
        int maxi=0;
        for(auto num:s){
            if(!s.count(num-1)){
                int curr = num;
                int streak = 1;
                while(s.count(curr+1)){
                    curr++;
                    streak++;
                }
                maxi = max(maxi,streak);
            }
        }
        return maxi;
        
    }
};
