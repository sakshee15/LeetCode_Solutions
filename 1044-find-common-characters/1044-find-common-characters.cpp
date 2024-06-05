#include <vector>
#include <string>
#include <algorithm>
#include <climits>

using namespace std;

class Solution {
public:
    vector<string> commonChars(vector<string>& words) {
        vector<int> minFreq(26, INT_MAX);
        vector<string> ans;

        // Initialize frequency count for the first word
        vector<int> firstWordFreq(26, 0);
        for (char c : words[0]) {
            firstWordFreq[c - 'a']++;
        }

        // Set minFreq based on the first word
        for (int i = 0; i < 26; i++) {
            minFreq[i] = firstWordFreq[i];
        }

        // Update the minimum frequency of each character based on other words
        for (int i = 1; i < words.size(); i++) {
            vector<int> freq(26, 0);
            for (char c : words[i]) {
                freq[c - 'a']++;
            }
            for (int j = 0; j < 26; j++) {
                minFreq[j] = min(minFreq[j], freq[j]);
            }
        }

        // Construct the result based on the minimum frequency of each character
        for (int i = 0; i < 26; i++) {
            for (int j = 0; j < minFreq[i]; j++) {
                ans.push_back(string(1, i + 'a'));
            }
        }

        return ans;
    }
};
