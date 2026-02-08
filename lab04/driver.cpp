// TO DO: Implement the driver main() function to test your code.
// Krystle Dao Week 3 Wed Lab

#include <iostream>
#include <string>
#include "LinkedList.hpp"
#include "List.hpp"

using namespace std;

int main() {

    LinkedList<int> intList;

    cout << "Is list empty? " << intList.isEmpty() << endl;

    cout << "Length: " << intList.getLength() << endl;

    intList.append(12);

    cout << intList << endl;

    intList.append(95);

    intList.append(108);

    cout << intList << endl;

    cout << intList.getElement(0) << endl;

    cout << intList.getElement(1) << endl;

    cout << intList.getElement(2) << endl;

    cout << "Is list empty? " << intList.isEmpty() << endl;

    cout << "Length: " << intList.getLength() << endl;

    intList.replace(1, 214);

    cout << intList << endl;

    intList.clear();

    cout << "List is empty: " << intList.isEmpty() << endl;

    cout << "Length: " << intList.getLength() << endl;

    return 0;
}