#include<iostream>

using namespace std;

int main() {
	int grade1, grade2, grade3, grade4, grade5;
	cout << "Input marks of five subjects: ";
	cin >> grade1;
	cout << endl;
	cin >> grade2;
	cout << endl;
	cin >> grade3;
	cout << endl;
	cin >> grade4;
	cout << endl;
	cin >> grade5;
	cout << endl;
	
	double average_grade = (grade1+grade2+grade3+grade4+grade5)/5.0;
	
	if (average_grade > 100)
	{
		cout << "Invalid amount" << endl;
	}
	else if (average_grade >= 90 && average_grade < 100)
	{
		cout << "Grade A" << endl;
	}
	else if (average_grade < 90 && average_grade >= 80)
	{
		cout << "Grade B" << endl;
	}	
	else if (average_grade < 80 && average_grade >= 70)
	{
		cout << "Grade C" << endl;
	}
	else if (average_grade < 70 && average_grade >= 60)
	{
		cout << "Grade D" << endl;
	}
	else if (average_grade < 60 && average_grade >= 40)
	{
		cout << "Grade E" << endl;
	}
	else
	{
		cout << "Grade F" << endl;
	}
	
	
	return 0;
}
