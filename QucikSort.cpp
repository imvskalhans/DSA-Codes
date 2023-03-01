/*
QuickSort
created by: Vishal Singh

*/
#include<iostream>
#include<vector>
using namespace std;
int partition(vector<int> &num, int s, int e)
{
    int pivot = num[s];

    int count = 0;
    for (int i = s + 1; i <= e; i++)
    {
        if (num[i] <= pivot)
        {
            count++;
        }
    }
    //place pivot at correct index
    int pivotindex = s + count;
    swap(num[s], num[pivotindex]);

    //left and right part of pivot
    int i = s;
    int j = e;
    while(i <pivotindex && j >pivotindex)
    {
        if(num[i]<=pivot)
        {
            i++;
        }
        else if(num[j]>pivot)
        {
            j--;
        }
        else{
            swap(num[i],num[j]);
            i++;
            j--;
        }
    }
    
    return pivotindex;
}

void quicksort(vector<int> &num, int s, int e)
{
    if (s >= e)
    {
        return;
    }
    int p = partition(num, s, e);

    //left part
    quicksort(num, s, p - 1);
    //right part
    quicksort(num, p + 1, e);
    
}

int main()
{
    vector<int> num;
    cout << "enter num" << endl;
    int input;
    while (std::cin >> input)
    {
        num.push_back(input);
    }
    int s = 0;
    int e = num.size() - 1;
    quicksort(num, s, e);
    cout << "sorted array is -";
    for (int i = 0; i < num.size(); i++)
    {
        cout << " " << num[i] << " ";
    }
    cout << endl;
}
/*
approach 2

void quicksort(vector<int>& nums, int left, int right) {
    if (left >= right) {
        return;
    }
    int pivot = nums[(left + right) / 2];
    int i = left, j = right;
    while (i <= j) {
        while (nums[i] < pivot) {
            i++;
        }
        while (nums[j] > pivot) {
            j--;
        }
        if (i <= j) {
            swap(nums[i], nums[j]);
            i++;
            j--;
        }
    }
    quicksort(nums, left, j);
    quicksort(nums, i, right);
}

*/