#include <iostream>
#include <Windows.h>
#include "HashTable.h"

using namespace std;

int main() {
    SetConsoleCP(CP_UTF8);
    SetConsoleOutputCP(CP_UTF8);
    HashTable hash_table(10);

    hash_table.insert(880055, "Product 1", 700);
    hash_table.insert(234563, "Product 2", 111);
    hash_table.insert(732939, "Product 3", 2323);
    hash_table.insert(696969, "Product 4", 435); 
    hash_table.insert(148800, "Product 5", 4343);

    while (true) {
        cout << "Choose action:\n"
                     "1 - Insert product\n"
                     "2 - Delete product\n"
                     "3 - Find product\n"
                     "4 - Display products\n"
                     "5 - Exit\n";
        int choice;
        cin >> choice;
        switch (choice) {
            case 1: {
                int number;
                string name;
                int cost;
                cout << "Input product number, name and cost:\n";
                cin >> number >> name >> cost;
                hash_table.insert(number, name, cost);
                break;
            }
            case 2: {
                int number;
                cout << "Input product number to remove:\n";
                cin >> number;
                hash_table.remove(number);
                break;
            }
            case 3: {
                int number;
                cout << "Input product number to find:\n";
                cin >> number;
                int product_index = hash_table.find(number);
                if (product_index != -1) {
                    cout << "Product found: " << "number: " << hash_table.data_[product_index].number
                              << ", cost: " << hash_table.data_[product_index].cost
                              << ", name: " << hash_table.data_[product_index].name
                              << "\n";
                } else {
                    cout << "Product not found\n";
                }
                break;
            }
            case 4:
                hash_table.display();
                break;
            case 5:
                return 0;
            default:
                cout << "Incorrect choose. Try again.\n";
                break;
        }
    }
    return 0;
}
