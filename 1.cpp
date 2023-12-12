#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

class Solution {
public:
    int threeOrFive() {
        int res = 0;
        for (int i = 0; i < 1000; ++i) {
            res += (!(i % 3) || !(i % 5)) ? i : 0;
        }
        return res;
    }
};

int main() {
    Solution solution;
    cout << solution.threeOrFive() << endl;
    // 233168
    return 0;
}