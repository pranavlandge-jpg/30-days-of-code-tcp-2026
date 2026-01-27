#include <iostream>
#include <vector>
#include <iomanip>

using namespace std;

int main() {










    int n, k;
    cin >> n >> k;

    vector<long long> a(n);




    for (int i = 0; i < n; i++) {


        cin >> a[i];}




    double total_sum = 0;



    long long current_week_sum = 0;

    for (int i = 0; i < k; i++) {
        current_week_sum += a[i];}




    total_sum += current_week_sum;

    for (int i = k; i < n; i++) {
        current_week_sum += a[i];
        current_week_sum -= a[i - k];
        total_sum += current_week_sum;}

    int num_weeks = n - k + 1;
    



    cout << fixed << setprecision(10) << total_sum / num_weeks << endl;
 return 0;}