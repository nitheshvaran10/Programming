#include <iostream>
#include <sstream>
#include <vector>

void DivideAndConquer(std::vector<int> &nums, int low, int high){
    if (low>=high) return;

    int mid = low + (high-low)/2;
    DivideAndConquer(nums, low, mid);
    DivideAndConquer(nums, mid+1, high);
    std::vector<int> temp;
    int l = low, r = mid+1;
    while (l<=mid && r<=high){
        if (nums[l]<nums[r]) temp.emplace_back(nums[l++]);
        else temp.emplace_back(nums[r++]);
    }

    while (l<=mid) temp.emplace_back(nums[l++]);
    while (r<=high) temp.emplace_back(nums[r++]);
    for (int i=low; i<=high; ++i) nums[i] = temp[i-low];
}

std::vector<int> MergeSort(std::vector<int> &nums){
    DivideAndConquer(nums, 0, nums.size()-1);
    return nums;
}

int main(){
    int num;
    std::vector<int> in;
    std::string line;
    std::cout<<"Enter space-separated inputs: ";
    std::getline(std::cin, line);

    std::stringstream ss(line);
    while(ss>>num) in.emplace_back(num);

    std::vector<int> sorted = MergeSort(in);
    std::cout<<"\nSorted Order using Merge sort: ";
    for (auto it=in.begin(); it != in.end(); ++it){
        if (it == in.end()-1) std::cout<<*it;
        else std::cout<<*it<<", ";
    }
}