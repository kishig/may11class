#include<iostream>

using namespace std;

int main() {
	int num = 1, n, sum = 0;
	
	cout << "Input upper limit: ";
	cin >> n;
	
	for (; num <= n; num++)
	{
		sum += num;
	}
	cout << "the sum of all numbers 1 to " << n << ": " << sum << endl;
				
	return 0;
}
