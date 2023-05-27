class Solution {
public:
    pair<int, int>solve(vector<int>&stoneValue, vector<vector<pair<int, int>>>&dp, int startIdx, int turn)
    {
        if (startIdx >= stoneValue.size()) return {0, 0};
        if (dp[startIdx][turn] != make_pair(INT_MIN, INT_MIN))
            return dp[startIdx][turn];
        
        
        int currScore = 0, mx = 0;
        //best score for curr turn and corresponding  score of other person
        int bestTurnScore = INT_MIN, matchingOtherScore = INT_MIN; 
        
        
        for (int pickCount = 1; pickCount <= 3; pickCount++)
        {
            int stoneIdx = startIdx + pickCount - 1;
            if (stoneIdx >= stoneValue.size()) break;
            
            currScore += stoneValue[stoneIdx];
            pair<int, int>next = solve(stoneValue, dp, stoneIdx + 1, (1 - turn));
            
            //score of person with current turn
            int turnScore = currScore + (turn == 0? next.first : next.second);
            //score of other person
            int otherScore = (turn == 0? next.second : next.first);
           
		   //person having current turn will maximize the score
            if (turnScore > bestTurnScore) //turnScore will be maximized
            {
                bestTurnScore = turnScore;
                matchingOtherScore = otherScore;
            }
        }
        

        pair<int, int>ans;
        if (turn == 0) ans =  {bestTurnScore, matchingOtherScore};
        else ans =  {matchingOtherScore, bestTurnScore};
        return dp[startIdx][turn] = ans; //return {alice's score, bob's score} pair
    }
    string stoneGameIII(vector<int>& stoneValue) 
    {
        int n = stoneValue.size();
        vector<vector<pair<int, int>>>dp(n, vector<pair<int, int>>(2, {INT_MIN, INT_MIN}));
        pair<int, int>ans = solve(stoneValue, dp, 0, 0);
        if (ans.first == ans.second) return "Tie";
        else if (ans.first > ans.second) return "Alice";
        return "Bob";
    }
};
/*
class Solution {
public:
     //will return {alice's score, bob's score} pair
    pair<int, int>solve(vector<int>&stoneValue, int startIdx, int turn)
    {
        if (startIdx >= stoneValue.size()) return {0, 0};
        
        int currScore = 0, mx = 0;

        //best score for curr turn and corresponding  score of other person
        int bestTurnScore = INT_MIN, matchingOtherScore = INT_MIN; 
        

        for (int pickCount = 1; pickCount <= 3; pickCount++)
        {
            int stoneIdx = startIdx + pickCount - 1;
            if (stoneIdx >= stoneValue.size()) break;
            
            currScore += stoneValue[stoneIdx];
            pair<int, int>next = solve(stoneValue, stoneIdx + 1, (1 - turn));
            
            //score of person with current turn
            int turnScore = currScore + (turn == 0? next.first : next.second);
            //score of other person
            int otherScore = (turn == 0? next.second : next.first);

           //person having current turn will maximize the score
            if (turnScore > bestTurnScore) //turnScore will be maximized
            {
                bestTurnScore = turnScore;
                matchingOtherScore = otherScore;
            }
        }

        pair<int, int>ans;  //return {alice's score, bob's score} pair
        if (turn == 0) ans =  {bestTurnScore, matchingOtherScore};
        else ans =  {matchingOtherScore, bestTurnScore};
        return ans; 
    }

    string stoneGameIII(vector<int>& stoneValue) {
          int n = stoneValue.size();
        pair<int, int>ans = solve(stoneValue, 0, 0);
        if (ans.first == ans.second) return "Tie";
        else if (ans.first > ans.second) return "Alice";
        return "Bob";
    }
};
*/