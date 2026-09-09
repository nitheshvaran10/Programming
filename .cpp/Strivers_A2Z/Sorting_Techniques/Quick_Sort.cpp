#include <iostream>
#include <vector>
#include <sstream>

void QuickSort(std::vector<int> &nums, int low, int high){
    if (low>=high) return;
    int pivot = nums[high];
    int pt = low;
    for (int i = low; i<=high; ++i){
        if (pivot>nums[i]) {
            std::swap(nums[pt], nums[i]);
            ++pt;
        }
    }
    std::swap(nums[pt], nums[high]);
    QuickSort(nums, low, pt-1);
    QuickSort(nums, pt+1, high);
}

int main(){
    std::vector<int> in;
    int num;
    std::string line;
    std::cout<<"Enter space-separated integer inputs: ";
    std::getline(std::cin, line);

    std::stringstream ss(line);
    while (ss>>num) in.emplace_back(num);

    QuickSort(in, 0, in.size()-1);
    std::vector<int> sorted = in;
    std::cout<<"\nSorted Order using Quick sort: ";
    for (auto it = sorted.begin(); it != sorted.end(); ++it){
        if (it == sorted.end()-1) std::cout<<*it;
        else std::cout<<*it<<", ";
    }

}