#include <iostream>

// main function
int main()
{
    int day = 0;

    // ask user for input and store in variable
    std::cout << "Please enter a number between 1 and 7: ";
    std::cin >> day;

    // switch statement
    switch (day)
    {
    // case 1 to 7
    case 1:
        std::cout << "Monday";
        break;
    case 2:
        std::cout << "Tuesday";
        break;
    case 3:
        std::cout << "Wednesday";
        break;
    case 4:
        std::cout << "Thursday";
        break;
    case 5:
        std::cout << "Friday";
        break;
    case 6:
        std::cout << "Saturday";
        break;
    case 7:
        std::cout << "Sunday";
        break;
    default:
        std::cout << "Invalid input! Please enter a number between 1 and 7.";
        break;
    }
    // end of switch statement

    return 0;
    // end of main function
}
