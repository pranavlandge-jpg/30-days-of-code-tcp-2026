class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) 
    
    
    
    
    
    {unordered_map<int, int> mapping;
        stack<int> s;
        for (int i = nums2.size() - 1; i >= 0; i--) {
            







            int current = nums2[i];

            while (!s.empty() && s.top() <= current) {
                s.pop();}
            if (s.empty()) {
                mapping[current] = -1;
            } else {
                mapping[current] = s.top();}

            s.push(current); }

        vector<int> result;
        
        for (int x : nums1) {


            
            result.push_back(mapping[x]);
        }return result;}};