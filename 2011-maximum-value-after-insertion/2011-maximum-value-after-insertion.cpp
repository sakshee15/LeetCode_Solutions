class Solution {
public:
    string maxValue(string n, int x) {
        string ans;

        if (n[0] == '-') {
            for (int i = 1; i < n.length(); i++) {
                if (x < n[i] - '0') {
                    string part1 = n.substr(0, i);
                    string part2 = n.substr(i);
                    part1 += to_string(x);
                    ans = part1 + part2;
                    break;
                }
            }
            // If x is not smaller than any digit, add it to the end.
            if (ans.empty()) {
                ans = n + to_string(x);
            }
        } else {
            for (int i = 0; i < n.length(); i++) {
                if (x > n[i] - '0') {
                    string part1 = n.substr(0, i);
                    string part2 = n.substr(i);
                    part1 += to_string(x);
                    ans = part1 + part2;
                    break;
                }
            }
            // If x is not greater than any digit, add it to the end.
            if (ans.empty()) {
                ans = n + to_string(x);
            }
        }

        return ans;
    }
};
