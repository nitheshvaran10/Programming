#include <iostream>
#include <sstream>
#include <vector>

bool CheckSortedArray(std::vector<int> &nums){
    int n = nums.size();
    int breaks = 0;

    for (int i=0; i<n; ++i){
        if (nums[i]>nums[(i+1)%n]) ++breaks;
        if (breaks>1) return false;
    }
    return true;
}

int main(){
    std::string line;
    std::vector<int> in;
    int num;
    std::cout<<"Enter space-separated inputs: ";
    std::getline(std::cin, line);

    std::stringstream ss(line);
    while(ss>>num) in.emplace_back(num);

    CheckSortedArray(in) ? std::cout<<"\nThe given Array is SORTED (:" : std::cout<<"\nThe given Array is NOT SORTED ):";
}