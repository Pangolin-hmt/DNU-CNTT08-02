#include<iostream>
using namespace std;
void main()
{
	int d, i, j;
	cout << "nhap canh tam giac: "; cin >> d; cin.ignore();
	for (i = d; i >= 1; i--)
	{
		for (j =i; j >= 1; j--)cout << "  ";
		for (j = d - i; j >= 0; j--)cout << "* ";
		for (j = d - i; j >= 1; j--)cout << "* ";
		cout << "\n";
	}
	cin.get();
}