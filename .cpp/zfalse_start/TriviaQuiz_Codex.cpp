#include <iostream>

int main() {
  // Write code here 💖
  int score=0;
  std::string answer;

  std::cout<<"Q1) What is the name of the world's longest river? 💧\n\n1) Missouri River\n2) Nile\n3) Amazon River\n4) Yangtze River\n\nType your answer: ";
  std::getline(std::cin, answer);
  if (answer == "Nile"){
    score+=1;
  }

  std::cout<<"\nQ2) How many bones are in the human body? 🦴\n\n1) 92\n2) 150\n3) 206\n4) 10\n\nTyper your answer: ";
  std::getline(std::cin, answer);
  //std::cin>>answer;
  if (answer=="206"){
    score+=1;
  }

  std::cout<<"\nQ3) What food never spoils? 😷\n\nType your answer: ";
  std::getline(std::cin, answer);
  if (answer=="honey" || answer=="white rice" || answer=="salt" || answer=="sugar"){
    score+=1;
  }

  std::cout<<"\nYou have answered " << score << " questions correctly out of 3 🥳";
}