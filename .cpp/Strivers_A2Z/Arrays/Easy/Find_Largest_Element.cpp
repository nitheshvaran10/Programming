#include <iostream>
#include <sstream>
#include <vector>

int FindLargestElement(std::vector<int> nums){
    int high = nums[0];
    int len = nums.size();
    for (int i=1; i<len; ++i){
        if (nums[i]>high) high = nums[i];
    }
    return high;
}

int main(){
    std::string line;
    std::vector<int> in;
    int num;
    std::cout<<"Enter space-separated inputs: ";
    std::getline(std::cin, line);

    std::stringstream ss(line);
    while(ss>>num) in.emplace_back(num);

    std::cout<<"\nThe Largest element in array is : \""<<FindLargestElement(in)<<"\"";
}