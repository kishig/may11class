#include<iostream>

using namespace std;

int main() {
	string month;
	cout << "Please enter the month name to find out how many days in that month: " << endl;
	cin >> month;
	
	if (month == "january" || month == "march" || month =="may"|| month == "july" || month == "august"
		|| month == "october" || month == "december")
	{
		cout << "There are 31 days in that month you have entered" << endl;
		
	}
	else if (month == "february")
	{
		cout << "There are 28 days in that month you have entered" << endl;
	}
	else if (month == "april" || month == "june" || month =="september"|| month == "november")
	{
		cout << "There are 30 days in that month you have entered" << endl;		
	}
	else
	{
		cout << "Invalid entry of the month" << endl;
	}
			
	return 0;
}
