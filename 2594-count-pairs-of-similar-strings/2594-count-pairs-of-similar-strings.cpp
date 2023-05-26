class Solution {
public:
    int similarPairs(vector<string>& arr) {
        // Create an unordered_map to store the count of each sorted string
        unordered_map<string, int> c;

        // Iterate through each word in the array
        for (auto& str : arr) {
            // Create an unordered_set to store unique characters of the word
            unordered_set<char> s(str.begin(), str.end());

            // Create a string by sorting the unique characters
            string t(s.begin(), s.end());
            sort(t.begin(), t.end());

            // Increment the count of the sorted string in the unordered_map
            c[t]++;
        }

        int ans = 0;
        // Iterate through the unordered_map
        for (auto& it : c) {
            int p = it.second;
            // Calculate the number of pairs that can be formed with the count p
            ans += (p * (p - 1)) / 2;
        }

        return ans;
    }
};

/*
223/225 test cases
fails for 
words =
["aba","aabb","abcd","bac","aabc"]
Use Testcase
Output
0
Expected
2

class Solution {
public:
bool areSimilar(const std::string& word1, const std::string& word2) {
    if (word1.size() != word2.size()) {
        return false;
    }

    std::unordered_set<char> set1(word1.begin(), word1.end());
    std::unordered_set<char> set2(word2.begin(), word2.end());

    return set1 == set2;
}
    int similarPairs(vector<string>& words) {
            int count = 0;
    int n = words.size();

    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {
            if (areSimilar(words[i], words[j])) {
                count++;
            }
        }
    }

    return count;
    }
};
*/