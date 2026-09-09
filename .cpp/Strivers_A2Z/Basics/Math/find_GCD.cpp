#include <iostream>

int gcd(int n1, int n2){
    if (n2==0) return n1;
    return gcd(n2, n1%n2);
}

int main(){
    int n1, n2;
    std::cout<<"Enter any two positive integers: ";
    std::cin>>n1;
    std::cin>>n2;
    std::cout<<"\n The GCD of "<<n1<<" and "<<n2<<" is \""<<gcd(n1, n2)<<"\"";
    return 0;
}