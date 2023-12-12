#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

class Solution {
public:
    long long evenFibSum() {
        long long res = 0;
        vector<int> dp = {0, 1};
        while (dp.back() < 4e6) {
            dp.push_back(dp[dp.size() - 1] + dp[dp.size() - 2]);
            if (dp.back() % 2 == 0) res += dp.back();
        }
        return res;
    }
};

int main() {
    Solution solution;
    cout << solution.evenFibSum() << endl;
    return 0;
}