class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        if(nums.size()==0) return 0;

        sort(nums.begin(),nums.end());
        int i;
        int l = INT_MIN;
        int count = 0;
        int longest = 1;
        

        for(i=0;i<nums.size() ;i++){
            if(nums[i]-1==l){
                count += 1;
                l = nums[i];
            }

            else if (nums[i] != l){
                count=1;
                l = nums[i];

            }

            longest = max(longest,count);
                
        }
        return longest;
        
    }

    
    


};