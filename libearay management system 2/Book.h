#pragma once
#include"Auther.h"
class Book
{
	int id;
	static int idHelper;
	string title;
	bool status;
	Auther writer;
public:
	Book() {
		idHelper++;
		id = idHelper;
		status = true;
	}
	Book(string title, Auther writer, bool status) {
		this->title = title;
		this->writer = writer;
		this->status = status;
		idHelper++;
		id = idHelper;
	}

	//Setters
	void setTitle(string title) {
		this->title = title;
	}
	void setAuther(Auther writer) {
		this->writer = writer;
	}
	void setStatus(bool status) {
		this->status = status;
	}

	//Getters
	int getBookId() {
		return this->id;
	}

	string getBookTitle() {
		return this->title;
	}

	Auther getAuther() {
		return this->writer;
	}
	bool getBookStatus() {
		return this->status;
	}

	void dispaly() {
		cout << "\t\t\t\t\t\tBook ID: " << getBookId() << endl;
		cout << "\t\t\t\t\t\tBook title: " << getBookTitle() << endl;
		cout << "\t\t\t\t\t\tBook status: " << getBookStatus() << endl;
		cout << "\t\t\t\t\t\tAuther name: " << this->writer.getName() << endl;
		cout << "\t\t\t\t\t\tAuther email: " << this->writer.getEmail() << endl;
	}
};

