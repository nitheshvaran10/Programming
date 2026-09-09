#include <iostream>
#include <vector>

std::vector<int> divisors(int n){
    std::vector<int> v;

    for (int i=1; i<=n/2; ++i) {
        if (n%i==0) v.emplace_back(i);
    }
    v.emplace_back(n);
    return v;
}

int main(){
    int n;
    std::cout<<"\nEnter a integer: ";
    std::cin>>n;

    std::vector<int> v = divisors(n);
    std::cout<<"\nThis given interger \""<<n<<"\" has "<<v.size()<<" divisors\n";
    std::cout<<"| ";
    for (auto& element : v) {
        std::cout << element;
        if(&element != &v.back()) std::cout<<", ";
    }
    std::cout<<" |\n\n";
    return 0;
}