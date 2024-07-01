#include<iostream>
#include<string>
#include"Auther.h"
#include"Book.h"
#include"Library.h"
#include"Screens.h"
using namespace std;

int Book::idHelper = 0;
int Library::bookCount = 0;


int main()
{	
	Library l("Alex");
	int ch, opt = 0;
	Screens::welcomePage();
	system("cls");    
	while (true)
	{
		Screens::mainManuePage();
		cin >> ch;
		switch (ch)
		{
		case 0: exit(0);
			break;
		case 1: {
			system("cls");
			l.addBook(Screens::addingBookScreen());
		}
			break;
		case 2: {
			system("cls");
			l.removeBook(Screens::removingBookScreen());
		}
			break;
		case 3: {
			int bkID;
			string bktitle;
			bool bkStatus;
			string  authName, authEmail;
			cout << "\n\n\n\n\n\n\n\n\t\t\t\t\t\t=============================" << endl;
			cout << "\t\t\t\t\t\t\tUpdating Book" << endl;
			cout << "\t\t\t\t\t\t=============================" << endl;
			cout << "\t\t\t\t\t\t\tBook ID: ";
			cin >> bkID;
			cout << "\n\n\n\n\n\n\n\t\t\t\t\t\t=============================" << endl;
			if (l.searchBook(bkID) != nullptr) {
				cout << "\t\t\t\t\t\t\tBook title: ";
				cin >> bktitle;
				cout << "\t\t\t\t\t\t\tAuther name: ";
				cin >> authName;
				cout << "\t\t\t\t\t\t\tAuther email: ";
				cin >> authEmail;
				cout << "\t\t\t\t\t\t\tBook status: ";
				cin >> bkStatus;
				Auther a(authName, authEmail);
				Book b(bktitle, a, bkStatus);
				l.updateBook(&b);
			}
			else
				cout << "\t\t\t\t\t\tBook dose't exist" << endl;
		}
			break;
		case 4: 
			system("cls");
			l.borrowingBook(Screens::borrowingBookScreen());
			break;
		case 5: 
			system("cls");
			l.returningBook(Screens::removingBookScreen());
			break;
		case 6: {
			system("cls");
			Screens::displayingBookScreen();	
			l.displayingBooks();
		}
			break;
		case 7: {
			int bkId;
			cout << "\n\n\n\n\n\n\n\n\t\t\t\t\t\t=============================" << endl;
			cout << "\t\t\t\t\t\t\Searching book" << endl;
			cout << "\t\t\t\t\t\t=============================" << endl;
			cout << "\t\t\t\t\t\t\tBook ID: ";
			cin >> bkId;
			Book* b = l.searchBook(bkId);
			if (b != nullptr) {
				cout << "\t\t\t\t\t\tFounded\n" << endl;
				b->dispaly();
				cout << "\t\t\t\t\t\t=============================" << endl;
			}
			else {
				cout << "\n\n\n\n\n\n\n\t\t\t\t\t\t=============================" << endl;
				cout << "\t\t\t\t\t\tBook dose't exist" << endl;
			}
				
		}
			break;
		default:
			break;
		}

		do {
			cout << "\n\n\n\t\t\t\t\t\t\t\t\t[1] Main Menu\t\t[0] Exit\n";
			cout << "\n\t\t\t\t\t\t\t\t\t\t..::Enter the Choice: ";
			cin >> opt;
			switch (opt)
			{
			case 0:exit(0);
				break;
			case 1:
				system("cls");
				continue;
				break;
			default:
				cout << "\n\t\t\t\t\t\t\t\t\t\tInvalid chois!" << endl;
				break;
			}

		} while (opt < 0 || opt > 1);
	}
}