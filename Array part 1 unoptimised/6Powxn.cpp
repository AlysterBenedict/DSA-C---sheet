#include <bits/stdc++.h>
using namespace std;


double myPowBruteForce(double x, int n) {
    long long nn = n; // Handle overflow
    if (nn < 0) nn = -nn;
    
    double ans = 1.0;
    for (long long i = 0; i < nn; i++) {
        ans = ans * x;
    }
    
    // If the original power was negative, return the reciprocal (1 / ans)
    if (n < 0) return 1.0 / ans;
    
    return ans;
}

int main() {

    cout << fixed << setprecision(5);
    
    cout << "--- Testing Brute Force Pow(x, n) ---\n\n";

    
    double x1 = 2.00000;
    int n1 = 10;
    cout << "Test 1 (" << x1 << "^" << n1 << "): " << myPowBruteForce(x1, n1) << "\n"; 
  

  
    double x2 = 2.10000;
    int n2 = 3;
    cout << "Test 2 (" << x2 << "^" << n2 << "): " << myPowBruteForce(x2, n2) << "\n"; 
  


    double x3 = 2.00000;
    int n3 = -2;
    cout << "Test 3 (" << x3 << "^" << n3 << "): " << myPowBruteForce(x3, n3) << "\n"; 


    double x4 = 5.00000;
    int n4 = 0;
    cout << "Test 4 (" << x4 << "^" << n4 << "):  " << myPowBruteForce(x4, n4) << "\n"; 


    return 0;
}