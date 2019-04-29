#include<iostream>
#include<string>
#include "HashTable.h"

using namespace std;
//destroys hash table
HashTable::~HashTable(){
	for (int i = 0; i < hashT->size(); i++)
		hashT->at(i).~list();//goes to index and destroys the list
}
//inserts word into hash table
void HashTable::insert(string word) {
	int index = hashFunction(word);
	hashT->at(index).push_back(word);//goes to proper index and pushes word
}
//displays each element of hash table
void HashTable::display() {
	for (int i = 0; i < hashT->size(); i++) {//iterates through the vector
		cout <<endl<< "[" << i << "] ";
		for (list<string>::iterator it = hashT->at(i).begin(); it != hashT->at(i).end(); it++)
			cout << *it << ' ';
	}
	cout << endl;
}
//hashing function
int HashTable::hashFunction(string item) {
	int stringVal = 0;

	for (int i = 0; i < 3 && (i+1) != item.size(); i++) //first 3 chars in string or until end
		stringVal += item[i];//adds chars in string		


	return stringVal % tableSize;//determine location by mod(size)
}
