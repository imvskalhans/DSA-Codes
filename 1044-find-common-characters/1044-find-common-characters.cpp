
class Solution {
public:
    vector<string> commonChars(vector<string>& words) {
        vector<int> commonFreq(26, INT_MAX);  // Initialize the common frequency array with maximum possible values
        
        for (const string& word : words) {
            vector<int> freq(26, 0);  // Frequency array for each word
            
            // Count the frequency of characters in the current word
            for (char ch : word) {
                freq[ch - 'a']++;
            }
            
            // Update the common frequency array with the minimum occurrences of each character
            for (int i = 0; i < 26; i++) {
                commonFreq[i] = min(commonFreq[i], freq[i]);
            }
        }
        
        // Create the result array using the common frequency array
        vector<string> result;
        for (int i = 0; i < 26; i++) {
            int count = commonFreq[i];
            while (count > 0) {
                string s(1, 'a' + i);
                result.push_back(s);
                count--;
            }
        }
        
        return result;
    }
};
