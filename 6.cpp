#include <iostream>
using namespace std;

class Solution {
public:
    long long sqsumdiff(int n) {
        long long sum = 0, sqsum = 0;
        for (int i = 1; i <= n; ++i) {
            sum += i;
            sqsum += i * i;
        }
        return (sum * sum) - sqsum;
    }
};

int main() {
    Solution solution;
    cout << solution.sqsumdiff(100) << endl;
    // 25164150
    return 0;
}