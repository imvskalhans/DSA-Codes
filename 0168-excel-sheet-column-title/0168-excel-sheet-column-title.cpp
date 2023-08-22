 class Solution {
public:
    string convertToTitle(int columnNumber) {
        // base(10) -> base(26)   
        string column = "";
        int rem;

        while(columnNumber){
            rem = (--columnNumber)%26;  // similar to subtracting 1 from both sides and obtaining the remainder
            columnNumber /= 26;

            column = char('A' + rem) + column;
        }

        return column;
    }
};