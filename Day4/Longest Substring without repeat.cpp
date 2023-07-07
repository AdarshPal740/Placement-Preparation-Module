class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        unordered_set<int>um;
        int l=0;
        int h=0;
        int ans=0;
        while(h<s.length()){
            
           while(um.find(s[h])!=um.end()){
               um.erase(s[l]);
               l++;
           }
           
            um.insert(s[h]);
             ans=max(ans,h-l+1);
            h++;
           
        }
        cout<<
        return ans;
    }
};