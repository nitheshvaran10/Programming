#include <iostream>
#include <string>

int hash[26] = {0};
std::string s;

int main(){
    std::cout<<"Enter a string: ";
    std::cin>>s;

    for (int i=0; i<s.size(); ++i){
        ++hash[s[i] - 'a'];
    }

    int q;
    std::cout<<"Enter how much characters count you have to check: ";
    std::cin>>q;
    char ch;

    while(q--){
        std::cin>>ch;
        std::cout<<"The character \""<<ch<<"\" is \""<<hash[ch-'a']<<"\" times\n";
    }
}