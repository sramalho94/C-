#include <iostream>
#include <string>

int main() {

  double item_weight;
  double mars_weight;
  std::string unit_meas;
  // Add your code below  
  std::cout << "Enter weight of item: ";
  std::cin >> item_weight;
  std::cout << "Enter unit of measurement: ";
  std::cin >> unit_meas;
  mars_weight = (item_weight / 9.81) * 3.711;
  std::cout << "The item's weight on mars is " << mars_weight << " " << unit_meas << ".\n";
}