class Solution {
public:
    bool repeatedSubstringPattern(string s) {
        //solve again
                int n = s.length();

        // Check for substrings of length i, where i divides n
        for (int i = 1; i <= n / 2; i++) {
            if (n % i == 0) {
                string substring = s.substr(0, i);
                string constructedString;

                // Append multiple copies of the substring
                for (int j = 0; j < n / i; j++) {
                    constructedString += substring;
                }

                // If the constructed string matches the original string, return true
                if (constructedString == s) {
                    return true;
                }
            }
        }

        return false;
    }
};