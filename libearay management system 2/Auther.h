#pragma once
#include<iostream>
#include <string>
using namespace std;
class Auther
{
	string name;
	string email;
public:
	Auther() {

	}
	Auther(string name, string email) {
		this->name = name;
		this->email = email;
	}
	
	void setName(string name) {
		this->name = name;
	}
	void setEmail(string email) {
		this->email = email;
	}

	string getName() {
		return this->name;
	}
	string getEmail() {
		return this->email;
	}
	void disblay() {
		cout << "\t\t\t\t\t\tAuther name: " << getName() << endl;
		cout << "\t\t\t\t\t\tAuther email: " << getEmail() << endl;
	}
};

