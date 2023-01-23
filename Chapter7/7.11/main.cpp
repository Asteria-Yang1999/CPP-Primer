#include <iostream>
#include <string>

using namespace std;

class Sales_data {
public:
    Sales_data() = default;
    Sales_data(const string &book) : bookNo(book) {}
    Sales_data(const string &book, const unsigned num, const double sellp, const double salep);
    Sales_data(istream& is){is >> *this;}

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