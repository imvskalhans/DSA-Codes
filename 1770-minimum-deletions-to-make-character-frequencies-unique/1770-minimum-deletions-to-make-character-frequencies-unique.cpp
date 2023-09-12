class Solution {
public:
    int minDeletions(string s) {
    unordered_map<char, int> freq_count;
    unordered_set<int> unique_freqs;
    int min_deletions = 0;

    // Count the frequency of each character
    for (char c : s) 
    {
        freq_count[c]++;
    }

    for (const auto& pair : freq_count) 
    {
        int freq = pair.second;
        while (unique_freqs.count(freq)) 
        {
            freq--;
            min_deletions++;
        }
        if (freq > 0) 
        {
            unique_freqs.insert(freq);
        }
    }

    return min_deletions;
    }
};