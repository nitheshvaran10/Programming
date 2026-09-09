#include <iostream>

void n_recursion(int n){
    if (n==0) return;

    n_recursion(n-1);
    std::cout<<n<<"\n";
}

int main(){
    int n;
    std::cout<<"\nEnter a integer: ";
    std::cin>>n;

    n_recursion(n);
    return 0;
}