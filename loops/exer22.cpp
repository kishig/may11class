#include<iostream>

using namespace std;

int main() {
	
	int num;
	
	cout << "Input number: ";
	cin >> num;
	
	cout << "Factors of " << num << ": ";
	for (int i = 1; i <= num; i++)
	{
		if (num % i == 0)		
			cout << i << " ";
	}
	
	//cout << num << " ^ " << expo << " = " << power << endl;
	return 0;
}	
		
	
