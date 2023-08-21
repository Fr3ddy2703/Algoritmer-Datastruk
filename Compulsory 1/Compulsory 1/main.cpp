#include <iostream>
using namespace std;

int n1;
int n2;

int factorial(int k)
{
	int tempNumb = k;
	tempNumb = k;
	if (tempNumb == 0 || tempNumb == 1)
		return tempNumb;

	return tempNumb * factorial(k - 1);
}

int fibonacci(int n)
{
	n2 = n;
	int t1 = 0, t2 = 1, next = 0;
	
	for (int i = 1; i <= n; ++i)
	{
		if (i == 1)
		{
			cout << t1 << ", ";
			continue;
		}

		if (i == 2)
		{
			cout << t2 << ", ";
			continue;
		}
		next = t1 + t2;
		t1 = t2;
		t2 = next;

		cout << next << ", ";
		
	}
	return next;
}

int main()
{

	cout << "Type in a number for factorial: ";
	cin >> n1;

	cout << "Type in a number for fibonacci: ";
	cin >> n2;

	int fact = factorial(n1);
	cout << "Factorial of " << n1 << " is: " << fact << endl;

	cout << fibonacci(n2) << endl;

	return 0;
}