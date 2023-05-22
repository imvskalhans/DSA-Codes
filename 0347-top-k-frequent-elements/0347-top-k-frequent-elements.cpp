class Solution {
public:

    vector<int> topKFrequent(vector<int>& nums, int k) {

    // Step 1: Create a hash map to store the frequency of each element
    unordered_map<int, int> freq_map;
    for (int num : nums) {
        freq_map[num]++;
    }

    // Step 3: Create a max heap (priority queue)
    priority_queue<pair<int, int>> max_heap;
    for (const auto& pair : freq_map) {
        max_heap.push(make_pair(pair.second, pair.first));
    }

    // Step 4: Pop the top element from the max heap k times
    vector<int> result;
    for (int i = 0; i < k; ++i) {
        result.push_back(max_heap.top().second);
        max_heap.pop();
    }

    // Step 5: Return the result vector
    return result;
    }
};