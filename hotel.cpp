//Programming course

#include <iostream>
#include <fstream>
#include <string>

using namespace std;

class hotel
{
#include <string>

	string room[10][2];
	int r;
	int sentinel = 0; //sentinel for endless loop
	bool rs[11] = { 0 }; //room status
	char choice;

public:
	string menu(void); //display menu
	void ini(void); //initializes the program data into 0
	void add(void); //adds a customer to a room
	void find(void); //find who's occupying which room
	void vr(void); //view all the rooms and display whether they are occupied or not
	void del(void); //delete customer details from occupied rooms
	void save(void); //stores program data into file
	void load(void); //loads program data from file
};

string hotel::menu(void)
{
	while (sentinel != -1)
	{
		cout << endl;
		cout << "Welcome to the J.M Hotel! " << endl;
		cout << "To add customers, press A" << endl;
		cout << "To empty all rooms, press I" << endl;
		cout << "To view all the rooms, press V" << endl;
		cout << "To find customers, press F" << endl;
		cout << "To delete an occupied room, press D" << endl;
		cout << "To save to file, press S" << endl;
		cout << "To load from file, press L" << endl;
		cout << "To Quit, press Q" << endl;
		cin >> choice;

		switch (choice)
		{
		case 'A':
		case 'a': add();
			break;
		case 'I':
		case 'i': ini();
			break;
		case 'V':
		case 'v': vr();
			break;
		case 'F':
		case 'f': find();
			break;
		case 'D':
		case 'd': del();
			break;
		case 'S':
		case 's':save();
			break;
		case 'L':
		case 'l': load();
			break;
		case 'Q':
		case 'q': cout << "Thank you for using our programme! " << endl;
			return 0;
		default: cout << "Invalid key entered! Press another key to try again!" << endl;
			break;
		}
	}
}

void hotel::add(void)
{

	cout << endl;
	cout << "Please enter the room #" << endl;
	cin >> r;

	while (sentinel != -1)
	{
		if (r == 1)
		{
			if (rs[0] == 0)
			{

				cout << "Please enter the guest's name" << endl;
				cin >> room[0][2];
				rs[0] = 1;
				cout << "Room #" << r << " occupied by: " << room[0][2] << endl;
				room[0][1] = "Occupied";
				break;
			}
			else
			{
				cout << "Room is already booked or occupied! Please try another room!" << endl;
				break;
			}
		}
		if (r == 2)
		{
			if (rs[1] == 0)
			{

				cout << "Please enter the guest's name" << endl;
				cin >> room[1][2];
				rs[1] = 1;
				cout << "Room #" << r << " occupied by: " << room[1][2] << endl;
				room[1][1] = "Occupied";
				break;
			}
			else
			{
				cout << "Room is already booked or occupied! Please try another room!" << endl;
				break;
			}
		}
		if (r == 3)
		{
			if (rs[2] == 0)
			{

				cout << "Please enter the guest's name" << endl;
				cin >> room[2][2];
				rs[2] = 1;
				cout << "Room #" << r << " occupied by: " << room[2][2] << endl;
				room[2][1] = "Occupied";
				break;
			}
			else
			{
				cout << "Room is already booked or occupied! Please try another room!" << endl;
				break;
			}
		}
		if (r == 4)
		{
			if (rs[3] == 0)
			{

				cout << "Please enter the guest's name" << endl;
				cin >> room[3][2];
				rs[3] = 1;
				cout << "Room #" << r << " occupied by: " << room[3][2] << endl;
				room[3][1] = "Occupied";
				break;
			}
			else
			{
				cout << "Room is already booked or occupied! Please try another room!" << endl;
				break;
			}
		}
		if (r == 5)
		{
			if (rs[4] == 0)
			{

				cout << "Please enter the guest's name" << endl;
				cin >> room[4][2];
				rs[4] = 1;
				cout << "Room #" << r << " occupied by: " << room[4][2] << endl;
				room[4][1] = "Occupied";
				break;
			}
			else
			{
				cout << "Room is already booked or occupied! Please try another room!" << endl;
				break;
			}
		}
		if (r == 6)
		{
			if (rs[5] == 0)
			{

				cout << "Please enter the guest's name" << endl;
				cin >> room[5][2];
				rs[5] = 1;
				cout << "Room #" << r << " occpupied by: " << room[5][2] << endl;
				room[5][1] = "Occupied";
				break;
			}
			else
			{
				cout << "Room is already booked or occupied! Please try another room!" << endl;
				break;
			}
		}
		if (r == 7)
		{
			if (rs[6] == 0)
			{

				cout << "Please enter the guest's name" << endl;
				cin >> room[6][2];
				rs[6] = 1;
				cout << "Room #" << r << " occupied by: " << room[6][2] << endl;
				room[6][1] = "Occupied";
				break;
			}
			else
			{
				cout << "Room is already booked or occupied! Please try another room!" << endl;
				break;
			}
		}
		if (r == 8)
		{
			if (rs[7] == 0)
			{

				cout << "Please enter the guest's name" << endl;
				cin >> room[7][2];
				rs[7] = 1;
				cout << "Room #" << r << " occupied by: " << room[7][2] << endl;
				room[7][1] = "Occupied";
				break;
			}
			else
			{
				cout << "Room is already booked or occupied! Please try another room!" << endl;
				break;
			}
		}
		if (r == 9)
		{
			if (rs[8] == 0)
			{

				cout << "Please enter the guest's name" << endl;
				cin >> room[8][2];
				rs[8] = 1;
				cout << "Room #" << r << " occupied by: " << room[8][2] << endl;
				room[8][1] = "Occupied";
				break;
			}
			else
			{
				cout << "Room is already booked or occupied! Please try another room!" << endl;
				break;
			}
		}
		if (r == 10)
		{
			if (rs[9] == 0)
			{

				cout << "Please enter the guest's name" << endl;
				cin >> room[9][2];
				rs[9] = 1;
				cout << "Room #" << r << " occupied by: " << room[9][2] << endl;
				room[9][1] = "Occupied";
				break;
			}
			else
			{
				cout << "Room is already booked or occupied! Please try another room!" << endl;
				break;
			}
		}
	}
}

void hotel::find(void)
{
	cout << endl;
	cout << "Please enter the room #" << endl;
	cin >> r;

	while (sentinel != -1)
	{
		if (r == 1)
		{
			if (rs[0] == 1) {
				cout << "Room #" << r << " occupied by: " << room[0][2] << endl;
			}
			else cout << "Room is not found or it's currently vacant" << endl;
			break;
		}

		if (r == 2)
		{
			if (rs[1] == 1)
			{
				cout << "Room #" << r << " by: " << room[1][2] << endl;
			}
			else cout << "Room is not found or it's currently vacant" << endl;
			break;
		}
		if (r == 3)
		{
			if (rs[2] == 1)
			{
				cout << "Room #" << r << " by: " << room[2][2] << endl;
			}
			else cout << "Room is not found or it's currently vacant" << endl;
			break;
		}
		if (r == 4)
		{
			if (rs[3] == 1)
			{
				cout << "Room #" << r << " by: " << room[3][2] << endl;
			}
			else cout << "Room is not found or it's currently vacant" << endl;
			break;
		}
		if (r == 5)
		{
			if (rs[4] == 1)
			{
				cout << "Room #" << r << " by: " << room[4][2] << endl;
			}
			else cout << "Room is not found or it's currently vacant" << endl;
			break;
		}
		if (r == 6)
		{
			if (rs[5] == 1)
			{
				cout << "Room #" << r << " by: " << room[5][2] << endl;
			}
			else cout << "Room is not found or it's currently vacant" << endl;
			break;
		}
		if (r == 7)
		{
			if (rs[6] == 1)
			{
				cout << "Room #" << r << " by: " << room[6][2] << endl;
			}
			else cout << "Room is not found or it's currently vacant" << endl;
			break;
		}
		if (r == 8)
		{
			if (rs[7] == 1)
			{
				cout << "Room #" << r << " by: " << room[7][2] << endl;
			}
			else cout << "Room is not found or it's currently vacant" << endl;
			break;
		}
		if (r == 9)
		{
			if (rs[8] == 1)
			{
				cout << "Room #" << r << " by: " << room[8][2] << endl;
			}
			else cout << "Room is not found or it's currently vacant" << endl;
			break;
		}
		if (r == 10)
		{
			if (rs[9] == 1)
			{
				cout << "Room #" << r << " by: " << room[9][2] << endl;
			}
			else cout << "Room is not found or it's currently vacant" << endl;
			break;
		}
	}
}

void hotel::vr(void)
{
	system("cls");

	while (sentinel != -1)
	{
		cout << endl;
		cout << "Room #1 is occupied by: " << room[0][2] << "\t\tstatus: " << room[0][1] << endl;
		cout << "Room #2 is occupied by: " << room[1][2] << "\t\tstatus: " << room[1][1] << endl;
		cout << "Room #3 is occupied by: " << room[2][2] << "\t\tstatus: " << room[2][1] << endl;
		cout << "Room #4 is occupied by: " << room[3][2] << "\t\tstatus: " << room[3][1] << endl;
		cout << "Room #5 is occupied by: " << room[4][2] << "\t\tstatus: " << room[4][1] << endl;
		cout << "Room #6 is occupied by: " << room[5][2] << "\t\tstatus: " << room[5][1] << endl;
		cout << "Room #7 is occupied by: " << room[6][2] << "\t\tstatus: " << room[6][1] << endl;
		cout << "Room #8 is occupied by: " << room[7][2] << "\t\tstatus: " << room[7][1] << endl;
		cout << "Room #9 is occupied by: " << room[8][2] << "\t\tstatus: " << room[8][1] << endl;
		cout << "Room #10 is occupied by: " << room[9][2] << "\t\tstatus: " << room[9][1] << endl;
		break;
	}
}

void hotel::del(void)
{
	cout << "Please enter the room you want to change into EMPTY status" << endl;
	cin >> r;

	while (sentinel != -1)
	{
		if (r < 10 && rs[r] == 1)
		{
			cout << endl;
			cout << "Do you wish to continue? " << endl;
			cin >> choice;

			if (choice == 'Y' || choice == 'y')
			{
				rs[r] = false;
				room[r - 1][1] = "Empty";
				room[r - 1][2] = " ";
				cout << endl << "Room #" << r << " has been emptied!" << endl;
				break;
			}
			else cout << "No changes will be made! Returning to the menu! " << endl; break;
		}
		else cout << "Room is currently empty or room does not exist! " << endl; break;
	}
}

void hotel::save(void)
{
	ofstream dataS("HR.txt", ios::app | ios::trunc);

	while (sentinel != -1)
	{
		dataS.open("HR.txt");

		cout << "The file is now open" << endl;

		if (dataS.is_open())
		{
			cout << "The file is ready for save:" << endl << endl;
			dataS << "Welcome to J.M Hotel!" << endl << endl;

			dataS << "Room #1 is occupied by: " << room[0][2] << "\t\tstatus: " << room[0][1] << endl;
			dataS << "Room #2 is occupied by: " << room[1][2] << "\t\tstatus: " << room[1][1] << endl;
			dataS << "Room #3 is occupied by: " << room[2][2] << "\t\tstatus: " << room[2][1] << endl;
			dataS << "Room #4 is occupied by: " << room[3][2] << "\t\tstatus: " << room[3][1] << endl;
			dataS << "Room #5 is occupied by: " << room[4][2] << "\t\tstatus: " << room[4][1] << endl;
			dataS << "Room #6 is occupied by: " << room[5][2] << "\t\tstatus: " << room[5][1] << endl;
			dataS << "Room #7 is occupied by: " << room[6][2] << "\t\tstatus: " << room[6][1] << endl;
			dataS << "Room #8 is occupied by: " << room[7][2] << "\t\tstatus: " << room[7][1] << endl;
			dataS << "Room #9 is occupied by: " << room[8][2] << "\t\tstatus: " << room[8][1] << endl;
			dataS << "Room #10 is occupied by: " << room[9][2] << "\t\tstatus: " << room[9][1] << endl;
			dataS.close(); break;
		}
		else cout << "Unable to open the file" << endl; break;
	}
}

void hotel::load(void)
{
	ifstream dataL;
	string words;

	while (sentinel != -1)
	{
		dataL.open("HR.txt");
		cout << "The file is now open" << endl;

		if (dataL.is_open())
		{
			cout << "The file is ready to load" << endl;

			while (getline(dataL, words))
			{
				cout << words << endl;
			}
			dataL.close(); break;
		}
		else cout << "Unable to open the file" << endl; break;
	}
}

void hotel::ini(void)
{

	cout << "Do you wish to empty all rooms? " << endl;
	cin >> choice;

	while (sentinel != -1)
	{
		if (choice == 'Y' || choice == 'y')
		{
			rs[0] = 0; room[0][1] = "Empty"; room[0][2] = " ";
			rs[1] = 0; room[1][1] = "Empty"; room[1][2] = " ";
			rs[2] = 0; room[2][1] = "Empty"; room[2][2] = " ";
			rs[3] = 0; room[3][1] = "Empty"; room[3][2] = " ";
			rs[4] = 0; room[4][1] = "Empty"; room[4][2] = " ";
			rs[5] = 0; room[5][1] = "Empty"; room[5][2] = " ";
			rs[6] = 0; room[6][1] = "Empty"; room[6][2] = " ";
			rs[7] = 0; room[7][1] = "Empty"; room[7][2] = " ";
			rs[8] = 0; room[8][1] = "Empty"; room[8][2] = " ";
			rs[9] = 0; room[9][1] = "Empty"; room[9][2] = " ";
			cout << "All rooms have been reverted back to its default state, going back to the menu" << endl;
			break;

		}
		else cout << "No changes will be made to the rooms, going back to the menu" << endl; break;
	}
}


int main(void)
{
	hotel h;

	system("cls");
	system("color 01");
	h.menu();
	system("PAUSE");
	return 0;
}
