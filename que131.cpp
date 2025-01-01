class Solution {
public:
    bool isPal(string part){
        string s2=part;
        reverse(part.begin(),part.end());
        return part==s2;
    }
    void getParts(string s,vector<string>&partitions,vector<vector<string>>&ans){
        if(s.size()==0){
            ans.push_back(partitions);
            return;
        }
        for(int i=0;i<s.size();i++){
            string part = s.substr(0,i+1);
            if(isPal(part)){
                partitions.push_back(part);
                getParts(s.substr(i+1),partitions,ans);
                partitions.pop_back();
            }
        }
    }
    vector<vector<string>> partition(string s) {
        vector<string>partitions;
        vector<vector<string>>ans;
        getParts(s,partitions,ans);
        return ans;
    }
};
