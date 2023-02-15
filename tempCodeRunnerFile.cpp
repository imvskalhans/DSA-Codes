 int i=0;
        for(i=0;i<nums.size();i++)
        {
            if(nums[i]<pivot)
            {
            }
            else
            {
               nums.insert(nums.begin() + i, pivot);
               nums.erase(nums.begin() + i);

               break;
            }
        }
       // nums.pop_back();
        //sort(nums.begin(), nums.end() - (i+1), greater<int>());
        return nums;
        