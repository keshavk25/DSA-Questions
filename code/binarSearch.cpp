#include <iostream>
using namespace std;

int main()
{
        int nums[5]= {4,5,7,9,15};
        int target = 9;
        int n = 5;
        int start=0, end=n-1, mid;
        while(start<=end){
            
            mid= start+ end-start/2;

            if(nums[mid]==target) return mid;
            else if(nums[mid]<target) start = mid+1;
            else end= mid-1;
        }
        return -1;
}