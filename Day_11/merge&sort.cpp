class Solution {
public:
    void merge(vector<int>& arr, int l, int m, int r) {
        int i = l;
        int j = m + 1;
        vector<int> temp;

        while (i <= m && j <= r) {
            if (arr[i] <= arr[j]) {
                temp.push_back(arr[i]);
                i++;
            } else {
                temp.push_back(arr[j]);
                j++;
            }
        }

        while (i <= m) {
            temp.push_back(arr[i]);
            i++;
        }

        while (j <= r) {
            temp.push_back(arr[j]);
            j++;
        }

        for (int k = 0; k < temp.size(); k++) {
            arr[l + k] = temp[k];
        }
    }

    void mergeSort(vector<int>& arr, int l, int r) {
        if (l >= r) return;
        
        int m = (l + r) / 2;
        
        mergeSort(arr, l, m);
        mergeSort(arr, m + 1, r);
        merge(arr, l, m, r);
    }
};