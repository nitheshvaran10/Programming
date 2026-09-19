#include <iostream>
#include <sstream>
#include <vector>
//My Solution
/*void QuickSort(std::vector<int> &nums, int low, int high){
    if (low>=high) return ;

    int pt = low;
    for (int i=low; i<=high; ++i){
        if (nums[high]>nums[i])
            std::swap(nums[pt++], nums[i]);
    }
    std::swap(nums[high], nums[pt]);

    QuickSort(nums, low, pt-1);
    QuickSort(nums, pt+1, high);
}

int FindMissingNumber(std::vector<int> &nums){
    int n = nums.size();
    QuickSort(nums, 0, n-1);

    if (nums[0]!=0) return 0;
    for (int i=1; i<n; ++i){
       if (nums[i]-nums[i-1] != 1) return nums[i-1] + 1;
    }
    return n;
}*/

//AI Solution --> Optimal Solution

//1. Mathematical Approach
/*int FindMissingNumber(std::vector<int> &nums){
    int n = nums.size();
    int expected = n*(n+1)/2;
    int actual = 0;

    for(int i: nums) actual += i;
    return (expected - actual);
}*/

//2. Using XOR(^) bit wise operator
int FindMissingNumber(std::vector<int> &nums){
    int xorr = nums.size();
    for (int i=0; i<nums.size(); ++i)
        xorr ^= i^nums[i];
    return xorr;
}

int main(){
    std::string line;
    std::vector<int> in;
    int num;
    std::cout<<"Enter space-separated inputs: ";
    std::getline(std::cin, line);

    std::stringstream ss(line);
    while(ss>>num) in.emplace_back(num);

    std::cout<<"\nThe missing number in array is : \""<<FindMissingNumber(in)<<"\"";
}