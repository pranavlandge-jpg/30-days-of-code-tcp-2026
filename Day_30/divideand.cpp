class Solution {
public:
    vector<int> intersection(vector<int>& a, vector<int>& b) {
vector<int> r;
        int i = 0, j = 0;











while (i < a.size() && j < b.size()) 



{
				

			if (a[i] < b[j]) i++;
else if (b[j] < a[i]) j++;
else {
if (r.empty() || r.back() != a[i]) r.push_back(a[i]);
i++; j++;
}
}
        return r;}};