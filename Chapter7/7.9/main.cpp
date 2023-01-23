#include <iostream>
#include <string>
using namespace std;

class Person {
private:
    string name;
    string address;
public:
    string getName() const {return name;}
    string getAddress() const {return address;}
};

istream& read(istream &is, Person& p) {
    is >> p.name >> p.Address;
    return is;
}

ostream& print(ostream &os, const Person& p) {
    os << p.getName() << p.getAddress();
    return os;
}