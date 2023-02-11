#include <iostream>

int main() {
  int year;
  std::cout << "Enter a year: ";
  std::cin >> year;
  if(year / 10 >= 100 and year /10 < 1000){
    if(year % 4 == 0 and year % 100 == 0 and year % 400 == 0){
      std::cout << "Leap year\n";
    } else {
      std::cout << "Not a Leap year\n";
    }
  } else {
    std::cout << "Invalid year\n";
  }
  
}