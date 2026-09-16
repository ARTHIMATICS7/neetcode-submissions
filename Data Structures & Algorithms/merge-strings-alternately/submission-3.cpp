class Solution {
public:
    string mergeAlternately(string word1, string word2) {
        int n=word1.size();
        int m=word2.size();
        int z=n+m;
        string result(z,'0');
        int i=0;
        int j=0;
        int k=0;
        while(i<n&&j<m){
            result[k]=word1[i];
            result[k+1]=word2[j];
            i++;
            j++;
            k+=2;
        }
        while(i<n){
            result[k]=word1[i];
            i++;
            k++;
        }
        while(j<m){
            result[k]=word2[j];
            j++;
            k++;
        }
        return result;

    }
};