#include <iostream>
#include <list>
using namespace std;

// HashTable class
class HashTable {
private:
    int size;                // Size of the hash table
    list<int>* table;        // Array of linked lists (chaining)

public:
    // Constructor to initialize hash table
    HashTable(int size) {
        this->size = size;
        table = new list<int>[size];
    }

    // Hash function to map values to key
    int hashFunction(int key) {
        return key % size;
    }

    // Insert an element into the hash table
    void insert(int key) {
        int index = hashFunction(key);
        table[index].push_back(key);
    }

    // Delete an element from the hash table
    void remove(int key) {
        int index = hashFunction(key);
        table[index].remove(key);
    }

    // Display the hash table
    void display() {
        for (int i = 0; i < size; i++) {
            cout << "Index " << i << ":";
            for (auto x : table[i]) {
                cout << " -> " << x;
            }
            cout << endl;
        }
    }

    // Destructor to free memory
    ~HashTable() {
        delete[] table;
    }
};

int main() {
    int hashTableSize = 7;  // Define the size of the hash table
    HashTable ht(hashTableSize);

    // Insert elements into the hash table
    ht.insert(15);
    ht.insert(11);
    ht.insert(27);
    ht.insert(8);
    ht.insert(12);
    ht.insert(33);
    ht.insert(19);

    cout << "Hash Table after insertion:" << endl;
    ht.display();

    // Remove an element
    ht.remove(12);
    cout << "\nHash Table after deletion of 12:" << endl;
    ht.display();

    return 0;
}
