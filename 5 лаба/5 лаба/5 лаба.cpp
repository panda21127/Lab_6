#include <iostream>
#include <time.h>
#include <windows.h>
#include <cstring>
#include<algorithm>
using namespace std;
int onlyNumbers()
{
	int flag = 1;
	while (flag == 1)
	{
		int number;
		cin >> number;
		cout << endl;
		if (cin.fail())
		{
			cin.clear();
			cin.ignore(4000, '\n');
			cout << "-_-"<<endl<<"Enter a number"<<endl;
		}
		else
		{
			return number;
		}
	}
	
}
struct plane
	{
		string company;
		string surname;
		string name;
		int flight;
		int cost;
	};
int add(plane* salon,int count,int count_1[])
{
		cout << "How many passengers"<<'\n';
		cin >> count;
		count+=count_1[0];
		for (int i = count_1[0]; i < count; i++)
		{
			cout << "Enter the data" << endl << endl;
			cout << "Company: ";               cin >> salon[i].company;
			cout << "Passenger's last name: "; cin >> salon[i].surname;
			cout << "Passenger's name: ";      cin >> salon[i].name;
			cout << "Flight: ";                salon[i].flight = onlyNumbers();
			cout << "Ticket price: ";          salon[i].cost = onlyNumbers();
			cout << "________________________________" << endl;
		}
		count_1[0] = count;
		return count;
}
void pechati(plane* salon)
{
	int passenger;
	cout << "Please input number student" << '\t';
	cin >> passenger;
	passenger-=1;
	cout << '\n';
	cout << "------------------Information about student № " << passenger+1  << " ------------------";
	cout << '\n';
	cout << " Passenger's name is : " << '\t' << salon[passenger].name;
	cout << '\n';
	cout << " Passenger's last name student is : " << '\t' << salon[passenger].surname;
	cout << '\n';
	cout << " Company is : " << '\t' << salon[passenger].company;
	cout << '\n';
	cout << " Flight is : " << '\t' << salon[passenger].flight;
	cout << '\n';
	cout << " Price is : " << '\t' << salon[passenger].cost;
	cout << '\n';
	cout << "------------------ENDING------------------";
	cout << '\n';
}
void naity(plane* salon,int count_1[])
{
string find;
	cout << "Enter the company name";
	cout << endl;
	cin >> find;
	cout << endl;
	int* finding_flights = new int [count_1[0]];
	cout << endl;
	int cheking = 0;
	cout << "--------------Finding-----Flight----------------";
	for (int i = 0; i < count_1[0]; i++)
	{
		if (salon[i].company == find)
		{
			finding_flights[cheking] = salon[i].flight;
			cheking++;
		}
	}
	if (cheking == 0)
	{
		cout << endl;
		cout << "Not founded";
		cout << endl;
	}
	else
	{
		cout << endl;
		sort(finding_flights, finding_flights + cheking);
		for (int i = 0; i < cheking; i++)
		{
			cout << finding_flights[i] << endl;
		}
	}


	cout << "Enter the flight number";
	cout << endl;
	int group;
	group = onlyNumbers();
	string* finding_names = new string[count_1[0]];
	for (int i = 0; i < count_1[0]; i++)
	{
		finding_names[i] = "@";
	}
	cout << endl;
	cheking = 0;
	cout << "--------------Finding---Passengers-----------";
	for (int i = 0; i < count_1[0]; i++)
	{
		finding_names[cheking] = salon[i].flight;
		if ((salon[i].company == find)&&(salon[i].flight == group))
		{
			finding_names[cheking] = salon[i].name + " " + salon[i].surname;
			cheking++;
		}
	}
	if (cheking == 0)
	{
		cout << endl;
		cout << "Not founded";
		cout << endl;
	}
	else
	{
		cout << endl;
		sort(finding_names, finding_names + cheking);
		for (int i = 0; i < cheking; i++)
		{
			cout << finding_names[i] << endl;
		}
	}
}
int main()
{ 
	SetConsoleOutputCP(1251);
	SetConsoleCP(1251);
	setlocale(LC_ALL, "Russian");
	int count=100;
	int count_1[2];
	count_1[0] = 0;
	count_1[1] = 0;
	plane * salon =new plane[count];
	int n = 256;
	int number;
	int flag = 1;
	while (flag != 0)
	{
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 4);
		cout << "-----------------------MENU------------------" << endl;
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 5);
		
		cout << "    --   --      |-------  |    |  |       |                  ________/        " << endl;
		cout << "   /  \\ /  \\     |         |\\   |  |       |                _/      //\\_ PLANE" << endl;
		cout << "  /    |    \\    |_______  | \\  |  |       |               /      _//   \\   " << endl;
		cout << " /           \\   |         |  \\ |  |       |           ___|______/ /     |   " << endl;
		cout << "/             \\  |_______  |   \\|  |_______|           \\==|=====/ /|     |  " << endl;
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 7);
		cout << "Enter 1 to add a passenger                          "; SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 5); cout<<"      |    / /||     |     " << endl; SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 7);
		cout << "Enter 2 to view passenger information               "; SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 5); cout<<"       \\_ / / ||   _/     " << endl; SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 7);
		cout << "Enter 3 to find a flights and passengers by company "; SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 5); cout<<"      ___/_/__||__/       " << endl; SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 7);
		cout << "Enter 4 to exit                                     "; SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 5); cout<<"      \\___/   \\|          " << endl; SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 7);
		cout << "Input:     ";
		number= onlyNumbers();
		switch (number)
		{
		case 1:
			system("cls");
			add(salon, count,count_1);
			break;
		case 2:
			system("cls");
			pechati(salon);
			break;
		case 3:
			system("cls");
			naity(salon, count_1);
			break;
		case 4:
			flag = 0;
			break;
		default:
			cout << " -_- " << endl;
			cout << "Enter a number from the list " << endl;
			break;
		}
			system("pause");
			system("cls");
	}

	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 6);
	return 0;
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 7);
}
