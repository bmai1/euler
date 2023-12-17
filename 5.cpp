#include <iostream>

using namespace std;

class Solution {
private:
	int gcd(int a, int b) {
        while (b != 0) {
            int temp = b;
            b = a % b;
            a = temp;
        }
        return a;
    }
	int lcm(int a, int b) {
		return (a / gcd(a, b)) * b;
	}
public:
	int sm(int n) {
		int res = 1;
		for (int i = 2; i <= n; ++i) {
			res = lcm(res, i);
		}
		return res;

		// for (int i = 1; i < INT_MAX; ++i) {
		// 	bool flag = true;
		// 	for (int j = 1; j <= n; ++j) {
		// 		if (i % j != 0) {
		// 			flag = false;
		// 			break;
		// 		}
		// 	}
		// 	if (flag) return i;
		// }
		// return -1;
	}
};

int main() {
    Solution solution;
	cout << solution.sm(20) << endl;
	// 232792560
    return 0;
}