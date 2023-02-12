#include <iostream>
int interaction = 0;
std::string on_off_attempt;
int contact_it_support(int& interaction)
  {
    if (interaction == 0)
    {
        std::string on_off_attempt;
        std::cout << "Hello. IT.\n";
        std::cout << "Have you tried turning it off and on again? y/n\n";
        std::cin >> on_off_attempt;
        if (on_off_attempt == "y" || on_off_attempt == "n")
        {
          interaction++;
          return interaction;
        }
        
        
    } else if (interaction ==2)
    {
      std::cout << "Hello. IT.\n";
      std::cout << "Have you tried turning it off and on again? y/n\n";
      std::cin >> on_off_attempt;
        if (on_off_attempt == "y" || on_off_attempt == "n")
        {
          interaction++;
          return interaction;
        }
      

    } else if (interaction == 4){
      std::cout << "Hello. IT.\n";
      std::cout << "Have you tried turning it off and on again? y/n\n";
      std::cin >> on_off_attempt;
        if (on_off_attempt == "y" || on_off_attempt == "n")
        {
          interaction++;
          return interaction;
        }
      

    }
    return interaction;
  }
int check_in(int& interaction)
{
  if (interaction == 1)
  {
    std::cout << "Oh hi Jen!\n";
  } else if (interaction ==3)
    {
      std::cout << "You stole the stress machine? But that's stealing!\n";
    }
  interaction++;
  contact_it_support(interaction);
  return interaction;
}
int main() {
  
  
  // Conduct IT support
  contact_it_support(interaction);
  
  // Check in with Jenn
  check_in(interaction);
  
  // Conduct IT support again...
  contact_it_support(interaction);

  // Check in with Roy
  check_in(interaction);
  
  // Conduct IT support yet again...zzzz...
  contact_it_support(interaction);
  
}