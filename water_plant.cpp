#include <iostream>

// Define needs_water() here:
std::string needs_water(int days, bool is_succulent)
{
  if (is_succulent)
  {
    if (days <= 12)
    {
      return "Don't water the plant!\n";
    } 
    else
    {
      return "Go ahead and give the plant a little water.\n";
    }
  }
  else
  {
    if (days > 3)
    {
      return "Time to water the plant.\n";
    }
    return "Don't water the plant!\n";
  }
}

int main() {
  
  std::cout << needs_water(10, false) << "\n";
  
}