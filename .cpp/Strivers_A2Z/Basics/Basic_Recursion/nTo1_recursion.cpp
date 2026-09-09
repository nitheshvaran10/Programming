#include <iostream>

void nTo1_recursion(int n){
    if (n!=0){
        std::cout<<n<<"\n";
        nTo1_recursion(n-1);
    }
    return;
}

int main(){
    int n;
    std::cout<<"\nEnter a integer: ";
    std::cin>>n;

    nTo1_recursion(n);
    return 0;
}