// TO DO: Implement the driver main() function to test your code.
// Krystle Dao Week 3 Wed Lab

#include <iostream>
#include "LinkedList.hpp"

using namespace std;

int main() {

    LinkedList<double> intList;

    cout << "Is list empty? " << intList.isEmpty() << endl;

    cout << "Length: " << intList.getLength() << endl;

    intList.append(1.02);

    cout << intList << endl;

    intList.append(15.15);

    intList.append(327.26);

    cout << intList << endl;

    cout << intList.getElement(0) << endl;

    cout << intList.getElement(1) << endl;

    cout << intList.getElement(2) << endl;

    cout << "Is list empty? " << intList.isEmpty() << endl;

    cout << "Length: " << intList.getLength() << endl;

    intList.replace(1, 126.593);

    cout << intList << endl;

    intList.clear();

    cout << "List is empty: " << intList.isEmpty() << endl;

    cout << "Length: " << intList.getLength() << endl;

    return 0;
}