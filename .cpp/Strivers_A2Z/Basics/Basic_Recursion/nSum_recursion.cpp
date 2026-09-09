#include <iostream>

int nSum(int n){
    if (n==1) return 1;
    int sum = n + nSum(n-1);
    return sum;
}

int main(){
    int n;
    std::cout<<"\nEnter a integer: ";
    std::cin>>n;

    std::cout<<"\nThe Sum of first N natural numbers is "<<nSum(n);
    return 0;
}