#include <iostream>
#include "HashTable.h"
#include <string>
using namespace std;

int main() {
	HashTable t(11);//hashtable of size 11
	string word;

	for (int i = 0; word != "BETWEEN"; i++) {
		cout << "Enter a string: ";
		cin >> word;
		t.insert(word);
		cout << endl;
	}
	cout << "The finished hash table is ";
	t.display();

	cout << "Deleting table " << endl;
	t.~HashTable();
}