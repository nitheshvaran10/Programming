#include <iostream>
#include <sstream>
#include <vector>

std::vector<int> InsertionSort(std::vector<int> nums){
    int size = nums.size();
    
    for (int i=0; i<size-1; ++i){
        if (nums[i] > nums[i+1]){
            int j = i+1;
            int key = nums[j];
            while (j>0 && (key<nums[j-1])){
                nums[j] = nums[j-1];
                --j;
            }
            nums[j] = key; 
        }
    }
    return nums;
}

int main(){
    std::vector<int> in;
    int num;
    std::string line;
    std::cout<<"Enter Space-Separated inputs: ";
    std::getline(std::cin,line);

    std::stringstream ss(line);
    while(ss>>num) in.emplace_back(num);

    std::vector<int> sorted = InsertionSort(in);
    std::cout<<"\nSorted Order using Insertion sort: ";
    for (auto it = sorted.begin(); it != sorted.end(); ++it){
        if (it == sorted.end()-1) std::cout<<*it;
        else std::cout<<*it<<", ";
    }
}