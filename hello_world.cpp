// New comment for PR test
#include <iostream>
#include <string>
int main() {
    // This is a comment to cause a conflict
    std::string name;
    std::cout << "Enter your name: ";
    std::cin >> name;
    std::cout << "Hello, world from @" << name << std::endl;
    return 0;
 }
