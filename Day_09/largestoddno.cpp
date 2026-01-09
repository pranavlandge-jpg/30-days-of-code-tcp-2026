class Solution {
public:
    string largestOddNumber(string num) {
        
        int a=0,odd=INT_MIN,big=0,i,n,location = -1,value=INT_MIN;
        string ans;
       
        for(i=0;i<num.size();i++){
            a=0;
            n=num[i]-'0';
            while(a<n%10){
                a=n%10;
                n=n/10;
                  if(a%2 != 0){
                    odd=a;
                    value = i;
                  }
            }
            
            big= max(big,odd);
            location=max(location,value);
            
            
        }

        
        if (location == -1) return "";

        return num.substr(0, location + 1);
    }
};