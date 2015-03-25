#include<iostream>
using namespace std;
void main()
{
	int d, i, j;
	cout << "nhap vao d, r : ";
	cin >> d; cin.ignore();
	for (j = 1; j <=d; j++)
	{
		for (i = d; i >=1; i--)
		{
			if (j == d || j == d - i + 1 || i == d) cout << "* ";
			else cout << "  ";
		}
		cout << "\n";
	}
	cin.get();
}