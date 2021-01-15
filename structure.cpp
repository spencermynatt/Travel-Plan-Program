#include <iostream>
#include <fstream>
#include <string>
using namespace std;


struct info{
	char location[500];//location of where you want to go
	char budget[500]; //amount of money to spend on holiday
	char time[500]; //time of your flight

};
void print_data();
int main()
{

	ofstream write;
	write.open("holiday_plans.txt", ios::out);
	info* info, store;
	info = &store; //store is accessed using the pointer
	cout << "Welcome to your Trip Journal" << "\n";
	cout << "Enter your location"<< "\n";
	cin.getline((*info).location, 500); //*info.location and store.location are the same thing
	write << (*info).location << "\n";
	cout << "Now enter your budget" << "\n";
	cin.getline((store).budget, 500);
	write <<"$" << (*info).budget << "\n";
	cout << "Now enter the time of your flight" << endl;
	cin.getline((*info).time, 500);
	write << (*info).time << endl;
	print_data();


}
void print_data() {
	ifstream read;
	read.open("holiday_plans.txt", ios::in);
	cout << "This is your data, do you want to quit?" << endl;
	char line; //stores all the information from holiday_plans
	
	while (read >> line)
	{
		cout << " " << line; //prints all the data from the string line
		
	}
	cout << endl;
}
