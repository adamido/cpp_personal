#include <iostream>

int main()
{
    int userInput = 0;

    std::cout << "Please enter a number between 1 and 10" << std::endl;

    std::cin >> userInput;

    if(userInput <= 10 && userInput > 0 && (userInput / 2 == 1 || userInput % 3 == 0 ||
userInput % 5 == 0 || userInput % 7 == 0))
    {
        std::cout << userInput << " is a prime number!" << std::endl;
        std::cout << "If you wish to quit press ^C" << std::endl;
    }

    if(userInput > 10 || userInput < 0)
    {
        std::cout << "That number is not between 1 and 10!" << std::endl;
    }
    else;
    {
        std::cout << userInput << " is not a prime number!" << std::endl;
    }

return 0;
}
