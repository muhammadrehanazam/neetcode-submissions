class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        map<int,int> mp;
        vector<int> ans;
        for(int i=0;i<nums.size();i++)
        {
            mp[nums[i]]++;
        }
        vector<pair<int,int>> sp;
        for(auto it:mp){
            sp.push_back({it.second,it.first});
        }
        sort(sp.begin(),sp.end(),greater<pair<int,int>>());
        for(int i=0;i<k;i++)
        {
            ans.push_back(sp[i].second);
        }
        return ans;
        
        
    }
};
