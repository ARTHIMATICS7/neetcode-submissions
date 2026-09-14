class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        if(strs.empty()){
            return ("");
        }
        string result;
        int n=strs.size();
        for(int i=0;i<strs[0].size();i++){
            char ch= strs[0][i];
            for(int j=1;j<n;j++){
                if(i>=strs[0].size()|| ch!=strs[j][i]){
                    return result;
                }
            }
            result=result+ch;

        }
        return result;
    }
};