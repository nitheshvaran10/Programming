#include <iostream>
#include <vector>
#include <sstream>

//My Solution 
/*std::vector<int> UnionOfSortedArrays(std::vector<int> &nums1, std::vector<int> &nums2){
    std::vector<int> result;
    int pt1=0, pt2=0, n1 = nums1.size(), n2 = nums2.size();

    while (pt1<n1 && pt2<n2){
        while (pt1<n1-1 && nums1[pt1]==nums1[pt1+1]) ++pt1;
        while (pt2<n2-1 && nums2[pt2]==nums2[pt2+1]) ++pt2;
        if (nums1[pt1]<nums2[pt2]) result.emplace_back(nums1[pt1++]);
        else if (nums1[pt1]>nums2[pt2]) result.emplace_back(nums2[pt2++]); 
        else {
            result.emplace_back(nums1[pt1++]);
            ++pt2;
        }
    }

    while (pt1<n1){
        while (pt1<n1-1 && nums1[pt1]==nums1[pt1+1]) ++pt1;
        result.emplace_back(nums1[pt1++]);
    }

    while (pt2<n2){
        while (pt2<n2-1 && nums2[pt2]==nums2[pt2+1]) ++pt2;
        result.emplace_back(nums2[pt2++]);
    }

    return result;
}*/

//AI-Solution --> Cleaner and used Lambda fn Same approach
std::vector<int> UnionOfSortedArrays(std::vector<int> &nums1, std::vector<int> &nums2){
    std::vector<int> result;
    int pt1=0, pt2=0, n1 = nums1.size(), n2 = nums2.size();

    auto addIfnew = [&](int val){
        if (result.empty() || result.back() != val) 
            result.emplace_back(val);
    };

    while (pt1<n1 && pt2<n2){
        if (nums1[pt1]<nums2[pt2]) addIfnew(nums1[pt1++]);
        else if (nums1[pt1]>nums2[pt2]) addIfnew(nums2[pt2++]);
        else {addIfnew(nums1[pt1++]); ++pt2; }
    }
    while (pt1<n1) addIfnew(nums1[pt1++]);
    while (pt2<n2) addIfnew(nums2[pt2++]);

    return result;
}
int main(){
    int num;
    std::string line;
    std::vector<int> in1, in2;

    std::cout<<"Enter elements in First array: ";
    std::getline(std::cin, line);
    std::stringstream ss1(line);
    while(ss1>>num) in1.emplace_back(num);

    std::cout<<"\nEnter elements in Second array: ";
    std::getline(std::cin, line);
    std::stringstream ss2(line);
    while(ss2>>num) in2.emplace_back(num);

    std::vector<int> result = UnionOfSortedArrays(in1, in2);
    std::cout<<"\nThe resultant array: ";
    for (auto it=result.begin(); it!=result.end(); ++it){
        if (it != result.end()-1) std::cout<< *it <<", ";
        else std::cout<< *it;
    }

}