#include <iostream>

int main () {
    float a, b, c;
    std::cout<<"Enter three numbers: \n";
    std::cin>>a>>b>>c;
    // Using '\n' instead of endl saves time. Because unlike endl '\n' does not require a streamFLUSH.
    std::cout<<int((a / b)-(c))<<'\n';
    return 0;
}
