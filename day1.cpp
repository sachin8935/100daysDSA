Q1: https://leetcode.com/problems/first-unique-character-in-a-string/submissions/1166579700/?envType=daily-question&envId=2024-02-05
class Solution {
public:
    int firstUniqChar(string s) {
        unordered_map<char,int>m;
        for(auto it:s){
            m[it]++;
        }
        for(int i=0;i<s.size();i++){
            if(m[s[i]]==1){
                return i;
            }
        }
        return -1;
    }
};
