#ifndef SIAOD2_3_PRODUCT_H
#define SIAOD2_3_PRODUCT_H

#include <istream>
using namespace std;

struct Product {
    int number;
    string name;
    int cost;

    Product(int number, string name, int cost);
};

#endif //SIAOD2_3_PRODUCT_H
