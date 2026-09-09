#include<iostream>
using namespace std;

int main(){
    int num1, num2;
    cin >> num1;
    cin.clear();
    cin.ignore(30, '\n');
    cin >> num2;
    cout << "The value of their sum: " << num1+num2 << endl;
}   