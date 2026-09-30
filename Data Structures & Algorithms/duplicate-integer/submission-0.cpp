class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        set<int> st;
        int l = nums.size();
        cout<<l;
        for(int i=0;i<nums.size();i++)
        {
            st.insert(nums[i]);
        }
        if(st.size()!=l) return true;
        else return false;
        
    }
};