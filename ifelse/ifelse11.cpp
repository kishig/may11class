#include<iostream>

using namespace std;

int main() {
	int num;
	cout << "Please enter the assigned number of a day that representing week days Monday through Sunday (enter 1 to 7): ";
	cin >> num;
	
	cout << endl; 
	
	if (num == 1)
	{
		cout << "Monday" << endl;		
	}
	else if (num == 2)
	{
		cout << "Tuesday" << endl;
	}
	else if (num == 3)
	{
		cout << "Wednesday" << endl;
	}
	else if (num == 4)
	{
		cout << "Thursday" << endl;
	}
	else if (num == 5)
	{
		cout << "Friday" << endl;
	}
	else if (num == 6)
	{
		cout << "Saturday" << endl;
	}
	else if (num == 7)
	{
		cout << "Sunday" << endl;
	}
	else
	{
		cout << "You have entered wrong week number" << endl;
	}
			
	
	return 0;
}
