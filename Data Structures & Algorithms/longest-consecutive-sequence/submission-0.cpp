class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        int maxi = 1;
        int count=1;
        if(nums.empty()) return 0;
        sort(nums.begin(),nums.end());

        for(int i=1;i<nums.size();i++){
            if(nums[i]==nums[i-1]) continue;
            else if(nums[i]==nums[i-1]+1){
                count++;
            }
            else {
                count=1;
            }
            maxi = max(count,maxi);
            }
                    
        return maxi;

    
        }
        

};

