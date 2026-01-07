class Solution {
public:
    int sumOfEncryptedInt(vector<int>& nums) {
    int sum=0,i;
    int size=  nums.size();

    for(i=0; i<size ; i++){

        sum = sum + encrypt(nums[i]);
     }
     return sum;
    }

    int encrypt (int n){

        int a=0,b=0;
        while(n>0)
        {
            if(a<(n%10))
            a=n%10;
            n/=10;
            b++;
        }
        n=0;
        while(b>0)
        {
            n=n*10 +a;
            b--;
        }
        return n;
    }
   };
