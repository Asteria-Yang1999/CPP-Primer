#include <iostream>
#include <string>
using namespace std;

class Sales_data {
friend Sales_data add(const Sales_data &lhs, const Sales_data &rhs);
friend istream &read(istream &is, Sales_data &item);
friend ostream &print(ostream &os, Sales_data &item);
private:
    string bookNo;
    unsigned units_sold = 0;
    double sellingprice = 0.0;
    double saleprice = 0.0;
    double discount = 0.0;
public:
    string isbn() const {return bookNo;}
    Sales_data& combine(const Sales_data &rhs) {
        units_sold += rhs.units_sold;
        saleprice = (rhs.saleprice * rhs.units_sold + saleprice * units_sold) / (rhs.units_sold + units_sold);
        if (sellingprice != 0) discount = saleprice / sellingprice;
        return *this;
    }

};