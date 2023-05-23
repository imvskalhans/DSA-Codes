class Solution {
public:
    bool lemonadeChange(vector<int>& bills) {
        int count_5 = 0;  // Number of available $5 bills
        int count_10 = 0; // Number of available $10 bills

        for (int bill : bills) {
            if (bill == 5) {
                count_5++;  // Increment count of $5 bills
            } else if (bill == 10) {
                count_5--;  // Use a $5 bill as change
                count_10++; // Receive a $10 bill
            } else if (bill == 20) {
                if (count_10 > 0) {
                    count_10--;  // Use a $10 bill as change
                    count_5--;   // Use a $5 bill as change
                } else {
                    count_5 -= 3;  // Use three $5 bills as change
                }
            }

            if (count_5 < 0 || count_10 < 0) {
                return false;  // Not enough change to provide
            }
        }

        return true;  // Able to provide change for all customers
    }
};
