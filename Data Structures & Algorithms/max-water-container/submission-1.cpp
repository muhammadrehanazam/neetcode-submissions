class Solution {
public:
    int maxArea(vector<int>& heights) {
        int left = 0;
        int right = heights.size()-1;
        int max_water = 0;
        while(left<right)
        {
          int width = right-left; // index 
        //   cout<<"width->"<<width<<" ";
          int curr = width*min(heights[left],heights[right]);
        //   cout<<curr<<" "<<endl;
          max_water = max(curr,max_water);
          if(heights[left]<heights[right]) left++;
          else right--;
        }
        return max_water;
        
    }
};
