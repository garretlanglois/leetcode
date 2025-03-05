#include <iostream>

using namespace std;

class Solution {
    public:
        long long coloredCells(int n) {
            return 2LL * n * (n - 1) + 1;
        }
};

int main() {
    Solution sol;

    long long value = sol.coloredCells(1);

    cout << "Result: " << value << endl;

    return 0;
}
