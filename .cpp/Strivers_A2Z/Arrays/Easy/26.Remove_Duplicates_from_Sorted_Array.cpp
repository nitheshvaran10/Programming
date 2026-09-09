#include <iostream>
#include <sstream>
#include <vector>

//Novice Solution
/*int RemoveDuplicates(std::vector<int> &nums, int &n){
    int pt=0;
    for (int i=1; i<n; ++i){
        if (nums[i]>nums[pt]){
            if (i-1 != pt) nums[pt+1] = nums[i];
            ++pt;
        }
    }
    if (pt!=n-1) nums.erase(nums.begin()+(pt+1),nums.end());
    return nums.size();
}*/

//After AI review
int RemoveDuplicates(std::vector<int> &nums){
    int pt=0, n=nums.size();
    for (int i=1; i<n; ++i){
        if (nums[i] != nums[pt]){
            nums[++pt] = nums[i];
        }
    }
    return pt+1;
}

int main(){
    std::string line;
    std::vector<int> in;
    int num;
    std::cout<<"Enter space-separated inputs: ";
    std::getline(std::cin, line);

    std::stringstream ss(line);
    while(ss>>num) in.emplace_back(num);
    int length = in.size();

    std::cout<<"After Removing Duplicates:  ";
    for (auto it = in.begin(); it!=in.end(); ++it){
        if (it == in.end()-1) std::cout<<*it;
        else std::cout<<*it<<", ";
    }
    std::cout<<"\nNo of Duplicates in Array: \""<<length - RemoveDuplicates(in)<<"\"";
}