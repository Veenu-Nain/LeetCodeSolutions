class Solution {
public:
    void reverseString(vector<char>& s) {
       // reverse(s.begin(),s.end());
       int st=0,end=s.size()-1;
       while(st<=end){
        swap(s[st++],s[end--]);
       }
    }
};
