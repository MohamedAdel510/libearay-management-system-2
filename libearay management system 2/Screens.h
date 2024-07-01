#pragma once
#include<thread>
#include<chrono>
#include"Book.h"
#include"Auther.h"
class Screens
{
public:
	static void welcomePage()
	{
		cout << "\t\t\t\t\t****************************************" << endl;
		cout << "\t\t\t\t\t*   WELCOME TO ALEX LIBARAEY SYSTEM    *" << endl;
		cout << "\t\t\t\t\t****************************************" << endl;
		cout << "\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t      Loading ";
		for (int process = 0; process < 3; process++)
		{
			cout << ".";
			this_thread::sleep_for(chrono::milliseconds(1000));  //delay one second
		}
	}
	static void mainManuePage() {
		cout << "\n\n\n\n\n\n\n\n\t\t\t\t\t\t=============================" << endl;
		cout << "\t\t\t\t\t\t\tMain menue" << endl;
		cout << "\t\t\t\t\t\t=============================" << endl;
		cout << "\t\t\t\t\t\t\t[1] Add new book" << endl;
		cout << "\t\t\t\t\t\t\t[2] Remove book" << endl;
		cout << "\t\t\t\t\t\t\t[3] Update book" << endl;
		cout << "\t\t\t\t\t\t\t[4] Borrowing book" << endl;
		cout << "\t\t\t\t\t\t\t[5] Returning book" << endl;
		cout << "\t\t\t\t\t\t\t[6] Displaying book" << endl;
		cout << "\t\t\t\t\t\t\t[7] Searching book" << endl;
		cout << "\t\t\t\t\t\t\t[0] Exit" << endl;
		cout << "\t\t\t\t\t\t=============================" << endl;
		cout << "\t\t\t\t\t\t\tMake choise: ";
	}
	static Book addingBookScreen() {

		string authName, bkTitle, authEmail;
		bool  bkStatus;
		cout << "\n\n\n\n\n\n\n\n\t\t\t\t\t\t=============================" << endl;
		cout << "\t\t\t\t\t\t\tAdd new book" << endl;
		cout << "\t\t\t\t\t\t=============================" << endl;
		cout << "\t\t\t\t\t\t\tBook title: ";
		cin >> bkTitle;
		cout << "\t\t\t\t\t\t\tAuther name: ";
		cin >> authName;
		cout << "\t\t\t\t\t\t\tAuther email: ";
		cin >> authEmail;
		cout << "\t\t\t\t\t\t\tBook status: ";
		cin >> bkStatus;
		cout << "\n\n\n\n\t\t\t\t\t\t=============================" << endl;
		Auther a(authName, authEmail);
		Book b(bkTitle, a, bkStatus);
		return b;
	}
	static int removingBookScreen() {
		int bkID;
		cout << "\n\n\n\n\n\n\n\n\t\t\t\t\t\t=============================" << endl;
		cout << "\t\t\t\t\t\t\tRemoveing book" << endl;
		cout << "\t\t\t\t\t\t=============================" << endl;
		cout << "\t\t\t\t\t\t\tBook ID: ";
		cin >> bkID;
		cout << "\n\n\n\n\n\n\n\t\t\t\t\t\t=============================" << endl;
		return bkID;
	}

	static int returningBookScreen() {
		int bkID;
		cout << "\n\n\n\n\n\n\n\n\t\t\t\t\t\t=============================" << endl;
		cout << "\t\t\t\t\t\t\tReturning book" << endl;
		cout << "\t\t\t\t\t\t=============================" << endl;
		cout << "\t\t\t\t\t\t\tBook ID: ";
		cin >> bkID;
		cout << "\n\n\n\n\n\n\n\t\t\t\t\t\t=============================" << endl;
		return bkID;
	}

	static int borrowingBookScreen() {
		int bkID;
		cout << "\n\n\n\n\n\n\n\n\t\t\t\t\t\t=============================" << endl;
		cout << "\t\t\t\t\t\t\tBorrowing book" << endl;
		cout << "\t\t\t\t\t\t=============================" << endl;
		cout << "\t\t\t\t\t\t\tBook ID: ";
		cin >> bkID;
		cout << "\n\n\n\n\n\n\n\t\t\t\t\t\t=============================" << endl;
		return bkID;
	}

	static void displayingBookScreen() {
		cout << "\n\n\n\n\n\n\n\n\t\t\t\t\t\t=============================" << endl;
		cout << "\t\t\t\t\t\t\tDisplaying books" << endl;
		cout << "\t\t\t\t\t\t=============================" << endl;
	}
	
};

