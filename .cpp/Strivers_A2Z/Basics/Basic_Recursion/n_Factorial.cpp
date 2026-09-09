# include<iostream>

int n_factorial(int n){
    if (n==0 || n==1) return 1;
    int fact = n * n_factorial(n-1);
    return fact;
}

int main(){
    int n;
    std::cout<<"\nEnter a integer: ";
    std::cin>>n;

    std::cout<<"\nThe Factorial of "<<n<<" is "<<n_factorial(n);
    return 0;
}