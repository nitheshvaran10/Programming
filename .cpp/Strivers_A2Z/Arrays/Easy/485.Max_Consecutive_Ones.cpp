#include <iostream>
#include <sstream>
#include <vector>

int MaxConsecutiveOnes(std::vector<int> &nums){
    int count = 0, high = 0; 
    for (int i=0; i<nums.size(); ++i){
        if (nums[i]==1) ++count;
        else{
            if (count>high) high = count;
            count = 0;
        }
    }
    return std::max(high, count);
}

int main(){
    std::string line;
    std::vector<int> in;
    int num, k;
    std::cout<<"Enter space-separated inputs: ";
    std::getline(std::cin, line);

    std::stringstream ss(line);
    while(ss>>num) in.emplace_back(num);

    std::cout<<"Maximum consecutive Ones in array is: "<<MaxConsecutiveOnes(in);

}