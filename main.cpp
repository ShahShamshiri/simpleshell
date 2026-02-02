#include <iostream>
#include <string>
int main() {

    while(true) {
        std::cout << "$ ";
        std::cout.flush();

        std::string line;
        if (!std::getline(std::cin, line)) {
            break;
        }

        std::cout << "Repeated: " << line <<std::endl;

    }


    return 0;
}
