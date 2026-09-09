#include <iostream>
#include <sstream>
#include <vector>

//My Solution
/*void MoveZeroesToEnd(std::vector<int> &nums){
    int n = nums.size();
    int i = 0;

    for (i; i<n-1; ++i){
        if (nums[i]!=0) continue;
        else break;
    }
    if (i==n-1) return;

    for (int j=i+1; j<n; ++j){
        if (nums[j] != 0) std::swap(nums[i++], nums[j]);
    }
}*/

//AI-Solution --> same approach just removing the complexity
void MoveZeroesToEnd(std::vector<int> &nums){
    int n = nums.size();
    int pt = 0;

    for (int i=0; i<n; ++i){
        if (nums[i] != 0) std::swap(nums[pt++], nums[i]);
    }
}

int main(){
    std::string line;
    std::vector<int> in;
    int num, k;
    std::cout<<"Enter space-separated inputs: ";
    std::getline(std::cin, line);

    std::stringstream ss(line);
    while(ss>>num) in.emplace_back(num);
    int length = in.size();

    MoveZeroesToEnd(in);
    std::cout<<"\nResultant Array after moving 0's to end and maintaining the relative order, \n";
    for (auto it = in.begin(); it!=in.end(); ++it){
        if (it == in.end()-1) std::cout<<*it;
        else std::cout<<*it<<", ";
    }
}