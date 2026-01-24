#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    
    long long n, d;
    cin >> n >> d;

    vector<long long> p(n);
    for (int i = 0; i < n; i++) {
        cin >> p[i];}

    sort(p.begin(), p.end());

    int wins = 0;
    int left = 0;
    int right = n - 1;

    while (left <= right)




 {
        
        long long strongest = p[right];
        right--;
        
        long long current_team_power = strongest;
        bool can_win = false;
        
        if (current_team_power > d) {
            can_win = true;}





        while (current_team_power <= d && left <= right) {
            
            current_team_power += strongest;
            left++;
            
            if (current_team_power > d) {
                can_win = true;}}

        if (can_win) {
            wins++;




   }}cout << wins << endl;return 0;}