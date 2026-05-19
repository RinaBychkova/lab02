#include <iostream>
#include <string>
int main() {
    // This is a comment to cause a conflict
    string name;
    cout << "Enter your name: ";
    cin >> name;
    cout << "Hello world from @" << name << endl;
    return 0;
}
