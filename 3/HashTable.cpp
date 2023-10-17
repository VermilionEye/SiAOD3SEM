#include "Product.h"
#include <string>
using namespace std;

Product::Product(int number, string name, int cost) : number(number), name(move(name)), cost(cost) {}
