class Solution {
public:
   bool isAnagram(string s, string t) {
        map<char,int> ms;
        map<char,int> mt;
        if(s.length() != t.length()) return false;
        for(char c : s) ms[c]++;
        for(char c : t) mt[c]++;
        return ms == mt;
    }
};
