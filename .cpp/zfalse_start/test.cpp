#include <iostream>

int main() {
    int n, reverse=0;
    std::cout<<"Enter Input: ";
    std::cin>>n;
    int n_copy=n;
    do {
        reverse = reverse*10 + n%10;
        n /= 10;
    } while(n!=0);
    
    if (reverse == n_copy) std::cout<<"true";
    else std::cout<<"false";
}