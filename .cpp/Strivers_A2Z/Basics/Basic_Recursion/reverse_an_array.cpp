#include <iostream>
#include <utility>

//Novice solution
/*void reverse(int arr[], int n){
    for (int i=0; i<n/2; ++i){
        arr[i] = arr[i] + arr[n-(i+1)];
        arr[n-(i+1)] = arr[i] - arr[n-(i+1)];
        arr[i] = arr[i] - arr[n-(i+1)];
    }
    return;
}*/

//Novice solution using two pointers
/*void reverse(int arr[], int l, int r){
    if (l>=r) return;
    std::swap(arr[l], arr[r]);
    std::cout<<"\nArray after swaping: ";
    for (int i=0; i<9; ++i) std::cout<<arr[i]<<" ";
    reverse(arr, l+1, r-1);
}*/

//solution using single pointer
void reverse(int i, int arr[], int n){
    if (i>=n/2) return;
    std::swap(arr[i], arr[n-(i+1)]);
    reverse(i+1, arr, n);
}

int main(){
    int arr[9];
    int n = 9;
    std::cout<<"\nEnter "<<n<<" integers seperated by space : ";
    
    for (int i=0; i<n; ++i) std::cin>>arr[i];
    //reverse(arr, n); //my solution
    //reverse(arr, 0, n-1); //solution using two pointers
    reverse(0, arr, n); //solution using single pointer
    
    std::cout<<"\n reversed array: ";
    for (int i=0; i<n; ++i) std::cout<<arr[i]<<" ";

    return 0;
}