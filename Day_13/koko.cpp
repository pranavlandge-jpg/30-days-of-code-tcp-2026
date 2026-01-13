class Solution {
public:
    int minEatingSpeed(vector<int>& piles, int h) {

        int max= *max_element(piles.begin(), piles.end());
        int low=1;
        int ans=max;

        while(low<=max){
            int mid = low + (max-low)/2;
            long long total=0;
          
           for (int i=0;i<piles.size();i++){
               total +=(long long) (piles[i] + mid - 1) / mid;

           }

           if (total > h){
            low= mid +1;
           }
           else{
           ans= mid;
           max= mid-1;

           }
        }
        return ans;
    }
    
};