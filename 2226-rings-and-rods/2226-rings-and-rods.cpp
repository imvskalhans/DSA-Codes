class Solution {
public:
    int countPoints(string rings) {
    //make 3 arrays to track the appearances of color on rod
    int red_count[10] = {0};
    int green_count[10] = {0};
    int blue_count[10] = {0};

    //iterate through all the colors
    for (int i = 0; i < rings.size(); i += 2)
    {
        char color = rings[i];
        int index = rings[i + 1] - '0';
        if (color == 'R')
            red_count[index]++;
        else if (color == 'G')
            green_count[index]++;
        else if (color == 'B')
            blue_count[index]++;
    }
    int count = 0;

    //iterate through all the rods
    for (int i = 0; i < 10; i++)
        //if any rod have all three color count > 0 , means all color are present
        if (red_count[i] > 0 && green_count[i] > 0 && blue_count[i] > 0)
            count++;
    return count;

    }
};