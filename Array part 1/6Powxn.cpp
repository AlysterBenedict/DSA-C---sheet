#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    double myPow(double x, int n) {
        double ans = 1.0;
        
        // Use long long to prevent integer overflow when n is INT_MIN
        long long nn = n;
        
        // If power is negative, we work with its positive counterpart for now
        if (nn < 0) {
            nn = -1 * nn;
        }
        
        // Binary Exponentiation Loop
        while (nn > 0) {
            if (nn % 2 == 1) {
                // If power is odd, multiply the current base into our answer
                ans = ans * x;
                nn = nn - 1;
            } else {
                // If power is even, square the base and halve the power
                x = x * x;
                nn = nn / 2;
            }
        }
        
        // If the original power was negative, return the reciprocal
        if (n < 0) {
            return (double)(1.0) / (double)(ans);
        }
        
        return ans;
    }
};

int main() {
    Solution sol;
    cout << fixed << setprecision(5);
    cout << "2.0 ^ 10 = " << sol.myPow(2.0, 10) << "\n";      // Output: 1024.00000
    cout << "2.1 ^ 3  = " << sol.myPow(2.1, 3) << "\n";       // Output: 9.26100
    cout << "2.0 ^ -2 = " << sol.myPow(2.0, -2) << "\n";      // Output: 0.25000
    return 0;
}