#include <iostream>

//my solution
bool hasAlternatingBits(int n) {
    int rem, prev_rem;
    rem = n%2;
    prev_rem = rem;
    n /=2;
    while (n != 0) {
        rem = n%2;
        if (rem == prev_rem) {
            return false;
        }
        prev_rem = rem;
        n /= 2;
    }
    return true;
}

//optimized solution after discussing with claude
bool hasAlternatingBits(int n) {
    unsigned int xorResult = n ^ (n>>1);
    return (xorResult & (xorResult + 1)) == 0;
}

int main(){
    int n;
    std::cout<<"\nEnter a integer: ";
    std::cin>>n;
    if (hasAlternatingBits(n)) std::cout<<"Yes!, the given integer has Alternating Bits";
    else std::cout<<"Sorry :(, The given number doesn't seems to be in alternating bits";
    return 0;
}