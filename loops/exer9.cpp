#include<iostream>

using namespace std;

int main() {
	int num, inc = 10;
	
	cout << "Input num: ";
	cin >> num;
	
	for (int i = 1; i<= inc; i++)
	{
		cout << num << " * " << i << " = " << num*i << endl;
	}
	
				
	return 0;
}
