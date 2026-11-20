class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        priority_queue<int,vector<int>,greater<int>>pq;

        if(nums.size()==0){
            return 0;
        }


        for(int n:nums){
            pq.push(n);
        }

        int count=0;
        int prev=pq.top();
        pq.pop();
        int curr=1;

        int res=1;

        while(!pq.empty()){
            curr=pq.top();
            pq.pop();

            if(curr - prev == 1){
                count++;
                res=max(res,count+1);
            }else if(curr==prev){
                continue;
            }else{
                  count=0;
            }
          
            prev=curr;

        }

        return res;
    }
};
