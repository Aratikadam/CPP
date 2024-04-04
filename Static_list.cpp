#include <iostream>
using namespace std;

const int MAX_SIZE = 100;

class StaticList {
private:
    int data[MAX_SIZE];
    int size;

public:
    
    StaticList() {
        size = 0;
    }

    void addElement(int element) {
        if (size < MAX_SIZE) {
            data[size] = element;
            size++;
        } else {
            cout << "List is full. Cannot add more elements.\n";
        }
    }

    void displayList() const {
        cout << "Elements of the list: ";
        for (int i = 0; i < size; i++) {
            cout << data[i] << " ";
        }
        cout << endl;
    }
};

int main() {
    StaticList myList;

    myList.addElement(10);
    myList.addElement(20);
    myList.addElement(30);

    myList.displayList();

    return 0;
}
