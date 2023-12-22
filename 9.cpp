// g++ -std=c++20 1.cpp -o 1.out && ./1.out
#include <iostream>
#include <cmath>
using namespace std;

class Solution {
public:
    int pythTriplet(int n) {
        // pythag triplet sum is n
        for (int a = 1; a < n; ++a) {
            for (int b = a + 1; b < n; ++b) {
                double c = sqrt(a * a + b * b);
                if (c == (int) c && a + b + c == n) {
                    return a * b * c;
                }
            }
        }
        return -1;
    }
};

int main() {
    Solution solution;
    cout << solution.pythTriplet(1000) << endl;
    // 31875000
    return 0;
}