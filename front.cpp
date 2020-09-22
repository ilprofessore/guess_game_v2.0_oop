#include "front.hpp"
#include "upper_to_lower.hpp"

void menu()
{
    std::string response;
    while (true)
    {
        system("cls");
        std::cout << "\n\tGUESSING GAME V2.0 OOP VERSION\n\n";
        std::cout << "\tenter 'start' to begin: ";
        std::getline(std::cin, response);
        if (upper_to_lower(response) == "start" || "begin" || "commence" || "get going")
        {
            break;
        } else if (upper_to_lower(response) == "stop" || "exit" || "quit" || "halt" || "end" || "terminate")
        {
            exit(0); // 0 is the return status.
        }

    }
    
}