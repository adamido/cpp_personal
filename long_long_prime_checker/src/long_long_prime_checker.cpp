#include <iostream>

int main()
{
    long long userInput;
    
    std::cout << "Please Enter a Number" << std::endl;
    std::cin >> userInput;

    long long value = userInput;

    if(value == 2)
    {
        std::cout << userInput << " is prime." << std::endl;
        return 0;
    }

    if(value % 2 == 0) 
    {
        std::cout << userInput << " is not prime." << std::endl;
        return 0;
    }

    for(long long i = 3; i < value / 2; i = i + 2)
    {
        std::cout << i << std::endl;
        
        if(value % i == 0)
        {
            std::cout << userInput << " is not prime" << std::endl;
            return 0;
        }
    }

    std::cout << userInput << " is prime." << std::endl;
        

return 0;
}
