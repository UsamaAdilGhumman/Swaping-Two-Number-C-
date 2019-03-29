#include<iostream>
using namespace std;
void swapWithOutThirdVariable(int &n1, int &n2)
{
	cout << "Before Swaping " << n1 << " " << n2 << endl;
	n1 = n1 + n2;
	n2 = n1 - n2;
	n1 = n1 - n2;
	cout << "After Swaping " << n1 << " " << n2 << endl;
}
void swapWithThirdVariable(int &n1, int &n2)
{
	cout << "Before Swaping " << n1 << " " << n2 << endl;
	int temp = n1;
	n1 = n2;
	n2 = temp;
	cout << "After Swaping " << n1 << " " << n2 << endl;
}
void display()
{
	cout << "1. Swap WithOut Third Variable " << endl;
	cout << "2. Swap With Third Variable " << endl;
	cout << "Enter Choice : ";
}
int main()
{
	int choice;
	display();
	cin >> choice;
	switch (choice)
	{
	case 1:
	{
			  int Num1, Num2;
			  cout << "Enter Number 1 : ";
			  cin >> Num1;
			  cout << "Enter Number 2 : ";
			  cin >> Num2;
			  swapWithOutThirdVariable(Num1, Num2);
			  break;
	}
	case 2:
	{
			  int Num1, Num2;
			  cout << "Enter Number 1 : ";
			  cin >> Num1;
			  cout << "Enter Number 2 : ";
			  cin >> Num2;
			  swapWithThirdVariable(Num1, Num2);
			  break;
	}
	default:
		break;
	}
}