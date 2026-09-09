#include <iostream>
#include <sstream>
#include <vector>

//Novice Solution
/*int SecondLargestElement(std::vector<int> nums){
    int len = nums.size(), high=nums[0], scnd, flag=1;
    
    if (len<=1) return -1; 
    
    for (int i=1; i<len; ++i){
        if (nums[i]>high){
            scnd = high;
            flag = 0;
            high = nums[i];
        }

        else if (flag==1 && nums[i]<high){
            scnd = nums[i];
            flag = 0;
        }

        else if (flag==0 && nums[i]>scnd) scnd = nums[i];
    }
    
    if (flag==1) return -1;
    else return scnd;
}*/


/*This logic is good with minimal memory but fails on specific testcases:
    "If the second largest element in the array is INT_MIN"*/
    
int SecondLargestElement(std::vector<int> nums){
    int high = INT_MIN, scnd= INT_MIN;

    for (int n : nums){
        if (n>high){
            scnd = high;
            high = n;
        }

        else if (n>scnd && high != n) scnd = n;
    }

    return (scnd==INT_MIN) ? -1 : scnd; 
}

int main(){
    std::string line;
    std::vector<int> in;
    int num;
    std::cout<<"Enter space-separated inputs: ";
    std::getline(std::cin, line);

    std::stringstream ss(line);
    while(ss>>num) in.emplace_back(num);

    std::cout<<"\nThe Second Largest element in array is : \""<<SecondLargestElement(in)<<"\"";
}