class Solution {
public:
    int cnt = 0;

    void backtrack(vector<int>& use, string& tiles, int index) {
        if (index == tiles.length()) {
            return;
        }

        for (int i = 0; i < tiles.length(); i++) {
            if (i > 0 && tiles[i] == tiles[i - 1] && use[i - 1] == 0) {
                continue;
            }
            if (use[i] == 0) {
                use[i] = 1;
                cnt++;
                backtrack(use, tiles, index + 1);
                use[i] = 0;
            }
        }
    }

    int numTilePossibilities(string tiles) {
        int n = tiles.length();
        vector<int> use(n, 0);
        sort(tiles.begin(), tiles.end()); // Sort the tiles to group duplicates together
        backtrack(use, tiles, 0);
        return cnt;
    }
};
