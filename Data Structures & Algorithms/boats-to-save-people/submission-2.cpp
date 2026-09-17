class Solution {
public:
    int numRescueBoats(vector<int>& people, int limit) {
        int n=people.size();
        int cnt=0;
        int i=0;
        int j=n-1;
        sort(people.begin(),people.end());
        while(i<=j){
            int sum=people[i]+people[j];
            if(sum<=limit){
               i++;
               j--;
            }
            else{
               j--;
           }
           cnt++;
        }
        return cnt;
             
    }
};