#include <iostream>
#include <sstream>
#include <vector>

void Reverse(std::vector<int> &nums, int start, int stop){
    int mid = (start+stop)/2;
    for (int i=start; i<mid; ++i){
        std::swap(nums[i], nums[--stop]);
    }
}

void LeftRotateArray(std::vector<int> &nums, int k){
    int n = nums.size();
    k %= n;
    if (k==0 || n==1) return;

    k=n-k; //For Right rotation, "If left rotation then commnent this line"
    Reverse(nums, 0, k);
    Reverse(nums, k, n);
    Reverse(nums, 0, n);
}

int main(){
    std::string line;
    std::vector<int> in;
    int num, k;
    std::cout<<"Enter space-separated inputs: ";
    std::getline(std::cin, line);
    std::cout<<"\n Enter no elements to be rotated left: ";
    std::cin>>k;

    std::stringstream ss(line);
    while(ss>>num) in.emplace_back(num);
    int length = in.size();

    LeftRotateArray(in, k);
    std::cout<<"\nResultant Array after Left rotation of '"<<k<<"' elements, \n";
    for (auto it = in.begin(); it!=in.end(); ++it){
        if (it == in.end()-1) std::cout<<*it;
        else std::cout<<*it<<", ";
    }
}