//leetcode-3. Longest Substring Without Repeating Characters
//https://leetcode.com/problems/longest-substring-without-repeating-characters/
class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int start=0;
        int n=s.size();
        unordered_map<char,int>m;
        int max_len=0;
        for(int i=0;i<n;i++){
            m[s[i]]++;
            if(i-start+1==m.size()){
                max_len=max(max_len,i-start+1);
            }
            else{
                m[s[start]]--;
                if(m[s[start]]==0) m.erase(s[start]);
                start++;
            }
        }
        return max_len;
    }
};
