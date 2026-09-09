#include <iostream>
#include <string>
#include <cctype>

//Novice Solution using Recursion
/*bool checkPalindrome(std::string pal, int pointer, int n){
    if (pal[pointer] == pal[n - (pointer + 1)] && pointer <= n/2) return checkPalindrome(pal, pointer+1, n);
    else if(pointer <= n/2) return false;
    return true;
}

bool isPalindrome(std::string str){
    for (int i=0; i<str.length();){
        if (!std::isalnum(str[i])) {
            str.erase(i, 1);
            continue;
        }
        else if (std::isupper(str[i])) str[i] = std::tolower(str[i]);
        ++i;
    }
    
    return checkPalindrome(str, 0, str.length());
}
*/

//Using Recursion
/*bool isPalindrome(std::string str, int left, int right){
    while (left<right && !std::isalnum(str[left])) ++left;

    while (left<right && !std::isalnum(str[right])) --right;

    if (left>=right) return true;

    if (std::tolower(str[left]) != std::tolower(str[right])) return false;

    return isPalindrome(str, ++left, --right);
}*/

//Using While loop
bool isPalindrome(std::string str, int left, int right){
    while (left<right){
        while (left<right && !std::isalnum(str[left])) ++left;
        while (left<right && !std::isalnum(str[right])) --right;

        if (std::tolower(str[left]) != std::tolower(str[right])) return false;

        ++left;
        --right;
    }
    return true;
}

int main(){
    std::string s;
    std::cout<<"Enter the string: ";
    std::getline(std::cin, s);
    //std::cout<<"Result: "<<isPalindrome(s); //Novice Solution
    std::cout<<"Result: "<<isPalindrome(s, 0, s.length()-1); //1.Using Recursion 2.Using While loop
}