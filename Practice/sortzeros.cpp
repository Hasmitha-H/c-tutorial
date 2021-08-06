// sort 0s , 1 s and 2s without sorting algorithm

#include<iostream>
using namespace std;
class Solution {
public:
    void sortColors(vector<int>& nums) {
       int first = 0; 
        int last = nums.size() - 1; 
        int mid = 0; 

        while (mid <= last) { 
            switch (nums[mid]) { 

            // If the element is 0 
            case 0: 
                swap(nums[first++], nums[mid++]); 
                break; 

            // If the element is 1 . 
            case 1: 
                mid++; 
                break; 

            // If the element is 2 
            case 2: 
                swap(nums[mid], nums[last--]); 
                break; 
            }
        }
    }
};
    return 0;

}