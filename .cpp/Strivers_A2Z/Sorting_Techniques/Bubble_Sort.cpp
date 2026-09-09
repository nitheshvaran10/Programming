#include <iostream>
#include <vector>
#include <sstream>

std::vector<int> BubbleSort(std::vector<int> nums){
    int size = nums.size();
    int swapped = 1;
    int pass = 0;
    while (swapped==1){
        swapped = 0;
        for (int i=0; i<size-(1+pass); ++i){
            if (nums[i]<=nums[i+1]) continue;
            std::swap(nums[i], nums[i+1]);
            swapped = 1;
        }
        ++pass;
    }
    return nums;
}

int main(){
    std::string line;
    std::vector<int> in;
    int num;
    std::cout<<"Enter space-separated inputs: ";
    std::getline(std::cin, line);

    std::stringstream ss(line);
    while(ss>>num) in.emplace_back(num);

    std::vector<int> sorted = BubbleSort(in);
    std::cout<<"\nSorted Order using Bubble sort: ";
    for (auto it=sorted.begin(); it!=sorted.end(); ++it){
        if (it == sorted.end()-1) std::cout<<*it;
        else std::cout<<*it<<", ";
    }
}