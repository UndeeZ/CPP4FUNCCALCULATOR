#include <iostream>
#include <string>
int value1 = 0;
int value2 = 0;
int result = 0;
int operation;
int i = 1;
std::string option;

int main() {


while (i >= 1) {
    std::cout << "Welcome to my calculator \nYour Operations are: \n";
    std::cout << "1: Addition \n2: Subtraction \n3: Multiplying \n4: Division \n";
    std::cin >> operation;
    switch (operation) {
        case 1 :
            std::cout << "Please enter your first value: ";
            std::cin >> value1;
            std::cout << "Please enter your second value: ";
            std::cin >> value2;
            result = value1 + value2;
            std::cout << "Your result is: " << result << std::endl;
            break;

        case 2 :
            std::cout << "Please enter your first value: ";
            std::cin >> value1;
            std::cout << "Please enter your second value: ";
            std::cin >> value2;
            result = value1 - value2;
            std::cout << "Your result is: " << result << std::endl;
            break;
        case 3 :
            std::cout << "Please enter your first value: ";
            std::cin >> value1;
            std::cout << "Please enter your second value: ";
            std::cin >> value2;
            result = value1 * value2;
            std::cout << "Your result is: " << result << std::endl;
            break;
        case 4 :
            std::cout << "Please enter your first value: ";
            std::cin >> value1;
            std::cout << "Please enter your second value: ";
            std::cin >> value2;
            result = value1 / value2;
            std::cout << "Your result is: " << result << std::endl;
            break;
        default : std::cerr << "Wrong operation!" << std::endl;
    }
        //Function runs while i = 1 so we give it a 0 when we want to stop it
        std::cout << "Would you like to try again? (Y/N): ";
            std::cin >> option;
            if (option == "Y" or option == "y") {
                i = 1;
            }
            else if (option == "N" or option == "n") {
                i = 0;
            }

}
}


