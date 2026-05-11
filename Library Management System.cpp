#include<iostream>
using namespace std;
int main() {
	int choice;
	int choice1;
	int subchoice = 0;
	int choice2;
	int choice3;
	int choice0;
	int student_id = 0;
	int student_id1;
	string name_of_book;
	int result;
	int ID_1 = 10;
	int ID_2 = 29;
	int ID_3 = 06;
	const int books = 0;
	string name[5];
	int quantity[5];
	string category[5];
	int stock = books;
	string zia = " ";
	string r;
	cout << "\n\n\t\t\t\t\t\t Welcome to GZM Library!\n\n" << endl;
	//cin >> zia;
	cout << "Select the option" << endl;
choice:
	cout << "\n1.Admin\n2.Students\n3.Exit\n" << endl;
	cin >> choice0;
	switch (choice0)
	{
	case 1:
		cout << "1- Add a new books(Only for librarian)\n";

	case 4:
		cout << "Enter your ID here" << endl;
		cin >> result;
		if (result == ID_1 || result == ID_2 || result == ID_3) {
		choice4:
			cout << "1- Add a book in one of given category\n2- Create a new category and add a book in that category\n3- Back\n4- Exit" << endl;
			cin >> choice3;

			if (choice3 == 3) {
				goto choice;
			}
			else if (choice3 == 4) {
				goto choice3;
			}
			switch (choice3) {
			case 1:
				cout << "1- Text book\n2- Romantic\n3- Horror\n4- Crimes\n5- Mystery\n6- Science Fiction\n7- Poetry\n8- Comics\n9- Historical\n10- Biography\n11- Back\n12- Exit\n" << endl;
				cout << "In which category do you want to add a book" << endl;
				cin >> choice;
				cout << "\nEnter the name of the book\n" << endl;
				cin >> category[books];
				if (choice == 1)
				{
					/*for (int i = 0; i < 1; i++)
					{
						cout << "Enter name of a book: ";
						cin >> name[i];
						cout << name[i]<<endl;
					}*/
				}
				if (choice == 11) {
					goto choice4;
				}
				else if (choice == 12) {
					goto choice3;
				}
				else if (choice > 12) {
					cout << "This option is not from above mentioned" << endl;
				}
				cout << "Book added Successfully" << endl;
				goto choice;
				cout << "1- Text book\n2- Romantic\n3- Horror\n4- Crimes\n5- Mystery\n6- Science Fiction\n7- Poetry\n8- Comics\n9- Historical\n10- Biography\n11- Back\n12- Exit\n" << endl;
				cout << category[books];
				break;
			case 2:
				cout << "Enter the Category you want to add" << endl;
				cin >> category[books];
				cout << "Category added successfully" << endl;
			}
		}
		else
			cout << "You are not a Librarian and Students are not allowed to add any new book" << endl;
		goto choice;
		break;
		break;
	case 2:
		cout << "\n1- Want to read a book here\n2- Want to borrow a book\n3- Want to return a book\n4- Rules And Regulations\n5- Exit\n" << endl;
		cin >> choice;
		while (choice <= 4) {
			switch (choice) {
			case 1:
				cout << "\nSelect the type of book you want to read here\n" << endl;
			choice1:
				cout << "1- Text book\n2- Romantic\n3- Horror\n4- Crimes\n5- Mystery\n6- Science Fiction\n7- Poetry\n8- Comics\n9- Historical\n10- Biography\n11- Back\n12- Exit\n" << endl;
				cin >> choice1;
				if (choice1 == 12) {
					goto choice3;
				}
				else if (choice1 == 11) {
					goto choice;
				}
				else if (choice1 > 12) {
					cout << "\nPlease select the correct option\n" << endl;
					goto choice1;
				}
				switch (choice1) {
				case 1:
					cout << "1- Chemistry\n2- Physics\n3- Maths\n4- English\n5- Urdu\n6- Islamiyat\n7- Computer" << endl;
					cin >> subchoice;
					switch (subchoice) {
					case 1:
						cout << "You have Selected Chemistry to read here" << endl;
						goto choice;
						break;
					case 2:
						cout << "You have Selected Physics to read here" << endl;
						goto choice;
						break;
					case 3:
						cout << "You have Selected Maths to read here" << endl;
						goto choice;
						break;
					case 4:
						cout << "You have Selected English to read here" << endl;
						goto choice;
						break;
					case 5:
						cout << "You have Selected Urdu to read here" << endl;
						goto choice;
						break;
					case 6:
						cout << "You have Selected Islamiyat to read here" << endl;
						goto choice;
						break;
					default:
						cout << "You have Selected Computer to read here" << endl;
						goto choice;
						break;
					}
					break;
				case 2:
					cout << "1- Jannat ke Patty\n2- Peer e Kamil\n3- Aby e Hayat\n4- Namal\n5- Lahasil\n6- Bismil\n7- Ishq e Atish\n8- Amarbail\n9- Rooh e Yaram\n10- Wehshat e junoon\n11- Man raqsam tan raqsam\n12- Yaar Sitamgar\n13- Ishq\n14- Lams e Junoon\n15- Ramz e Ishq" << endl;
					cin >> subchoice;
					switch (subchoice) {
					case 1:
						cout << "You have Selected Jannat ke Patty to read here" << endl;
						goto choice;
						break;
					case 2:
						cout << "You have Selected Peer e Kamil to read here" << endl;
						goto choice;
						break;
					case 3:
						cout << "You have Selected Aby e Hayat to read here" << endl;
						goto choice;
						break;
					case 4:
						cout << "You have Selected Namal to read here" << endl;
						goto choice;
						break;
					case 5:
						cout << "You have Selected Lahasil to read here" << endl;
						goto choice;
						break;
					case 6:
						cout << "You have Selected Bismil to read here" << endl;
						goto choice;
						break;
					case 7:
						cout << "You have Selected Ishq e Atish to read here" << endl;
						goto choice;
						break;
					case 8:
						cout << "You have Selected Amarbail to read here" << endl;
						goto choice;
						break;
					case 9:
						cout << "You have Selected Rooh e Yaram to read here" << endl;
						goto choice;
						break;
					case 10:
						cout << "You have Selected Wehshat e junoon to read here" << endl;
						goto choice;
						break;
					case 11:
						cout << "You have Selected Man raqsam tan raqsam to read here" << endl;
						goto choice;
						break;
					case 12:
						cout << "You have Selected Yaar Sitamgar to read here" << endl;
						goto choice;
						break;
					case 13:
						cout << "You have Selected Ishq to read here" << endl;
						goto choice;
						break;
					case 14:
						cout << "You have Selected Lams e Junoon to read here" << endl;
						goto choice;
						break;
					default:
						cout << "You have Selected Ramz e Ishq to read here" << endl;
						goto choice;
						break;
					}
					break;
				case 3:
					cout << "1- The Haunting of Hill House\n2- Dracula\n3- The Exorcist\n4- The Devil Takes You Home\n5- The Terror\n6- IT\n7- The Hunger\n8- Beloved" << endl;
					cin >> subchoice;
					switch (subchoice) {
					case 1:
						cout << "You have Selected The Haunting of Hill to read here" << endl;
						goto choice;
						break;
					case 2:
						cout << "You have Selected Dracula to read here" << endl;
						goto choice;
						break;
					case 3:
						cout << "You have Selected The Exorcist to read here" << endl;
						goto choice;
						break;
					case 4:
						cout << "You have Selected The Devil Takes You Home to read here" << endl;
						goto choice;
						break;
					case 5:
						cout << "You have Selected The Terror to read here" << endl;
						goto choice;
						break;
					case 6:
						cout << "You have Selected IT to read here" << endl;
						goto choice;
						break;
					case 7:
						cout << "You have Selected The Hunger to read here" << endl;
						goto choice;
						break;
					default:
						cout << "You have Selected Beloved to read here" << endl;
						goto choice;
						break;
					}
					break;
				case 4:
					cout << "1- The Women in White\n2- Field Of Blood\n3- A Man Lay Dead\n4- A Study in Scarlet\n5- Gone Girl\n6- The Silent Patient\n7- A Kiss Before Death\n8- The Women in Library\n9- We Solve Murders\n10- Angels and demons" << endl;
					cin >> subchoice;
					switch (subchoice) {
					case 1:
						cout << "You have Selected The Women in White to read here" << endl;
						goto choice;
						break;
					case 2:
						cout << "You have Selected Field of Blood to read here" << endl;
						goto choice;
						break;
					case 3:
						cout << "You have Selected A Man Lay Dead to read here" << endl;
						goto choice;
						break;
					case 4:
						cout << "You have Selected A Study in Scarlet to read here" << endl;
						goto choice;
						break;
					case 5:
						cout << "You have Selected Girl Gone to read here" << endl;
						goto choice;
						break;
					case 6:
						cout << "You have Selected The Silent Patient to raed here" << endl;
						goto choice;
						break;
					case 7:
						cout << "You have Selected A Kiss Before Death to read here" << endl;
						goto choice;
						break;
					case 8:
						cout << "You have Selected The Women in Library to read here" << endl;
						goto choice;
						break;
					case 9:
						cout << "You have Selected We Solve Murders to read here" << endl;
						goto choice;
						break;
					default:
						cout << "You have Selected Angels And Demons to read here" << endl;
						goto choice;
						break;
					}
					break;
				case 5:
					cout << "1- Shutter island\n2- The Big SLeep\n3- Like a Sister\n4- Rebecca\n5- In Cold Blood\n6- The Violin Conspiracy" << endl;
					cin >> subchoice;
					switch (subchoice) {
					case 1:
						cout << "You have Selected Shutter island to read here" << endl;
						goto choice;
						break;
					case 2:
						cout << "You have Selected The Big Sleep to read here" << endl;
						goto choice;
						break;
					case 3:
						cout << "You have Selected Like a Sister to read here" << endl;
						goto choice;
						break;
					case 4:
						cout << "You have Selected Rebecca to read here" << endl;
						goto choice;
						break;
					case 5:
						cout << "You have Selected In Cold Blood to read here" << endl;
						goto choice;
						break;
					default:
						cout << "You have Selected The Violin Conspiracy to read here" << endl;
						goto choice;
						break;
					}
					break;
				case 6:
					cout << "1- Harry Porter\n2- Dune\n3- Ender's Game\n4- 1984\n5- A Wrinkle in Time\n6- Hyperion\n7- The Martian\n8- Snow Crash\n9- Brave New World" << endl;
					cin >> subchoice;
					switch (subchoice) {
					case 1:
						cout << "You have Selected Harry Porter to read here" << endl;
						goto choice;
						break;
					case 2:
						cout << "You have Selected Dune to read here" << endl;
						goto choice;
						break;
					case 3:
						cout << "You have Selected Ender's Game to read here" << endl;
						goto choice;
						break;
					case 4:
						cout << "You have Selected 1984 to read here" << endl;
						goto choice;
						break;
					case 5:
						cout << "You have Selected A Wrinkle in Time to read here" << endl;
						goto choice;
						break;
					case 6:
						cout << "You have Selected Hyperion to read here" << endl;
						goto choice;
						break;
					case 7:
						cout << "You have Selected The Martian to read here" << endl;
						goto choice;
						break;
					case 8:
						cout << "You have Selected Snow Crash to read here" << endl;
						goto choice;
						break;
					default:
						cout << "You have Selected Brave New World to read here" << endl;
						goto choice;
						break;
					}
					break;
				case 7:
					cout << "1- Rumi\n2- Leaves of Grass\n3- Paradise Lost\n4- Devotion" << endl;
					cin >> subchoice;
					switch (subchoice) {
					case 1:
						cout << "You have Selected Rumi to read here" << endl;
						goto choice;
						break;
					case 2:
						cout << "You have Selected Leaves of Grass to read here" << endl;
						goto choice;
						break;
					case 3:
						cout << "You have Selected Paradise Lost to read here" << endl;
						goto choice;
						break;
					default:
						cout << "You have Selected Devotion to read here" << endl;
						goto choice;
						break;
					}
					break;
				case 8:
					cout << "1- Watchmen\n2- From Hell\n3- El Eternauta\n4- The Little Mermaid\n5- Under the Moon\n6- The Magic Fish\n7- The Girl from the Sea" << endl;
					cin >> subchoice;
					switch (subchoice) {
					case 1:
						cout << "You have Selected Watchmen to read here" << endl;
						goto choice;
						break;
					case 2:
						cout << "You have Selected From Hell to read here" << endl;
						goto choice;
						break;
					case 3:
						cout << "You have Selected El Eternauta to read here" << endl;
						goto choice;
						break;
					case 4:
						cout << "You have Selected The Little Mermaid to read here" << endl;
						goto choice;
						break;
					case 5:
						cout << "You have Selected Under the Moon to read here" << endl;
						goto choice;
						break;
					case 6:
						cout << "You have Selected The Magic Fish to read here" << endl;
						goto choice;
						break;
					default:
						cout << "You have Selected The Girl from the Sea to read here" << endl;
						goto choice;
						break;
					}
					break;
				case 9:
					cout << "1- The Silk Roads\n2- The Slave Trade\n3- The Guns of August\n4- The Civil War\n5- The Crusades\n6- A World Lit Only by Fire" << endl;
					cin >> subchoice;
					switch (subchoice) {
					case 1:
						cout << "You have Selected The Silk Roads to read here" << endl;
						goto choice;
						break;
					case 2:
						cout << "You have Selected The Slaves Trade to read here" << endl;
						goto choice;
						break;
					case 3:
						cout << "You have Selected The Guns of August to read here" << endl;
						goto choice;
						break;
					case 4:
						cout << "You have Selected The Civil War to read here" << endl;
						goto choice;
						break;
					case 5:
						cout << "You have Selected The Crusades to here" << endl;
						goto choice;
						break;
					default:
						cout << "You have Selected A World Lit only by Fire to read here" << endl;
						goto choice;
						break;
					}
					break;
				default:
					cout << "1- Steve jobs\n2- The Life of Charlotte Bronte\n3- Shoe Dog\n4- Tolkien\n5- The Everything Store\n6- Rose Parks" << endl;
					cin >> subchoice;
					switch (subchoice) {
					case 1:
						cout << "You have Selected Steve Jobs to read here" << endl;
						goto choice;
						break;
					case 2:
						cout << "You have Selected The Life of Charlotte Bronte to read here" << endl;
						goto choice;
						break;
					case 3:
						cout << "You have Selected Shoe Dog to read here" << endl;
						goto choice;
						break;
					case 4:
						cout << "You have Selected Tolkein to read here" << endl;
						goto choice;
						break;
					case 5:
						cout << "You have Selected The Eveerything to Store to read here" << endl;
						goto choice;
						break;
					default:
						cout << "You have Selected Rose Parks to read here" << endl;
						goto choice;
						break;
					}
					break;
				}
				if (choice1 == 12) {
					goto choice3;
				}
				else if (choice1 == 11) {
					goto choice;
				}
				else if (choice1 > 12) {
					cout << "\nPlease select the correct option\n" << endl;
				}
				goto choice1;
				break;
			case 2:
				cout << "\nSelect the type of book you want to borrow\n" << endl;
				cout << "1- Text book\n2- Romantic\n3- Horror\n4- Crimes\n5- Mystery\n6- Science Fiction\n7- Poetry\n8- Comics\n9- Historical\n10- Biography\n11- Back\n12- Exit" << endl;
				cin >> choice1;
				switch (choice1) {
				case 1:
					cout << "Which book you want to borrow" << endl;
					cout << "1- Chemistry\n2- Physics\n3- Maths\n4- English\n5- Urdu\n6- Islamiyat\n7- Computer" << endl;
					cin >> subchoice;
					switch (subchoice) {
					case 1:
						cout << "You have Selected Chemistry to Borrow" << endl;
						cout << "So, Enter your Roll Number to borrow a book" << endl;
						cin >> student_id;
						cout << "Book Borrowed Successfully by roll number" << student_id << endl;
						goto choice;
						break;
					case 2:
						cout << "You have Selected Physics to Borrow" << endl;
						cout << "So, Enter your Roll Number to borrow a book" << endl;
						cin >> student_id;
						cout << "Book Borrowed Successfully by roll number" << student_id << endl;
						goto choice;
						break;
					case 3:
						cout << "You have Selected Maths to Borrow" << endl;
						cout << "So, Enter your Roll Number to borrow a book" << endl;
						cin >> student_id;
						cout << "Book Borrowed Successfully by roll number" << student_id << endl;
						goto choice;
						break;
					case 4:
						cout << "You have Selected English to Borrow" << endl;
						cout << "So, Enter your Roll Number to borrow a book" << endl;
						cin >> student_id;
						cout << "Book Borrowed Successfully by roll number" << student_id << endl;
						goto choice;
						break;
					case 5:
						cout << "You have Selected Urdu to Borrow" << endl;
						cout << "So, Enter your Roll Number to borrow a book" << endl;
						cin >> student_id;
						cout << "Book Borrowed Successfully by roll number" << student_id << endl;
						goto choice;
						break;
					case 6:
						cout << "You have Selected Islamiyat to Borrow" << endl;
						cout << "So, Enter your Roll Number to borrow a book" << endl;
						cin >> student_id;
						cout << "Book Borrowed Successfully by roll number" << student_id << endl;
						goto choice;
						break;
					default:
						cout << "You have Selected Computer to Borrow" << endl;
						cout << "So, Enter your Roll Number to borrow a book" << endl;
						cin >> student_id;
						cout << "Book Borrowed Successfully by roll number" << student_id << endl;
						goto choice;
						break;
					}
					break;
				case 2:
					cout << "Which book you want to borrow" << endl;
					cout << "1- Jannat ke Patty\n2- Peer e Kamil\n3- Aby e Hayat\n4- Namal\n5- Lahasil\n6- Bismil\n7- Ishq e Atish\n8- Amarbail\n9- Rooh e Yaram\n10- Wehshat e junoon\n11- Man raqsam tan raqsam\n12- Yaar Sitamgar\n13- Ishq\n14- Lams e Junoon\n15- Ramz e Ishq" << endl;
					cin >> subchoice;
					switch (subchoice) {
					case 1:
						cout << "You have Selected Jannat ke Patty to Borrow" << endl;
						cout << "So, Enter your Roll Number to borrow a book" << endl;
						cin >> student_id;
						cout << "Book Borrowed Successfully by roll number" << student_id << endl;
						goto choice;
						break;
					case 2:
						cout << "You have Selected Peer e Kamil to Borrow" << endl;
						cout << "So, Enter your Roll Number to borrow a book" << endl;
						cin >> student_id;
						cout << "Book Borrowed Successfully by roll number" << student_id << endl;
						goto choice;
						break;
					case 3:
						cout << "You have Selected Aby e Hayat to Borrow" << endl;
						cout << "So, Enter your Roll Number to borrow a book" << endl;
						cin >> student_id;
						cout << "Book Borrowed Successfully by roll number" << student_id << endl;
						goto choice;
						break;
					case 4:
						cout << "You have Selected Namal to Borrow" << endl;
						cout << "So, Enter your Roll Number to borrow a book" << endl;
						cin >> student_id;
						cout << "Book Borrowed Successfully by roll number" << student_id << endl;
						goto choice;
						break;
					case 5:
						cout << "You have Selected Lahasil to Borrow" << endl;
						cout << "So, Enter your Roll Number to borrow a book" << endl;
						cin >> student_id;
						cout << "Book Borrowed Successfully by roll number" << student_id << endl;
						goto choice;
						break;
					case 6:
						cout << "You have Selected Bismil to Borrow" << endl;
						cout << "So, Enter your Roll Number to borrow a book" << endl;
						cin >> student_id;
						cout << "Book Borrowed Successfully by roll number" << student_id << endl;
						goto choice;
						break;
					case 7:
						cout << "You have Selected Ishq e Atish to Borrow" << endl;
						cout << "So, Enter your Roll Number to borrow a book" << endl;
						cin >> student_id;
						cout << "Book Borrowed Successfully by roll number" << student_id << endl;
						goto choice;
						break;
					case 8:
						cout << "You have Selected Amarbail to Borrow" << endl;
						cout << "So, Enter your Roll Number to borrow a book" << endl;
						cin >> student_id;
						cout << "Book Borrowed Successfully by roll number" << student_id << endl;
						goto choice;
						break;
					case 9:
						cout << "You have Selected Rooh e Yaram to Borrow" << endl;
						cout << "So, Enter your Roll Number to borrow a book" << endl;
						cin >> student_id;
						cout << "Book Borrowed Successfully by roll number" << student_id << endl;
						goto choice;
						break;
					case 10:
						cout << "You have Selected Wehshat e junoon to Borrow" << endl;
						cout << "So, Enter your Roll Number to borrow a book" << endl;
						cin >> student_id;
						cout << "Book Borrowed Successfully by roll number" << student_id << endl;
						goto choice;
						break;
					case 11:
						cout << "You have Selected Man raqsam tan raqsam to Borrow" << endl;
						cout << "So, Enter your Roll Number to borrow a book" << endl;
						cin >> student_id;
						cout << "Book Borrowed Successfully by roll number" << student_id << endl;
						goto choice;
						break;
					case 12:
						cout << "You have Selected Yaar Sitamgar to Borrow" << endl;
						cout << "So, Enter your Roll Number to borrow a book" << endl;
						cin >> student_id;
						cout << "Book Borrowed Successfully by roll number" << student_id << endl;
						goto choice;
						break;
					case 13:
						cout << "You have Selected Ishq to Borrow" << endl;
						cout << "So, Enter your Roll Number to borrow a book" << endl;
						cin >> student_id;
						cout << "Book Borrowed Successfully by roll number" << student_id << endl;
						goto choice;
						break;
					case 14:
						cout << "You have Selected Lams e Junoon to Borrow" << endl;
						cout << "So, Enter your Roll Number to borrow a book" << endl;
						cin >> student_id;
						cout << "Book Borrowed Successfully by roll number" << student_id << endl;
						goto choice;
						break;
					default:
						cout << "You have Selected Ramz e Ishq to Borrow" << endl;
						cout << "So, Enter your Roll Number to borrow a book" << endl;
						cin >> student_id;
						cout << "Book Borrowed Successfully by roll number" << student_id << endl;
						goto choice;
						break;
					}
					break;
				case 3:
					cout << "Which book you want to borrow" << endl;
					cout << "1- The Haunting of Hill House\n2- Dracula\n3- The Exorcist\n4- The Devil Takes You Home\n5- The Terror\n6- IT\n7- The Hunger\n8- Beloved" << endl;
					cin >> subchoice;
					switch (subchoice) {
					case 1:
						cout << "You have Selected The Haunting of Hill to Borrow" << endl;
						cout << "So, Enter your Roll Number to borrow a book" << endl;
						cin >> student_id;
						cout << "Book Borrowed Successfully by roll number" << student_id << endl;
						goto choice;
						break;
					case 2:
						cout << "You have Selected Dracula to Borrow" << endl;
						cout << "So, Enter your Roll Number to borrow a book" << endl;
						cin >> student_id;
						cout << "Book Borrowed Successfully by roll number" << student_id << endl;
						goto choice;
						break;
					case 3:
						cout << "You have Selected The Exorcist to Borrow" << endl;
						cout << "So, Enter your Roll Number to borrow a book" << endl;
						cin >> student_id;
						cout << "Book Borrowed Successfully by roll number" << student_id << endl;
						goto choice;
						break;
					case 4:
						cout << "You have Selected The Devil Takes You Home to Borrow" << endl;
						cout << "So, Enter your Roll Number to borrow a book" << endl;
						cin >> student_id;
						cout << "Book Borrowed Successfully by roll number" << student_id << endl;
						goto choice;
						break;
					case 5:
						cout << "You have Selected The Terror to Borrow" << endl;
						cout << "So, Enter your Roll Number to borrow a book" << endl;
						cin >> student_id;
						cout << "Book Borrowed Successfully by roll number" << student_id << endl;
						goto choice;
						break;
					case 6:
						cout << "You have Selected IT to Borrow" << endl;
						cout << "So, Enter your Roll Number to borrow a book" << endl;
						cin >> student_id;
						cout << "Book Borrowed Successfully by roll number" << student_id << endl;
						goto choice;
						break;
					case 7:
						cout << "You have Selected The Hunger to Borrow" << endl;
						cout << "So, Enter your Roll Number to borrow a book" << endl;
						cin >> student_id;
						cout << "Book Borrowed Successfully by roll number" << student_id << endl;
						goto choice;
						break;
					default:
						cout << "You have Selected Beloved to Borrow" << endl;
						cout << "So, Enter your Roll Number to borrow a book" << endl;
						cin >> student_id;
						cout << "Book Borrowed Successfully by roll number" << student_id << endl;
						goto choice;
						break;
					}
					break;
				case 4:
					cout << "Which book you want to borrow" << endl;
					cout << "1- The Women in White\n2- Field Of Blood\n3- A Man Lay Dead\n4- A Study in Scarlet\n5- Gone Girl\n6- The Silent Patient\n7- A Kiss Before Death\n8- The Women in Library\n9- We Solve Murders\n10- Angels and demons" << endl;
					cin >> subchoice;
					switch (subchoice) {
					case 1:
						cout << "You have Selected The Women in White to Borrow" << endl;
						cout << "So, Enter your Roll Number to borrow a book" << endl;
						cin >> student_id;
						cout << "Book Borrowed Successfully by roll number" << student_id << endl;
						goto choice;
						break;
					case 2:
						cout << "You have Selected Field of Blood to Borrow" << endl;
						cout << "So, Enter your Roll Number to borrow a book" << endl;
						cin >> student_id;
						cout << "Book Borrowed Successfully by roll number" << student_id << endl;
						goto choice;
						break;
					case 3:
						cout << "You have Selected A Man Lay Dead to Borrow" << endl;
						cout << "So, Enter your Roll Number to borrow a book" << endl;
						cin >> student_id;
						cout << "Book Borrowed Successfully by roll number" << student_id << endl;
						goto choice;
						break;
					case 4:
						cout << "You have Selected A Study in Scarlet to Borrow" << endl;
						cout << "So, Enter your Roll Number to borrow a book" << endl;
						cin >> student_id;
						cout << "Book Borrowed Successfully by roll number" << student_id << endl;
						goto choice;
						break;
					case 5:
						cout << "You have Selected Girl Gone to Borrow" << endl;
						cout << "So, Enter your Roll Number to borrow a book" << endl;
						cin >> student_id;
						cout << "Book Borrowed Successfully by roll number" << student_id << endl;
						goto choice;
						break;
					case 6:
						cout << "You have Selected The Silent Patient to Borrow" << endl;
						cout << "So, Enter your Roll Number to borrow a book" << endl;
						cin >> student_id;
						cout << "Book Borrowed Successfully by roll number" << student_id << endl;
						goto choice;
						break;
					case 7:
						cout << "You have Selected A Kiss Before Death to Borrow" << endl;
						cout << "So, Enter your Roll Number to borrow a book" << endl;
						cin >> student_id;
						cout << "Book Borrowed Successfully by roll number" << student_id << endl;
						goto choice;
						break;
					case 8:
						cout << "You have Selected The Women in Library to Borrow" << endl;
						cout << "So, Enter your Roll Number to borrow a book" << endl;
						cin >> student_id;
						cout << "Book Borrowed Successfully by roll number" << student_id << endl;
						goto choice;
						break;
					case 9:
						cout << "You have Selected We Solve Murders to Borrow" << endl;
						cout << "So, Enter your Roll Number to borrow a book" << endl;
						cin >> student_id;
						cout << "Book Borrowed Successfully by roll number" << student_id << endl;
						goto choice;
						break;
					default:
						cout << "You have Selected Angels And Demons to Borrow" << endl;
						cout << "So, Enter your Roll Number to borrow a book" << endl;
						cin >> student_id;
						cout << "Book Borrowed Successfully by roll number" << student_id << endl;
						goto choice;
						break;
					}
					break;
				case 5:
					cout << "Which book you want to borrow" << endl;
					cout << "1- Shutter island\n2- The Big SLeep\n3- Like a Sister\n4- Rebecca\n5- In Cold Blood\n6- The Violin Conspiracy" << endl;
					cin >> subchoice;
					switch (subchoice) {
					case 1:
						cout << "You have Selected Shutter island to Borrow" << endl;
						cout << "So, Enter your Roll Number to borrow a book" << endl;
						cin >> student_id;
						cout << "Book Borrowed Successfully by roll number" << student_id << endl;
						goto choice;
						break;
					case 2:
						cout << "You have Selected The Big Sleep to Borrow" << endl;
						cout << "So, Enter your Roll Number to borrow a book" << endl;
						cin >> student_id;
						cout << "Book Borrowed Successfully by roll number" << student_id << endl;
						goto choice;
						break;
					case 3:
						cout << "You have Selected Like a Sister to Borrow" << endl;
						cout << "So, Enter your Roll Number to borrow a book" << endl;
						cin >> student_id;
						cout << "Book Borrowed Successfully by roll number" << student_id << endl;
						goto choice;
						break;
					case 4:
						cout << "You have Selected Rebecca to Borrow" << endl;
						cout << "So, Enter your Roll Number to borrow a book" << endl;
						cin >> student_id;
						cout << "Book Borrowed Successfully by roll number" << student_id << endl;
						goto choice;
						break;
					case 5:
						cout << "You have Selected In Cold Blood to Borrow" << endl;
						cout << "So, Enter your Roll Number to borrow a book" << endl;
						cin >> student_id;
						cout << "Book Borrowed Successfully by roll number" << student_id << endl;
						goto choice;
						break;
					default:
						cout << "You have Selected The Violin Conspiracy to Borrow" << endl;
						cout << "So, Enter your Roll Number to borrow a book" << endl;
						cin >> student_id;
						cout << "Book Borrowed Successfully by roll number" << student_id << endl;
						goto choice;
						break;
					}
					break;
				case 6:
					cout << "Which book you want to borrow" << endl;
					cout << "1- Harry Porter\n2- Dune\n3- Ender's Game\n4- 1984\n5- A Wrinkle in Time\n6- Hyperion\n7- The Martian\n8- Snow Crash\n9- Brave New World" << endl;
					cin >> subchoice;
					switch (subchoice) {
					case 1:
						cout << "You have Selected Harry Porter to Borrow" << endl;
						cout << "So, Enter your Roll Number to borrow a book" << endl;
						cin >> student_id;
						cout << "Book Borrowed Successfully by roll number" << student_id << endl;
						goto choice;
						break;
					case 2:
						cout << "You have Selected Dune to Borrow" << endl;
						cout << "So, Enter your Roll Number to borrow a book" << endl;
						cin >> student_id;
						cout << "Book Borrowed Successfully by roll number" << student_id << endl;
						goto choice;
						break;
					case 3:
						cout << "You have Selected Ender's Game to Borrow" << endl;
						cout << "So, Enter your Roll Number to borrow a book" << endl;
						cin >> student_id;
						cout << "Book Borrowed Successfully by roll number" << student_id << endl;
						goto choice;
						break;
					case 4:
						cout << "You have Selected 1984 to Borrow" << endl;
						cout << "So, Enter your Roll Number to borrow a book" << endl;
						cin >> student_id;
						cout << "Book Borrowed Successfully by roll number" << student_id << endl;
						goto choice;
						break;
					case 5:
						cout << "You have Selected A Wrinkle in Time to Borrow" << endl;
						cout << "So, Enter your Roll Number to borrow a book" << endl;
						cin >> student_id;
						cout << "Book Borrowed Successfully by roll number" << student_id << endl;
						goto choice;
						break;
					case 6:
						cout << "You have Selected Hyperion to Borrow" << endl;
						cout << "So, Enter your Roll Number to borrow a book" << endl;
						cin >> student_id;
						cout << "Book Borrowed Successfully by roll number" << student_id << endl;
						goto choice;
						break;
					case 7:
						cout << "You have Selected The Martian to Borrow" << endl;
						cout << "So, Enter your Roll Number to borrow a book" << endl;
						cin >> student_id;
						cout << "Book Borrowed Successfully by roll number" << student_id << endl;
						goto choice;
						break;
					case 8:
						cout << "You have Selected Snow Crash to Borrow" << endl;
						cout << "So, Enter your Roll Number to borrow a book" << endl;
						cin >> student_id;
						cout << "Book Borrowed Successfully by roll number" << student_id << endl;
						goto choice;
						break;
					default:
						cout << "You have Selected Brave New World to Borrow" << endl;
						cout << "So, Enter your Roll Number to borrow a book" << endl;
						cin >> student_id;
						cout << "Book Borrowed Successfully by roll number" << student_id << endl;
						goto choice;
						break;
					}
					break;
				case 7:
					cout << "Which book you want to borrow" << endl;
					cout << "1- Rumi\n2- Leaves of Grass\n3- Paradise Lost\n4- Devotion" << endl;
					cin >> subchoice;
					switch (subchoice) {
					case 1:
						cout << "You have Selected Rumi to Borrow" << endl;
						cout << "So, Enter your Roll Number to borrow a book" << endl;
						cin >> student_id;
						cout << "Book Borrowed Successfully by roll number" << student_id << endl;
						goto choice;
						break;
					case 2:
						cout << "You have Selected Leaves of Grass to Borrow" << endl;
						cout << "So, Enter your Roll Number to borrow a book" << endl;
						cin >> student_id;
						cout << "Book Borrowed Successfully by roll number" << student_id << endl;
						goto choice;
						break;
					case 3:
						cout << "You have Selected Paradise Lost to Borrow" << endl;
						cout << "So, Enter your Roll Number to borrow a book" << endl;
						cin >> student_id;
						cout << "Book Borrowed Successfully by roll number" << student_id << endl;
						goto choice;
						break;
					default:
						cout << "You have Selected Devotion to Borrow" << endl;
						cout << "So, Enter your Roll Number to borrow a book" << endl;
						cin >> student_id;
						cout << "Book Borrowed Successfully by roll number" << student_id << endl;
						goto choice;
						break;
					}
					break;
				case 8:
					cout << "Which book you want to borrow" << endl;
					cout << "1- Watchmen\n2- From Hell\n3- El Eternauta\n4- The Little Mermaid\n5- Under the Moon\n6- The Magic Fish\n7- The Girl from the Sea" << endl;
					cin >> subchoice;
					switch (subchoice) {
					case 1:
						cout << "You have Selected Watchmen to Borrow" << endl;
						cout << "So, Enter your Roll Number to borrow a book" << endl;
						cin >> student_id;
						cout << "Book Borrowed Successfully by roll number" << student_id << endl;
						goto choice;
						break;
					case 2:
						cout << "You have Selected From Hell to Borrow" << endl;
						cout << "So, Enter your Roll Number to borrow a book" << endl;
						cin >> student_id;
						cout << "Book Borrowed Successfully by roll number" << student_id << endl;
						goto choice;
						break;
					case 3:
						cout << "You have Selected El Eternauta to Borrow" << endl;
						cout << "So, Enter your Roll Number to borrow a book" << endl;
						cin >> student_id;
						cout << "Book Borrowed Successfully by roll number" << student_id << endl;
						goto choice;
						break;
					case 4:
						cout << "You have Selected The Little Mermaid to Borrow" << endl;
						cout << "So, Enter your Roll Number to borrow a book" << endl;
						cin >> student_id;
						cout << "Book Borrowed Successfully by roll number" << student_id << endl;
						goto choice;
						break;
					case 5:
						cout << "You have Selected Under the Moon to Borrow" << endl;
						cout << "So, Enter your Roll Number to borrow a book" << endl;
						cin >> student_id;
						cout << "Book Borrowed Successfully by roll number" << student_id << endl;
						goto choice;
						break;
					case 6:
						cout << "You have Selected The Magic Fish to Borrow" << endl;
						cout << "So, Enter your Roll Number to borrow a book" << endl;
						cin >> student_id;
						cout << "Book Borrowed Successfully by roll number" << student_id << endl;
						goto choice;
						break;
					default:
						cout << "You have Selected The Girl from the Sea to Borrow" << endl;
						cout << "So, Enter your Roll Number to borrow a book" << endl;
						cin >> student_id;
						cout << "Book Borrowed Successfully by roll number" << student_id << endl;
						goto choice;
						break;
					}
					break;
				case 9:
					cout << "Which book you want to borrow" << endl;
					cout << "1- The Silk Roads\n2- The Slave Trade\n3- The Guns of August\n4- The Civil War\n5- The Crusades\n6- A World Lit Only by Fire" << endl;
					cin >> subchoice;
					switch (subchoice) {
					case 1:
						cout << "You have Selected The Silk Roads to Borrow" << endl;
						cout << "So, Enter your Roll Number to borrow a book" << endl;
						cin >> student_id;
						cout << "Book Borrowed Successfully by roll number" << student_id << endl;
						goto choice;
						break;
					case 2:
						cout << "You have Selected The Slaves Trade to Borrow" << endl;
						cout << "So, Enter your Roll Number to borrow a book" << endl;
						cin >> student_id;
						cout << "Book Borrowed Successfully by roll number" << student_id << endl;
						goto choice;
						break;
					case 3:
						cout << "You have Selected The Guns of August to Borrow" << endl;
						cout << "So, Enter your Roll Number to borrow a book" << endl;
						cin >> student_id;
						cout << "Book Borrowed Successfully by roll number" << student_id << endl;
						goto choice;
						break;
					case 4:
						cout << "You have Selected The Civil War to Borrow" << endl;
						cout << "So, Enter your Roll Number to borrow a book" << endl;
						cin >> student_id;
						cout << "Book Borrowed Successfully by roll number" << student_id << endl;
						goto choice;
						break;
					case 5:
						cout << "You have Selected The Crusades to Borrow" << endl;
						cout << "So, Enter your Roll Number to borrow a book" << endl;
						cin >> student_id;
						cout << "Book Borrowed Successfully by roll number" << student_id << endl;
						goto choice;
						break;
					default:
						cout << "You have Selected A World Lit only by Fire to Borrow" << endl;
						cout << "So, Enter your Roll Number to borrow a book" << endl;
						cin >> student_id;
						cout << "Book Borrowed Successfully by roll number" << student_id << endl;
						goto choice;
						break;
					}
					break;
				case 10:
					cout << "Which book you want to borrow" << endl;
					cout << "1- Steve jobs\n2- The Life of Charlotte Bronte\n3- Shoe Dog\n4- Tolkien\n5- The Everything Store\n6- Rose Parks" << endl;
					cin >> subchoice;
					switch (subchoice) {
					case 1:
						cout << "You have Selected Steve Jobs to Borrow" << endl;
						cout << "So, Enter your Roll Number to borrow a book" << endl;
						cin >> student_id;
						cout << "Book Borrowed Successfully by roll number" << student_id << endl;
						goto choice;
						break;
					case 2:
						cout << "You have Selected The Life of Charlotte Bronte to Borrow" << endl;
						cout << "So, Enter your Roll Number to borrow a book" << endl;
						cin >> student_id;
						cout << "Book Borrowed Successfully by roll number" << student_id << endl;
						goto choice;
						break;
					case 3:
						cout << "You have Selected Shoe Dog to Borrow" << endl;
						cout << "So, Enter your Roll Number to borrow a book" << endl;
						cin >> student_id;
						cout << "Book Borrowed Successfully by roll number" << student_id << endl;
						goto choice;
						break;
					case 4:
						cout << "You have Selected Tolkein to Borrow" << endl;
						cout << "So, Enter your Roll Number to borrow a book" << endl;
						cin >> student_id;
						cout << "Book Borrowed Successfully by roll number" << student_id << endl;
						goto choice;
						break;
					case 5:
						cout << "You have Selected The Eveerything to Store to Borrow" << endl;
						cout << "So, Enter your Roll Number to borrow a book" << endl;
						cin >> student_id;
						cout << "Book Borrowed Successfully by roll number" << student_id << endl;
						goto choice;
						break;
					default:
						cout << "You have Selected Rose Parks to Borrow" << endl;
						cout << "So, Enter your Roll Number to borrow a book" << endl;
						cin >> student_id;
						cout << "Book Borrowed Successfully by roll number" << student_id << endl;
						goto choice;
						break;
					}
					if (choice1 == 12) {
						//cout << "you may go now!!";
						goto choice3;
					}
					else if (choice1 == 11) {
						goto choice;
						break;
					}
					else if (choice1 > 12) {
						cout << "\nPlease select the correct option\n" << endl;
						goto choice1;
						break;
					}
				}
				break;
			case 3:
				cout << "\nEnter the Category of book you want to return\n" << endl;
				cout << "1- Text book\n2- Romantic\n3- Horror\n4- Crimes\n5- Mystery\n6- Science Fiction\n7- Poetry\n8- Comics\n9- Historical\n10- Biography\n11- Back\n12- Exit" << endl;
				cin >> choice1;
				if (choice1 == 12) {
					goto choice3;
				}
				if (choice1 == 11) {
					goto choice;
				}
				else if (choice1 >= 11) {
					cout << "This option is not from above mentioned" << endl;
				}
				else if (choice1 <= 10) {
					switch (choice1) {
					case 1:
						cout << "1- Chemistry\n2- Physics\n3- Maths\n4- English\n5- Urdu\n6- Islamiyat\n7- Computer" << endl;
						cout << "\nThese are the books. So, Select which book you want to return." << endl;
						cin >> subchoice;
						if (subchoice <= 7) {
							cout << "Enter your Roll Number" << endl;
							cin >> student_id1;
							if (student_id1 == student_id) {
								cout << "Book Returned Successfully" << endl;
							}
							else
								cout << "You have not borrowed any book from library. So, you are not allowed to return any book" << endl;
							goto choice;
						}
						else
							cout << "This number is not from above options. So, you are not allowed to return it to us." << endl;
						goto choice;
						break;
					case 2:
						cout << "1- Jannat ke Patty\n2- Peer e Kamil\n3- Aby e Hayat\n4- Namal\n5- Lahasil\n6- Bismil\n7- Ishq e Atish\n8- Amarbail\n9- Rooh e Yaram\n10- Wehshat e junoon\n11- Man raqsam tan raqsam\n12- Yaar Sitamgar\n13- Ishq\n14- Lams e Junoon\n15- Ramz e Ishq" << endl;
						cout << "\nThese are the books. So, Select which book you want to return.\n" << endl;
						cin >> subchoice;
						if (subchoice <= 15) {
							cout << "Enter your Roll Number" << endl;
							cin >> student_id1;
							if (student_id1 == student_id) {
								cout << "Book Returned Successfully" << endl;
							}
							else
								cout << "You have not borrowed any book from library. So, you are not allowed to return any book" << endl;
							goto choice;
						}
						else
							cout << "This number is not from above options. So, you are not allowed to return it to us." << endl;
						goto choice;
					case 3:
						cout << "1- The Haunting of Hill House\n2- Dracula\n3- The Exorcist\n4- The Devil Takes You Home\n5- The Terror\n6- IT\n7- The Hunger\n8- Beloved" << endl;
						cout << "\nThese are the books. So, Select which book you want to return.\n" << endl;
						cin >> subchoice;
						if (subchoice <= 8) {
							cout << "Enter your Roll Number" << endl;
							cin >> student_id1;
							if (student_id1 == student_id) {
								cout << "Book Returned Successfully" << endl;
							}
							else
								cout << "You have not borrowed any book from library. So, you are not allowed to return any book" << endl;
							goto choice;
						}
						else
							cout << "This number is not from above options. So, you are not allowed to return it to us." << endl;
						goto choice;
						break;
					case 4:
						cout << "1- The Women in White\n2- Field Of Blood\n3- A Man Lay Dead\n4- A Study in Scarlet\n5- Gone Girl\n6- The Silent Patient\n7- A Kiss Before Death\n8- The Women in Library\n9- We Solve Murders\n10- Angels and demons" << endl;
						cout << "\nThese are the books. So, Select which book you want to return.\n" << endl;
						cin >> subchoice;
						if (subchoice <= 10) {
							cout << "Enter your Roll Number" << endl;
							cin >> student_id1;
							if (student_id1 == student_id) {
								cout << "Book Returned Successfully" << endl;
							}
							else
								cout << "You have not borrowed any book from library. So, you are not allowed to return any book" << endl;
							goto choice;
						}
						else
							cout << "This number is not from above options. So, you are not allowed to return it to us." << endl;
						goto choice;
						break;
					case 5:
						cout << "1- Shutter island\n2- The Big SLeep\n3- Like a Sister\n4- Rebecca\n5- In Cold Blood\n6- The Violin Conspiracy" << endl;
						cout << "\nThese are the books. So, Select which book you want to return.\n" << endl;
						cin >> subchoice;
						if (subchoice <= 6) {
							cout << "Enter your Roll Number" << endl;
							cin >> student_id1;
							if (student_id1 == student_id) {
								cout << "Book Returned Successfully" << endl;
							}
							else
								cout << "You have not borrowed any book from library. So, you are not allowed to return any book" << endl;
							goto choice;
						}
						else
							cout << "This number is not from above options. So, you are not allowed to return it to us." << endl;
						goto choice;
						break;
					case 6:
						cout << "1- Harry Porter\n2- Dune\n3- Ender's Game\n4- 1984\n5- A Wrinkle in Time\n6- Hyperion\n7- The Martian\n8- Snow Crash\n9- Brave New World" << endl;
						cout << "\nThese are the books. So, Select which book you want to return.\n" << endl;
						cin >> subchoice;
						if (subchoice <= 9) {
							cout << "Enter your Roll Number" << endl;
							cin >> student_id1;
							if (student_id1 == student_id) {
								cout << "Book Returned Successfully" << endl;
							}
							else
								cout << "You have not borrowed any book from library. So, you are not allowed to return any book" << endl;
							goto choice;
						}
						else
							cout << "This number is not from above options. So, you are not allowed to return it to us." << endl;
						goto choice;
						break;
					case 7:
						cout << "1- Rumi\n2- Leaves of Grass\n3- Paradise Lost\n4- Devotion" << endl;
						cout << "\nThese are the books. So, Select which book you want to return.\n" << endl;
						cin >> subchoice;
						if (subchoice <= 4) {
							cout << "Enter your Roll Number" << endl;
							cin >> student_id1;
							if (student_id1 == student_id) {
								cout << "Book Returned Successfully" << endl;
							}
							else
								cout << "You have not borrowed any book from library. So, you are not allowed to return any book" << endl;
							goto choice;
						}
						else
							cout << "This number is not from above options. So, you are not allowed to return it to us." << endl;
						goto choice;
						break;
					case 8:
						cout << "1- Watchmen\n2- From Hell\n3- El Eternauta\n4- The Little Mermaid\n5- Under the Moon\n6- The Magic Fish\n7- The Girl from the Sea" << endl;
						cout << "\nThese are the books. So, Select which book you want to return.\n" << endl;
						cin >> subchoice;
						if (subchoice <= 7) {
							cout << "Enter your Roll Number" << endl;
							cin >> student_id1;
							if (student_id1 == student_id) {
								cout << "Book Returned Successfully" << endl;
							}
							else
								cout << "You have not borrowed any book from library. So, you are not allowed to return any book" << endl;
							goto choice;
						}
						else
							cout << "This number is not from above options. So, you are not allowed to return it to us." << endl;
						goto choice;
						break;
					case 9:
						cout << "1- The Silk Roads\n2- The Slave Trade\n3- The Guns of August\n4- The Civil War\n5- The Crusades\n6- A World Lit Only by Fire" << endl;
						cout << "\nThese are the books. So, Select which book you want to return.\n" << endl;
						cin >> subchoice;
						if (subchoice <= 6) {
							cout << "Enter your Roll Number" << endl;
							cin >> student_id1;
							if (student_id1 == student_id) {
								cout << "Book Returned Successfully" << endl;
							}
							else
								cout << "You have not borrowed any book from library. So, you are not allowed to return any book" << endl;
							goto choice;
						}
						else
							cout << "This number is not from above options. So, you are not allowed to return it to us." << endl;
						goto choice;
						break;
					default:
						cout << "1- Steve jobs\n2- The Life of Charlotte Bronte\n3- Shoe Dog\n4- Tolkien\n5- The Everything Store\n6- Rose Parks" << endl;
						cout << "\nThese are the books. So, Select which book you want to return.\n" << endl;
						cin >> subchoice;
						if (subchoice <= 6) {
							cout << "Enter your Roll Number" << endl;
							cin >> student_id1;
							if (student_id1 == student_id) {
								cout << "Book Returned Successfully" << endl;
							}
							else
								cout << "You have not borrowed any book from library. So, you are not allowed to return any book" << endl;
							goto choice;
						}
						else
							cout << "This number is not from above options. So, you are not allowed to return it to us." << endl;
						goto choice;
						break;
					}
				}
				else
					cout << "Number is Greater which is not from above options. So, select the option again" << endl;
				goto choice;
				break;
			default:
				cout << "\n1- Behavior: Be respectful and courteous to others, and don't be disruptive.\n2- Noise : Maintain silence in the library, and turn off cell phones and other devices.\n3- Food and drink : Don't bring food or drinks into the library.\n4- Clothing : Dress appropriately and remove hats and caps.\n5- Library materials : Don't mark, deface, or take out library materials without permission.\n6- Library cards : Bring your library card with you, and report it lost immediately if it's lost.\n7- Personal belongings : Don't bring bags, umbrellas, or other personal items into the library.\n8- Library etiquette : Handle books gently, and report damaged books to library staff.\n9- Overdue books: Be aware of the overdue date for your books.\n10- Back\n" << endl;
				cout << "--------------------------------------------------------------------------------------" << endl;
				cout << "Enter 10 to go back" << endl;
				cin >> choice2;
				if (choice2 == 10) {
					goto choice;
				}
				else if (choice > 10) {
					cout << "Please press 10 to go back" << endl;
					cin >> zia;
				}
				else if (choice < 10) {
					cout << "\nPlease press 10 to go back" << endl;
					cin >> zia;
				}
				break;
			}
		}
	case 3:
	choice3:
		cout << "see you!!";
		return 0;
	}
	return 0;
}
