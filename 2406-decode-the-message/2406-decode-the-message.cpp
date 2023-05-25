class Solution {
public:
    string decodeMessage(string key, string message) {
        // unordered_map<char,char> code;
        // int it = 0;
        // for(char c : key)
        // {
        //     code[c] = 'a' + it++;
        // }

        // string ans = "";

        // for(char c : message)
        // {
        //     ans += code[c];
        // }

        // return ans;
        unordered_map<char, char> code;

        char lowercase = 'a';
        for (char c : key) 
        {
            if (c != ' ' && code.find(c) == code.end()) 
            {
                code[c] = lowercase++;
            }
        }

        std::string ans = "";

        for (char c : message) 
        {
            if (c != ' ' && code.find(c) != code.end()) 
            {
                ans += code[c];
            } 
            else 
            {
                ans += c; // If character is not present in the key or is a space, keep it unchanged
            }
        }
        return ans;
    }
};