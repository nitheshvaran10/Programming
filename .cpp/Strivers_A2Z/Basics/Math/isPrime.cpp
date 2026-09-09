#include <iostream>
#include <vector>

bool isPrime(int n){

    for (int i=2; i<=n/2; ++i) {
        if (n%i==0) return false;
    }
    return true;
}

int main(){
    int n;
    std::cout<<"\nEnter a integer: ";
    std::cin>>n;

    if (isPrime(n)) std::cout<<"true";
    else std::cout<<"false";

    return 0;
}