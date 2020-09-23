#include <iostream>

int main () {
    // Let's assume these two numbers to be integers for simplicity
    int a, b;
    // needs to indicate the scope if we don't include the line "using namespace std;"
    std::cout<<"Please enter two numbers\n";
    std::cin>>a>>b;
    (a > b) ? (std::cout<<a<<'\n') : (std::cout<<b<<'\n');
    return 0;
}
