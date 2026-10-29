class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        set<char> st;
        int low = 0;
        int n = s.size();

        int ans = 0;

        for(int right=0; right<n; right++){


            while(st.find(s[right]) != st.end()){
                st.erase(s[low]);
                low++;
            }

            st.insert(s[right]);
           ans = max(ans, right - low + 1);
        }

        return ans;
        }
};
