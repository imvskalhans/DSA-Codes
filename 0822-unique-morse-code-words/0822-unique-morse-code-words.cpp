class Solution {
public:
    int uniqueMorseRepresentations(vector<string>& words) {
        vector<string> mc = {".-","-...","-.-.","-..",".","..-.","--.","....","..",".---","-.-",".-..","--","-.","---",".--.","--.-",".-.","...","-","..-","...-",".--","-..-","-.--","--.."};

    map<char,string> mp;
    int c = 0;
    for(string s : mc)
    {
        mp['a'+ c++] = s;
    }

    // creating unordered set to store unique morse code
    unordered_set<string> morsecode;
    
    for(string word : words )
    {
        string mcstring ="";
        for(int i = 0 ; i<word.size() ; i++)
        {
            mcstring += mp[word[i]];
        }
        morsecode.insert(mcstring);
    }
    return morsecode.size();
    }
};