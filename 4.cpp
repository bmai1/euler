/*
If the sum of the squares of the digits of n 
is less than 10 and n is not divisible by 10, 
then the product of n and the reversal of n is a palindrome.
*/

// g++ -std=c++20 4.cpp -o 4.out && ./4.out
#include <string>
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

class Solution {
private:
    bool isPal(int p) {
        string s = to_string(p), r = s;
        reverse(r.begin(), r.end());
        return s == r;
    }
public:
    int largestPalindrome() {
        int m = 0, p;
        for (int i = 999; i >= 100; --i) {
            for (int j = 999; j >= 100; --j) {
                p = i * j;
                if (p <= m) break;
                if (isPal(p)) m = max(m, p);
            }
        }
        return m;
    }
};

int main() {
    Solution solution;
    cout << solution.largestPalindrome() << endl;
    // 906609 (913 x 993)
    return 0;
}