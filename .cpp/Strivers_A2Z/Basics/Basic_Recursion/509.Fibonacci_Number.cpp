#include <iostream>
#include <cstring>
//Novice solution Using Recursion
/*int fibo(int n){
    if (n==0) return 0;
    else if (n==1) return 1;
    return (fibo(n-1) + fibo(n-2));
}*/

//Reducing Memory by avoiding calling the function twice with Same value Recursion.
/*int val=0;
int fibo(int n, int a){
    if (n==0) return 0;
    else if (n==1 || n==2) return 1;
    int compute = (fibo(n-1, a) + fibo(n-2, a));
    if (n==a-3)  val = compute;
    return compute;
}

int reduce_memory(int n, int a){
    if (n==0) return 0;
    else if (n==1 || n==2) return 1;
    return (2*fibo (n-2, a) + val);
}*/

//Using Memoziation --> Dynamic Programming
int memo[100] = {-1};

int fibo(int n){
    if (n<=1) return n;
    if (memo[n] != -1) return memo[n];

    memo[n] = fibo(n-1) + fibo(n-2);
    return memo[n];
}

int main(){
    int n;
    std::cout<<"Enter a postive integer: ";
    std::cin>>n;
    memset(memo, -1, sizeof(memo));
    std::cout<<"Then "<<n<<" of Fibonacci sequence is \""<<fibo(n)<<"\"";
}