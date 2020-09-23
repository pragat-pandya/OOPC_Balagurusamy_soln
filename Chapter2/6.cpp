#include <iostream>
using namespace std;

class temp {
    float fer;
    public:
        void get_temp(void);
        void to_cel(void);
};

void temp::to_cel (void) {
    cout<<((this->fer - 32) * 5) / 9<<'\n';
}

void temp::get_temp (void) {
    cout<<"Enter temparature in Fahrenheit: ";
    cin>>this->fer;
}

int main () {
    temp a;
    a.get_temp();
    a.to_cel();
    return 0;
}
