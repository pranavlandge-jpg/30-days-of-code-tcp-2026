class Solution {
  public:
    int setBits(int n) {
        // Write Your Code here
        vector<int> multiple;
        vector<int> binary;
        int num=1;
        // for(int i=1;;i++){
        //     num = 2*num
        //     multiple.push_back(num);
        // }
        multiple.push_back(1);
        while(num<n){
            num = 2*num;
            multiple.push_back(num);
        }
        
        
        for(int j = multiple.size() - 1; j >= 0; j--){
            
           if (n >= multiple[j]){
               n=n-multiple[j];
               binary.push_back(1);
           }
            else {
                binary.push_back(0);
            }
        }
        
        int ans=0;
        for(int i=0;i<binary.size();i++){
            if (binary[i]==1)
            ans++;
            
        }
        
        
        
        return ans;
        
        
    }
};