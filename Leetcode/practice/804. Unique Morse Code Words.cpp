class Solution {
public:
    int uniqueMorseRepresentations(vector<string>& words) {
        vector<string>v{".-","-...","-.-.","-..",".","..-.","--.","....","..",".---","-.-",".-..","--","-.","---",".--.","--.-",".-.","...","-","..-","...-",".--","-..-","-.--","--.."};
        set<string>st;
        for(auto x:words){
            string s="";
            for(auto y:x){
                s+=v[y-'a'];
            }
            st.insert(s);
        }
        return st.size();
    }
};
//python
class Solution:
    def uniqueMorseRepresentations(self, words: List[str]) -> int:
        l=[".-","-...","-.-.","-..",".","..-.","--.","....","..",".---","-.-",".-..","--","-.","---",".--.","--.-",".-.","...","-","..-","...-",".--","-..-","-.--","--.."]
        new=set()
        for i in words:
            s=""
            for j in i:
                a=ord(j)-97
                s=s+l[a]
            new.add(s)
        return len(new)
                
            
        
