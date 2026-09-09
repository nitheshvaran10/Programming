#include <iostream>

int main() {
  // Write code here 💖
  int age;
  bool citizen;
  bool registered;
  std::string user_input;

  std::cout<<"Enter your age: ";
  std::cin>>age;
 
  while (age<0){
    std::cout<<"Please enter a appropriate age!\n";
    std::cout<<"\nEnter your age here: ";
    std::cin>>age;
  }

  if (age<18){
    std::cout<<"You are not old enough to vote.\n";
    return 0;
  }
  
  std::cout<<"Do you have citizenship in India: ";
  if (std::cin>>user_input){
    if (user_input == "yes"){
      citizen = true;
    }
    else{
      citizen = false;
    }
  }

  std::cout<<"Are you registed for 2026 State election: ";
  if (std::cin>>user_input){
    if (user_input == "yes"){
      registered = true;
    }
    else{
      registered = false;
    }
  }

  if (age>=18 && citizen && registered){
    std::cout<<"You can vote!";
  }
  else if (!citizen){
    std::cout<<"You are not eligible to vote.";
  }
  else if (!registered){
    std::cout<<"You need to register first.";
  }
}