class Solution {
public:
    bool isAnagram(string s, string t) {
        if(t.length() != s.length()){
            return false;
        }

        unordered_map<char, int>mp;
        unordered_map<char, int>mp1;
        for(int i=0; i<s.length(); i++){
            mp[s[i]]++;
        }
        
          for(int i=0; i<t.length(); i++){
            mp1[t[i]]++;
        }
        
        for(auto it : mp)
        {
         if(mp1[it.first] != it.second)
           return false;
        }

        return true;
    }
};
