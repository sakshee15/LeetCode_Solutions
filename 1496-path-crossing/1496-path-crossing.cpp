class Solution {
public:
    bool isPathCrossing(string path) {
        unordered_set<int> s;
        int x = 0, y = 0;
        s.insert(x * 1000000 + y);  // Assuming coordinates are within [-500,000, 500,000]

        for (char move : path) {
            if (move == 'N') y++;
            else if (move == 'S') y--;
            else if (move == 'E') x++;
            else x--;

            int pos = x * 1000000 + y;
            if (s.count(pos)) return true;
            else s.insert(pos);
        }

        return false;
    }
};