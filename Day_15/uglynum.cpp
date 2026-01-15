class Solution {
public:

    long long gcd(long long a, long long b) {
        return b == 0 ? a : gcd(b, a % b);
    }

   
    long long lcm(long long a, long long b) {
        return (a / gcd(a, b)) * b;
    }

    int nthUglyNumber(int n, int a, int b, int c) {
        int low = 1, high = 2000000000; 
        int result = 0;

        
        long long A = a, B = b, C = c;
        long long ab = lcm(A, B);
        long long ac = lcm(A, C);
        long long bc = lcm(B, C);
        long long abc = lcm(A, bc);

        while (low <= high) {
            int mid = low + (high - low) / 2;
            
            int count = (mid / A) + (mid / B) + (mid / C)
                      - (mid / ab) - (mid / ac) - (mid / bc)
                      + (mid / abc);

            if (count >= n) {
                result = mid;   
                high = mid - 1;  
            } else {
                low = mid + 1;   
            }
        }
        
        return result;
    }
};