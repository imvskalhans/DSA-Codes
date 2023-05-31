class Solution {
public:
    int isPrefixOfWord(string sentence, string searchWord) {
        if(sentence.find(searchWord) == 0) return 1;
        int found = sentence.find(" " + searchWord);
        int count = 2;
        if(found != -1 )
        {
            for(int i = 0 ; i<found ; i++)
            {
                if( sentence[i] == ' ')
                {
                    count++;
                }
            }
            return count;
        }
        else
        {
            return -1;
        }
    }
};