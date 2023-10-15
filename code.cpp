#include <iostream>
#include <string>
#include<conio.h>
#include<stdlib.h>
using namespace std;

int option1;
int option2;

struct Book
{
	int ID = -1; 
	string BookName;
	string Author;
	string ISBN;
	int price;
	int pages;
	int IssuedBy;
	string IssuedOn="-1";
	string ReturnDate="-1";
	void PrintAll()
	{
		cout << "\n Book ID" << ID;
		cout << "\n Book Name:" << BookName;
		cout << "\n Author:" << Author;
		cout << "\n ISBN:" << ISBN;
		cout << "\n price:" << price;
		cout << "\n pages:" << pages;
		cout << "\n Issued By:" << IssuedBy;
		cout << "\n Issued On:" << IssuedOn;
		cout << "\n Return Date:" << ReturnDate;
		
	}
};
 
struct BookList
{
	
	Book books[10],empty,temp;

	
	void PrintSome()
	{
		int index;
		cout << "Enter the index of student to display the details";
		cin >> index;
		books[index].PrintAll();

	}
	void PrintAll()
	{
		for (int i = 0; i < 10; i++)
		{
			if (books[i].ID == -1)
			{
				continue;
			}
			books[i].PrintAll();
			cout << endl<<endl;
		}
	}
	void Add()
	{
		cout << "Please enter the index of array where the book will be added. [0-9] \n";
		int  index;
		int flag = -1;
		while (flag==-1)
		{
			cin >> index;
			cout << endl;
			if (books[index].ID==empty.ID)
			{
				flag = 1;
				break;
			}
			cout << "The location is occupied. Please enter the new index\n";
		}
		
		cin.clear();
		cout << "\nBook ID:";
		cin >> books[index].ID;
		cin.ignore(numeric_limits <streamsize> ::max(), '\n');
		cout << "\nBook Name:";
		getline(cin, books[index].BookName);
		cout << "\nAuthor:";
		getline(cin, books[index].Author);
		cout << "\nISBN:";
		getline(cin, books[index].ISBN);
		cout << "\nPrice:";
		cin >> books[index].price;
		cout << "\npages:";
		cin >> books[index].pages;
		cout << "\nIssued By:";
		/*cin >> books[index].IssuedBy;
		cin.ignore(numeric_limits <streamsize> ::max(), '\n');
		cout << "\nIssued On:";
		getline(cin, books[index].IssuedOn);
		cout << "\nReturn Date:";
		getline(cin, books[index].ReturnDate);
		*/
	}
	void Sorta()
	{
		
		for (int i = 0; i < 10; i++) {
			for (int j = i + 1; j < 10; j++)
			{
				if (books[i].ID > books[j].ID) {
					temp = books[i];
					books[i] = books[j];
					books[j] = temp;
				}
			}
		}
	}

	void Sortd()
	{

		for (int i = 0; i < 10; i++) {
			for (int j = i + 1; j < 10; j++)
			{
				if (books[i].ID < books[j].ID) {
					temp = books[i];
					books[i] = books[j];
					books[j] = temp;
				}
			}
		}
	}
	void DeleteAll()
	{
		for (int i = 0; i < 9; i++)
		{
			books[i]=empty;
			
		}
	}
	void Delete()
	{
		int identity;
		cout << "please enter the student ID to be deleted";
		cin >> identity;
		for (int i = 0; i < 9; i++)
		{
			if (books[i].ID == identity)
			{
				books[i] = empty;
				break;
			}

		}
	}
}bklist;

struct Student
{
	int ID=-1;
	string StdName;
	int RollNo;
	int BooksIssued;  
	void PrintAll()
	{
		cout << "\nID:" << ID;
		cout << "\nStudent Name:" << StdName;
		cout << "\nRoll No.:" << RollNo;
		cout << "\nBooksIssued:" << BooksIssued;

	}

};
struct StudentList
{
	 Student stds[10],emptyy;

	void PrintAll()
	{
		for (int i = 0; i < 10; i++)
		{
			
			if (stds[i].ID==-1)
			{
				continue;
			}
			stds[i].PrintAll();
			cout << endl<<endl;
			
		}
	}
	void PrintSome()
	{
		int index;
		cout << "Enter the index of student to display the details";
		cin >> index;
		stds[index].PrintAll();
		
	}
	void Add()
	{
		cout << "Please enter the index of array where the student will be added.[0-9] \n";
		int index;
		int flag = -1;
		while (flag == -1)
		{
			cin >> index;
			if (stds[index].ID == emptyy.ID)
			{
				flag = 1;
				break;
			}
			cout << "The location is occupied. Please enter the new index";
		}

		cin.clear();
		cout << "\Student ID:";
		cin >> stds[index].ID;
		cin.ignore(numeric_limits <streamsize> ::max(), '\n');
		cout << "\nStudent Name:";
		getline(cin, stds[index].StdName);
		cout << "\nStudent RollNo:";
		cin >> stds[index].RollNo;
		cout << "\nBooks Issued:";
		cin >> stds[index].BooksIssued;
	
	}
	void Delete()
	{
		int identity;
		cout << "please enter the student ID to be deleted";
		cin >> identity;
		for (int i = 0; i < 10; i++)
		{
			if (stds[i].ID == identity)
			{
				stds[i] = emptyy;
				break;
			}

		}
	}

}stdlist;

struct Library
{
	
	void Issued()
	{
		
		int BookID, StdID;
		cout << "Which book do you want to issue. Enter the BookID\n";
		for (int i = 0; i < 10; i++)
		{
			if (bklist.books[i].ID != -1)
			{
				cout << bklist.books[i].ID << endl;
			}
			
		}
		cin >> BookID;
		cout << "Enter the student ID to which the book is issued\n";
		for (int i = 0; i < 10; i++)
		{
			if (stdlist.stds[i].ID!=-1)
			{
				cout << stdlist.stds[i].ID << endl;
			}
			
		}
		cin >> StdID;
		int i;
		for (i = 0; i < 10; i++)
		{
			if (bklist.books[i].ID == BookID)
			{
				bklist.books[i].IssuedBy = StdID;
				cout << "\nEnter the date when the book is Issued(ddmmyyyy)";
				cin >> bklist.books[i].IssuedOn;
				cout << "\nEnter the return data(ddmmyyyy)";
				cin >> bklist.books[i].ReturnDate;
				break;
			}

		}

		int j;
		for (j = 0; j < 10; j++)
		{
			if (stdlist.stds[j].ID == StdID)
			{
				stdlist.stds[j].BooksIssued++;
				break;
			}
		}

		cout << "\nDetails:";
		cout << "\nIssued Book Name:" << bklist.books[i].BookName;
		cout << "\nIssued Book ID:" << bklist.books[i].ID;
		cout << "\nDate when Book is issued:" << bklist.books[i].IssuedOn;
		cout << "\nDate when book will be returned:" << bklist.books[i].ReturnDate;
		cout << "\nName of student who issued the book:" << stdlist.stds[j].StdName;
		cout << "\nID of student who issued the book:" << stdlist.stds[j].ID;
		cout << "\n"<<stdlist.stds[j].StdName << " now have " << stdlist.stds[j].BooksIssued << " Books";

	}

	void Returnn()
	{
		int BookID, StdID;
		cout << "Which book do you want to return. Enter the BookID\n";
		PBookI();
		cin >> BookID;
		cout << "Enter the student ID from which the book is returned\n";
		for (int i = 0; i < 10; i++)
		{
			if (stdlist.stds[i].ID != -1)
			{
				cout << stdlist.stds[i].ID << endl;
			}

		}
		cin >> StdID;
		int i;
		for (i = 0; i < 10; i++)
		{
			if (bklist.books[i].ID == BookID)
			{
				if (bklist.books[i].IssuedOn != "-1")
				{
					bklist.books[i].IssuedOn = "-1";
					bklist.books[i].ReturnDate = "-1";
					break;
				}

			}
			
		}


		int j;
		for (j = 0; j < 10; j++)
		{
			if (stdlist.stds[j].ID == StdID)
			{
				stdlist.stds[j].BooksIssued--;
				break;
			}
		}
		cout << "\n Details:";
		cout << "\nReturned Book Name:" << bklist.books[i].BookName;
		cout << "\nReturned Book ID:" << bklist.books[i].ID;
		cout << "\nName of student who returned the book:" << stdlist.stds[j].StdName;
		cout << "\nID of student who returned the book:" << stdlist.stds[j].ID;
		cout << "\n" << stdlist.stds[j].StdName << " now have " << stdlist.stds[j].BooksIssued << " Books";

	}

	void PBookI()
	{
		cout << "Books that have been issued";    
		for (int i = 0; i < 10; i++)
		{
			if (bklist.books[i].IssuedOn != "-1")
			{
				bklist.books[i].BookName;
				cout << endl;
			}
		}
	
	}
}Lib;
void SubMenu()
{
	switch (option1)
	{
	case 1:
		cout << "\t\t\tStudent Sub-Menu\n";
		cout << " 1.Add new student\n";
		cout << " 2.Delete Existing Student\n";
		cout << " 3.Show all students\n";
		break;
	case 2:
		cout << "\t\t\tBook Sub-Menu\n";
		cout << " 1.Add new Book\n";
		cout << " 2.Delete Existing Book\n";
		cout << " 3.Show Particular Book\n";
		cout << " 4.Show all Books\n";
		cout << " 5.Sort Books in Ascending order\n";
		cout << " 6.Sort Books in Descending order\n";
		break;
	case 3:
		cout << "\t\t\tLibrary Sub-Menu\n";
		cout << " 1.Issue a book\n";
		cout << " 2.Return a book\n";
		cout << " 3.Print which books have been issued.\n";
		break;
	case 4:
		exit(1);
	default:
		cout << "Invalid Number. Try again";
		break;
	}
	cin >> option2;
}
void MainMenu()
{
	cout << "\t\t\tMain Menu\n";
	cout << " 1.Student\n";
	cout << " 2.Book\n";
	cout << " 3.Library\n";
	cout << " 4.Exit\n";
	cin >> option1;
	system("CLS");
	SubMenu();
}

int main()
{


	MainMenu();
	while (option1!=4)
	{
		if (option1 == 1)
		{
			if (option2 == 1)
			{
				stdlist.Add();
				MainMenu();
			}
			else if (option2 == 2)
			{
				stdlist.Delete();
				MainMenu();
			}
			else if (option2 == 3)
			{
				stdlist.PrintAll();
				MainMenu();
			}

		}
		else if (option1 == 2)
		{
			if (option2 == 1)
			{
				bklist.Add();
				MainMenu();
			}
			else if (option2 == 2)
			{
				bklist.Delete();
				MainMenu();
			}
			else if (option2 == 3)
			{
				bklist.PrintSome();
				MainMenu();
			}
			else if (option2 == 4)
			{
				bklist.PrintAll();
				MainMenu();
			}
			else if (option2 == 5)
			{
				bklist.Sorta();
				MainMenu();
			}
			else if (option2 == 6)
			{
				bklist.Sortd();
				MainMenu();
			}
		}
		else if (option1 == 3)
		{

			if (option2 == 1)
			{
				Lib.Issued();
				MainMenu();
			}
			else if (option2 == 2)
			{
				Lib.Returnn();
				MainMenu();
			}
			else if (option2 == 3)
			{
				Lib.PBookI();
				MainMenu();
			}
		}

		
	}

}