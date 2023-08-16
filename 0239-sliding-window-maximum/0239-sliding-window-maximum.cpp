class Solution {
public:
    vector<int> maxSlidingWindow(vector<int>& nums, int k) {
        //optimized solution
    vector<int> ans;
    if (nums.empty()) return ans;
    deque<int> dq; // stores the index of elements in the window
    for (int i = 0; i < nums.size(); ++i) {
        // remove elements that are out of the window
        if (!dq.empty() && dq.front() == i - k) dq.pop_front();
        // remove elements that are smaller than the current element
        while (!dq.empty() && nums[dq.back()] < nums[i]) dq.pop_back();
        dq.push_back(i); // push current element
        // add the maximum element of current window to the answer
        if (i >= k - 1) ans.push_back(nums[dq.front()]);
    }
    return ans;
    }
};

/*
//my solution
        priority_queue<int> pq;
        vector<int> ans;
        for(int i = 0 ; i<=nums.size()-k ; i++)
        {
            for(int j = i ; j<i+k && j<nums.size() ; j++)
            {
                pq.push(nums[j]);
            }
            ans.push_back(pq.top());
            while (!pq.empty()) 
            {
                pq.pop();
            }
        }
        return ans;
*/