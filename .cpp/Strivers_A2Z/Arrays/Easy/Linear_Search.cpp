#include <iostream>
#include <vector>
#include <sstream>

int LinearSearch(std::vector<int> &nums, int &num){
    for (int i=0; i<nums.size(); ++i){
        if (nums[i]==num) return i;
    }
    return -1;
}
int main(){
    std::string s;
    std::vector<int> in;
    int num;

    std::cout<<"Enter Space-Seperated inputs: ";
    std::getline(std::cin, s);

    std::stringstream ss(s);
    while(ss>>num) in.emplace_back(num);

    std::cout<<"Enter the Element to search in array: ";
    std::cin>>num;

    num = LinearSearch(in, num);
    if (num != -1) std::cout<<"The given element is in \""<<num<<"th\" Index Position";
    else std::cout<<" Sorry!, The given doent not exist in the given array";
}