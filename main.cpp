#include <iostream>
#include <string>



int main() {
    std::string option;
    double value1 = 0;
    double value2 = 0;
    double result = 0;
    int operation;
    bool running = true;
while (running) {
    std::cout << "Welcome to my calculator \nYour Operations are: \n";
    std::cout << "1: Addition \n2: Subtraction \n3: Multiplying \n4: Division \n";
    std::cin >> operation;

    std::cout << "Please enter your first value: ";
    std::cin >> value1;

    std::cout << "Please enter your second value: ";
    std::cin >> value2;

    switch (operation) {
        case 1 :
            result = value1 + value2;
            break;
        case 2 :
            result = value1 - value2;
            break;
        case 3 :
            result = value1 * value2;
            break;
        case 4 :
            if (value2 == 0) {
                std::cerr << "Error: Division by zero!\n";
            } else {
                result = value1 / value2;
                std::cout << "Your result is: " << result << std::endl;
            }
        default : std::cerr << "Wrong operation!" << std::endl;
    }
    std::cout << "Your result is: " << result << std::endl;

    std::cout << "Would you like to try again? (Y/N): ";
    std::cin >> option;
    if (option == "Y" or option == "y") {
        running = true;
    }
    else if (option == "N" or option == "n") {
        running = false;
    }
}
    return 0;

}


