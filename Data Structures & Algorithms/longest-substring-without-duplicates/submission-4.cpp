class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int n=s.size();
        int hash[256]={0};
        int left=0;
        int right=0;
        int cnt=0;
        while(right<n){
            if(hash[s[right]]==0){ 
               hash[s[right]]++;
               cnt=max(cnt,right-left+1);
               right++;
            }
            else{
                hash[s[left]]--;
                left++;
            }
        }
        return cnt;
    }
};