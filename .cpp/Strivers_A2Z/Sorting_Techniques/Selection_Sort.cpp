#include <iostream>
#include <vector>
#include <utility>
#include <sstream>

std::vector<int> SelectionSort(std::vector<int> nums){
    int size = nums.size();

    for (int i=0; i<size-1; ++i){
        int min_idx = i;
        int min_val = nums[i];
        for (int j=i+1; j<size; ++j){
            if (nums[j]<min_val){
                min_idx= j;
                min_val = nums[j];
            }
        }
        if (i != min_idx) std::swap(nums[i], nums[min_idx]);
    }

    return nums;
}

int main(){
    std::vector<int> in;
    int num;
    std::string line;
    std::cout<<"Enter space-separated integer inputs: ";
    std::getline(std::cin, line);

    std::stringstream ss(line);
    while (ss>>num) in.emplace_back(num);

    std::vector<int> sorted = SelectionSort(in);
    std::cout<<"\nSorted Order using Selection sort: ";
    for (auto it = sorted.begin(); it != sorted.end(); ++it){
        if (it == sorted.end()-1) std::cout<<*it;
        else std::cout<<*it<<", ";
    }

}