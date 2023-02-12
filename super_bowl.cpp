#include <iostream>

std::string super_bowl(std::string halftime_performer)
{
  if(halftime_performer == "Rihanna")
    {
      return "Looks like I'm watching the Super Bowl!\n";
    }
  else
  {
    return "I'm good, I'll watch old reruns of Kitchen Nightmares instead.\n";
  }
}

int main()
{
  std::cout << super_bowl("Rihanna");
}