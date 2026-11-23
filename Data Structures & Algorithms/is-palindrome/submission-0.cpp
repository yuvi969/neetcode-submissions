class Solution {
public:
    bool isPalindrome(string s) {
        
        vector<int>t1;

        for(int i=0;i<s.size();i++){    
            if(isalnum(s[i])){
                t1.push_back(tolower(s[i]));
            }
        }

        int i=0;
        int j=t1.size()-1;

        while(i<=j){
            if(t1[i]!=t1[j]){
                return false;
            }
            i++;
            j--;
        }

        return true;

    }
};
