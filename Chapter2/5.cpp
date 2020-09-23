#include <iostream>
using namespace std;

int main () {
    float cel, fer;
    cout<<"Enter temparature in Fahrenheit: ";
    cin>>fer;
    cel = ((fer - 32) * 5) / 9;
    cout<<cel<<'\n';
    return 0;
}
