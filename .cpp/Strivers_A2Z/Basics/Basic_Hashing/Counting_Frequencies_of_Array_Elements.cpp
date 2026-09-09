#include <iostream>
#include <vector>
#include <unordered_map>
#include <string>
#include <sstream>

std::vector<std::vector<int>> count_frequency(std::vector<int> nums){
    std::unordered_map<int, int> freq;
    for (int n: nums) ++freq[n];

    std::vector<std::vector<int>> result;
    for (auto [key, count]: freq){
        result.emplace_back(std::vector<int>{key, count});
    }

    return result;
}

int main(){
    std::vector<int> in;
    int num;
    std::string line;
    std::cout<<"Enter space-seperated integer inputs: ";
    std::getline(std::cin, line);

    std::stringstream ss(line);
    while (ss>>num) in.emplace_back(num);

    std::cout<<"Then frequency of the Given Numbers, \n";
    for (auto v : count_frequency(in)){
        std::cout<<v[0]<<" --> "<<v[1]<<" time(s)\n";
    }

}