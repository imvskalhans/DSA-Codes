class Solution {
public:
    vector<int> arrayRankTransform(vector<int>& arr) {
    vector<int> sortedArr = arr; // Create a copy of the input array
    sort(sortedArr.begin(), sortedArr.end()); // Sort the copy in non-decreasing order

    unordered_map<int, int> rankMap; // Map to store ranks
    int rank = 1; // Starting rank

    for (int num : sortedArr) {
        // Assign rank only if the element is not already present in the map
        if (rankMap.find(num) == rankMap.end()) {
            rankMap[num] = rank;
            rank++;
        }
    }

    // Replace elements in the original array with their ranks
    for (int& num : arr) {
        num = rankMap[num];
    }

    return arr;
    }
};