#pragma once
#include"Book.h"
#include<list>
class Library
{
	string name;
	list<Book> books;
	static int bookCount;
public:
	Library() {

	}
	Library(string name) {
		this->name = name;
	}

	void setName(string name) {
		this->name = name;
	}

	void addBook(Book b) {
		books.push_back(b);
		this->bookCount++;
		cout << "\t\t\t\t\t\tBook added successfuly" << endl;
	}
	
	void removeBook(int id) {
		list<Book>::iterator it;
		for (it = books.begin(); it != books.end(); ++it) {
			if (it->getBookId() == id) {
				books.erase(it);
				this->bookCount--;
				cout << "\t\t\t\t\t\tBook removed successfuly" << endl;
				return;
			}
		}
		cout << "\t\t\t\t\t\tBook dose't exist" << endl;
	}
	
	void borrowingBook(int id) {
		list<Book>::iterator it;
		for (it = books.begin(); it != books.end(); ++it) {
			if (it->getBookId() == id) {
				if (it->getBookStatus()) {
					it->setStatus(false);
					cout << "\t\t\t\t\t\tBorrowed successfuly" << endl;
					return;
				}
				else {
					
					cout << "\t\t\t\t\t\tBook is not available" << endl;
					return;
				}
			}
		}
		cout << "\t\t\t\t\t\tBook dose't exist" << endl;
	}
	
	void returningBook(int id){
		list<Book>::iterator it;
		for (it = books.begin(); it != books.end(); ++it) {
			if (it->getBookId() == id) {
				if (it->getBookStatus()){
					it->setStatus(true);
					cout << "\t\t\t\t\t\tBook returned successfully" << endl;
					return;
				}
			}
		}
		cout << "\t\t\t\t\t\tBook dose't exist" << endl;
	}
	
	void displayingBooks() {
		list<Book>::iterator it;
		for (it = books.begin(); it != books.end(); ++it) {
			it->dispaly();
			cout << "\t\t\t\t\t\t----------------------" << endl;
		}
		cout << "\t\t\t\t\t\t=============================" << endl;
	}
	
	Book* searchBook(int id) {
		list<Book>::iterator it;
		for (it = books.begin(); it != books.end(); ++it) {
			if (it->getBookId() == id) {
				return &(*it);
			}
		}
		return nullptr;
	}
	
	void updateBook(Book* b) {
		searchBook(b->getBookId())->setAuther(b->getAuther());
		searchBook(b->getBookId())->setStatus(b->getBookStatus());
		searchBook(b->getBookId())->setTitle(b->getBookTitle());
		cout << "\t\t\t\t\t\tBook updated successfully" << endl;
	}
};

