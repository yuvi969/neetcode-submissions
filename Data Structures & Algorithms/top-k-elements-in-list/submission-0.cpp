class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {

        unordered_map<int,int>mp;

        for(int n:nums){
            mp[n]++;
        }
        priority_queue<pair<int,int>>pq;
        for(auto p:mp){
            int t=p.first;
            int q=p.second;
            pq.push({q,t});
        }

        vector<int>res;
        for(int i=0;i<k;i++){
            auto a=pq.top();
            pq.pop();
            res.push_back(a.second);
        }

        return res;

    }
};
