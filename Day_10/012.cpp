class Solution {
  public:
    void sort012(vector<int>& arr) {
        // code here
        int zero=0,one=0,two=0;
        
        for(int i=0;i<arr.size();i++){
            
            if(arr[i]==0){
                zero++;
            }
            else if(arr[i]==1){
                one++;
            }
            else {
                two++;
            }
            
            
        }
        
        for(int k=0;k<zero;k++){
            arr[k]=0;
        }
        
         for(int k=zero;k<one+zero;k++){
            arr[k]=1;
        }
         for(int k=zero+one;k<zero+one+two;k++){
            arr[k]=2;
        }
            
            
    
    }