#include <iostream>
#include <string>

int main() {
 float weight;
 int planet;
  std::cout << "What is Little Mac's weight on earth: ";
  std::cin >> weight;
  std::cout << "What number planet do you want to fight on?\n"
            << "1: Mercury\n"
            << "2: Venus\n"
            << "3: Mars\n"
            << "4: Jupiter\n"
            << "5: Saturn\n"
            << "6: Uranus\n"
            << "7: Neptune\n";
  std::cin >> planet;
  switch (planet){
    case 1:
      weight = weight * 0.38;
      std::cout << "Little Mac's weight is: " << weight << "\n";
      break;
      case 2:
      weight = weight * 0.91;
      std::cout << "Little Mac's weight is: " << weight << "\n";
      break;
      case 3:
      weight = weight * 0.38;
      std::cout << "Little Mac's weight is: " << weight << "\n";
      break;
      case 4:
      weight = weight * 2.34;
      std::cout << "Little Mac's weight is: " << weight << "\n";
      break;
      case 5:
      weight = weight * 1.06;
      std::cout << "Little Mac's weight is: " << weight << "\n";
      break;
      case 6:
      weight = weight * 0.92;
      std::cout << "Little Mac's weight is: " << weight << "\n";
      break;
      case 7:
      weight = weight * 1.19;
      std::cout << "Little Mac's weight is: " << weight << "\n";
      break;
  }
  
  
  

}