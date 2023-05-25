//do it again 
class Solution {
public:
    string multiply(string num1, string num2) {
        int n1 = num1.size();
        int n2 = num2.size();

        // Initialize the result string with zeros
        string result(n1 + n2, '0'); 
        for (int i = n2 - 1; i >= 0; i--) 
        {
            int carry = 0;
            for (int j = n1 - 1; j >= 0; j--)
            {
                int product = (num2[i] - '0') * (num1[j] - '0') + (result[i + j + 1] - '0') + carry;

                // Update the digit at the corresponding position
                result[i + j + 1] = product % 10 + '0'; 

                // Update the carry
                carry = product / 10; 
            }
            // Add the carry to the next position
            result[i] += carry; 
        }

        // Remove leading zeros
        size_t start = result.find_first_not_of('0');
        if (start != string::npos) 
        {
            // Return the substring without leading zeros
            return result.substr(start); 
        }

        return "0"; // If the result is zero
    }
};
