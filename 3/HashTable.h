#ifndef SIAOD2_3_HASHTABLE_H
#define SIAOD2_3_HASHTABLE_H
#include <string>
#include <vector>
#include <iostream>
#include "Product.h"

class HashTable {
private:
    struct Entry {
        long long key;
        long long product_index;
        bool occupied;

        Entry();
    };

    Entry *table_;
    long long capacity_;
    long long size_;
    double load_factor_;

    long long Hash(const long long &key) const;

    long long QuadraticProbe(long long index, long long attempt) const;

    void rehash();

public:
    std::vector<Product> data_;

    explicit HashTable(long long initial_capacity);

    ~HashTable();

    void insert(int number, const string &name, int cost);

    void remove(int number);

    long long find(int number);

    void display();
};
#endif //SIAOD2_3_HASHTABLE_H
