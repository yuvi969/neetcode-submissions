class Solution {
public:
    int maxArea(vector<int>& heights) {
        int left=0;
        int right=heights.size()-1;
        int res=0;

        while(left<right){
            res=max(res,((right-left) * min(heights[left],heights[right])));

            if(heights[left] > heights[right]){
                right--;
            }
            else{
                left++;
            }
        }

        return res;

    }
};
