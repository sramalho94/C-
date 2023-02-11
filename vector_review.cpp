#include <iostream>
#include <vector>

int main() {
std::vector<int> vector;
    vector.push_back(2);
    vector.push_back(4);
    vector.push_back(3);
    vector.push_back(6);
    vector.push_back(1);
    vector.push_back(9);
int odd_sum = 0;
int even_sum = 0;
for(int i=0; i < vector.size(); i++){
  if ( i % 2 == 0){
    even_sum += vector[i];
  } else {
    odd_sum += vector[i];
  }
}
std::cout << "Sum of even numbers is " << even_sum << "\n";
std::cout << "Sum of odd numbers is " << odd_sum << "\n";
}