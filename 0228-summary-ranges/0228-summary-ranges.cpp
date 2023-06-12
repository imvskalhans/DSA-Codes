class Solution {
public:
    vector<string> summaryRanges(vector<int>& nums) {
        vector<string> res;
        if (nums.size() <= 0) 
            return res;
        long stt = nums[0];
        long curr = stt;
        string str = to_string(stt);
        for (int i = 1; i < nums.size(); i++) {
            if (nums[i] != curr + 1) {
                if (stt != curr) {
                    str = str + "->" + to_string(curr);
                }
                res.push_back(str);
                stt = nums[i];
                str = to_string(stt);
            }
            curr = nums[i];
        }
        if (stt == curr) {
            res.push_back(str);
        }
        else {
            str = str + "->" + to_string(curr);
            res.push_back(str);
        }
        return res;
    }
};
/*
class Solution {
public:
// Helper function to format a range as a string
string formatRange(int start, int end) {
    if (start == end) 
    {
        // If the range contains only one number, return that number as a string
        return to_string(start);
    } 
    else 
    {
        // If the range contains multiple numbers, return the range as a string
        return to_string(start) + "->" + to_string(end);
    }
}
    vector<string> summaryRanges(vector<int>& nums) 
    {
    vector<string> ranges;
    int start = nums[0]; // Start of the current range
    int end = nums[0]; // End of the current range

    // Iterate through the array starting from the second element
    for (int i = 1; i < nums.size(); i++) 
    {
        if (nums[i] == end + 1) 
        {
            // If the current number is consecutive to the previous number, update the end of the range
            end = nums[i];
        } 
        else 
        {
            // If the current number is not consecutive, add the previous range to the result and start a new range
            ranges.push_back(formatRange(start, end));
            start = nums[i];
            end = nums[i];
        }
    }

    // Add the last range to the result
    ranges.push_back(formatRange(start, end));
    return ranges;
    }
*/