/*

*/
class Solution
{
private:
    bool allcapital(string word)
    {
        for (int i = 0; i < word.size(); i++)
        {
            if (word[i] >= 'A' && word[i] <= 'Z')
            {
                continue;
            }
            else
            {
                return false;
            }
        }
        return true;
    }

private:
    bool allsmall(string word)
    {
        for (int i = 0; i < word.size(); i++)
        {
            if (word[i] >= 'a' && word[i] <= 'z')
            {
                continue;
            }
            else
            {
                return false;
            }
        }
        return true;
    }

private:
    bool firstsmall(string word)
    {
        for (int i = 1; i < word.size(); i++)
        {
            if (word[0] >= 'A' && word[i] <= 'Z')
            {
                if (word[i] >= 'a' && word[i] <= 'z')
                {
                    continue;
                }
                else
                {
                    return false;
                }
            }
        }
        return true;
    }

public:
    bool detectCapitalUse(string word)
    {
        if (allcapital(word) || allsmall(word) || firstsmall(word))
        {
            return true;
        }
        else
        {
            return false;
        }
    }
};