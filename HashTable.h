#pragma once
#include<string>
#include <list>
#include <vector>
using namespace std;
class HashTable {
public:
	//creates a new HashTable object with size specified. size must be positive
	HashTable(int size) {
		tableSize = size;
		hashT = new vector<list<string> >(size);

	}
	~HashTable();
	/************************************************************************
	Pre: a hashTable object
	Post: an empty hashtable object
	Process: iterates through vector and destroys list at each index
	************************************************************************/
	void insert(string word);
	/************************************************************************
	Pre: word is a string
	Post: word inserted at proper index
	Process: through hashing function word is placed at proper index
	************************************************************************/
	void display();	
	/************************************************************************
	Pre: a non-empty hash table
	Post: display of all variables of the hash table
	Process: iterates the vector and iterates the list at each index of 
	the array, displaying each variable
	************************************************************************/
	int hashFunction(string item);	
	/************************************************************************
	Pre: item is a non-empty string
	Post: gives proper index based off hash equation
	Process: add first 3 characters and % size to get result
	************************************************************************/
	
private:
	int tableSize;
	vector<list<string> > *hashT;

};