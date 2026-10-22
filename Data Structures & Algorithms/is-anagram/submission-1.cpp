class Solution {
public:
    bool isAnagram(string s, string t) {
        unordered_map<char,int>st1;
        unordered_map<char,int>st2;

        for(char c1:s){
            st1[c1]++;
        }

        for(char c2:t){
            st2[c2]++;
        }

        if(st1==st2)return true;

        return false;

    }
};
