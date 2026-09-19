#include <iostream>
#include <vector>
#include <sstream>

int SingleOutOfCouple(std::vector<int> &nums){
    int xorr = nums[0];
    for (int i=1; i<nums.size(); ++i) xorr ^= nums[i];
    return xorr;
}

int main(){
    std::string s;
    std::vector<int> in;
    int num;

    std::cout<<"Enter Space-Seperated inputs: ";
    std::getline(std::cin, s);

    std::stringstream ss(s);
    while(ss>>num) in.emplace_back(num);

    std::cout<<"The Only Single in the Couple group is '"<<SingleOutOfCouple(in)<<"'";
}