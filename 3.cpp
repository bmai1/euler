#include <iostream>
#include <cmath>
using namespace std;

class Solution {
private: 
    long long pollardsRho(long long n) {
        if (n % 2 == 0) return 2;

        long long x = rand() % (n - 2) + 2;
        long long y = x;
        long long c = rand() % (n - 1) + 1;
        long long d = 1;

        auto gcd = [](long long a, long long b) {
            while (b) {
                long long temp = b;
                b = a % b;
                a = temp;
            }
            return a;
        };

        while (d == 1) {
            x = (x * x + c) % n;
            y = (y * y + c) % n;
            y = (y * y + c) % n;
            d = gcd(abs(x - y), n);
        }

        return d;
    }

public:
    long long lpf(long long n) {
        if (n <= 1) return -1;
        long long factor = pollardsRho(n);
        while (factor < n) {
            while (n % factor == 0) {
                n /= factor;
            }
            factor = pollardsRho(n);
        }
        return n;
    }

    long long lpf2(long long n) {
        while (n % 2 == 0) n /= 2;
        for (long long i = 3; i < n; i += 2) {
            while (n % i == 0 && i < n) n /= i;
        }
        return n;
    }
};

int main() {
    Solution solution;
    cout << solution.lpf2(600851475143) << endl;
    return 0;
 }
