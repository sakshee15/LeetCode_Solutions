class Solution {
public:
    bool lemonadeChange(vector<int>& bills) {
        int countFive = 0;
        int countTen = 0;

        for (const int bill : bills) {
            if (bill == 5) {
                countFive++;
            } else if (bill == 10) {
                if (countFive <= 0) {
                    return false;
                }
                countFive--;
                countTen++;
            } else {  // $20 bill
                if (countTen >= 1 && countFive >= 1) {
                    countTen--;
                    countFive--;
                } else if (countFive >= 3) {
                    countFive -= 3;
                } else {
                    return false;
                }
            }
        }
        return true;
    }
};
