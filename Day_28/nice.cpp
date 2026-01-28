#include <unordered_map>
using namespace std;

class Solution {
public:
    int numberOfSubarrays(vector<int>& nums, int k) {
        unordered_map<int, int> m;
        m[0] = 1;
        int s = 0, a = 0;
        for (int i = 0; i < nums.size(); i++) {
            if (nums[i] % 2 != 0) s++;
            if (m.find(s - k) != m.end()) {
                a += m[s - k];
            }
            m[s]++;




        }return a;}
};