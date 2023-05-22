class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
    //create a mapping string and vector string
    unordered_map<string , vector<string> > group;

    //fetch string and sort them
    for(string str : strs)
    {
        string s = str;

        //sort string
        sort(s.begin(),s.end());

        //now string with same sorted string are clubbed together as anagram
        group[s].push_back(str);

    }

    //create vector to store result
    vector<vector<string>> res;

    //now acces the group with sorted key and return the orignal string
    for(auto values : group)
    {
        res.push_back(values.second);
    }
    return res;
    }
}; 
