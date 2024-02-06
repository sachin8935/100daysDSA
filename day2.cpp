class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string,vector<string>>m;
        for(int i=0;i<strs.size();i++){
            string tempStr="";
            tempStr+=strs[i];
            sort(tempStr.begin(),tempStr.end());
            m[tempStr].push_back(strs[i]);
        }
        vector<vector<string>>ans;
        for(auto it:m){
            ans.push_back(it.second);
        }
        return ans;
    }
};