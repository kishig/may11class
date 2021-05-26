#include<iostream>

using namespace std;

int main() {
	int num = 1, n, sum = 0;
	
	cout << "Input upper limit: ";
	cin >> n;
	
	for (; num <= n; num++)
	{
		if ( num % 2 != 0)
			sum += num;
	}
	cout << "the sum of all numbers 1 to " << n << ": " << sum << endl;
				
	return 0;
}
