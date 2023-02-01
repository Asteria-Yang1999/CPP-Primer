#include <iostream>
#include <string>
using namespace std;

class Person {
private:
    string name;
    string address;
public:
    Person() = default;
    Person(const string &name, const string &add) : name(name), address(address){}
    Person(istream &is) {is >> *this;}
public:
    string getName() const {return name;}
    string getAddress() const {return address;}
};