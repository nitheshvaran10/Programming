#include <iostream>
#include <cctype>

int main(){
    std::string password;
    std::cout<<"Enter your Password: ";
    std::cin>>password;

    int alpha=0, num=0, special=0;
    int length = password.length();

    for (int i=0; i<length; i++){
        if (isalpha(password[i])){
            alpha += 1;
        }
        else if (isdigit(password[i])){
            num += 1;
        }
        else{
            special += 1;
        }
    }

    if (length>=8 && num>0 && alpha>0 && special>0){
        std::cout<<"Strong Password 💪 \n";
    }
    else if (length>=6 && num>0 && alpha>0){
        std::cout<<"Medium Strength Password 😎 \n";
    }
    else{
        std::cout<<"Weak Password 😔 \n";
    }
}