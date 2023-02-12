#include <iostream>

// Define is_palindrome() here:
bool is_palindrome(std::string test)
{
  int start = 0;
  int end = test.length() - 1;
  while (end > start)
  {
    if(test[start] != test[end])
    {
      return false;
    }
    start++;
    end--;
  }
  return true;
}

int main() {
  
  std::cout << is_palindrome("madam") << "\n";
  std::cout << is_palindrome("ada") << "\n";
  std::cout << is_palindrome("lovelace") << "\n";
  
}