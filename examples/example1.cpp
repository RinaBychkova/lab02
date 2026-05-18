#include <print.hpp>
int main(int args, char** argv)
{ print("hello");} EOF
cat > examples/example2.cpp <<EOF
#include <print.hpp>
#include <fstream>
int main(int args, char** argv)
{std::ofstream file("log.txt"); print(std::string("hello"), file);} EOF
cat > include/print.hpp <<EOF                       ² âœ” 
heredoc> #include <string>
heredoc> #include <iostream>
heredoc> #include <fstream>
heredoc> void print(const std::string& text, std::ostream& out = std::cout);
void print(const std::string& text, std::ofstream& out);
