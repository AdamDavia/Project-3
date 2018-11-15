/*	Project:    Cash Register Program
	Name:       Adam Davis
    Partner:    N/A
    Class:      CSC 1810 - section 1
*/

#include <iostream>

using namespace std;

int main(int argc, char *argv[])
{
	{
		float Change;
		float Price = 0;
		string customer1;
		string answer = "yes";
		float Paid = 0;
		int hundreds = 0;
		int fiddys = 0;
		int twenty = 0;
		int ten = 0;
		int five = 0;
		int one = 0;
		int halfdollar = 0;
		int quarter = 0;
		int dime = 0;
		int nickle = 0;
		int penny = 0;

		cout << "Name can not be more than 15 characters or less than 2 characters." << endl;
		cout << "Enter Consumer name:";
		cin >> customer1;
		cout << endl;
		if (customer1.size() > 15 || customer1.size() < 2)
		{
			cout << "Name Invaild. Please try again." << endl;

			cout << "Enter Consumer name:";
			cin >> customer1;
			cout << endl;

			if (customer1.size() > 15 || customer1.size() < 2)
			{
				cout << "Name Invaild. Please try again." << endl;

				cout << "Enter Consumer name:";
				cin >> customer1;
				cout << endl;

				if (customer1.size() > 15 || customer1.size() < 2)

				{
					cout << "User is unable to enter accurate name. Guest name assigned." << endl;
					customer1 = "Guest";
				}
			}
		}
		while (answer == "yes")
		{
			answer = "no";
			cout << "Item Price:";
			cin >> Price;
			cout << endl;

			cout << "Amount Paid:";
			cin >> Paid;
			cout << endl;

			Change = Paid - Price;

			if (Change == 0)
			{
				cout << "No change. Have a nice day." << endl;
			}
			if (Change < 0)
			{
				cout << "Plese pay the expected amount." << endl;
			}
			if (Change > 0)
			{

				hundreds = Change / 100;
				Change = Change - (hundreds * 100);
				fiddys = Change / 50;
				Change = Change - (fiddys * 50);
				twenty = Change / 20;
				Change = Change - (twenty * 20);
				ten = Change / 10;
				Change = Change - (ten * 10);
				five = Change / 5;
				Change = Change - (five * 5);
				one = Change / 1;
				Change = Change - (one * 1);
				halfdollar = Change / .5;
				Change = Change - (halfdollar * .5);
				quarter = Change / .25;
				Change = Change - (quarter * .25);
				dime = Change / .10;
				Change = Change - (dime * .10);
				nickle = Change / .05;
				Change = Change - (nickle * .05);
				penny = Change / .01;
				Change = Change - (penny * .01);
			}
			cout << "Sale:" << endl
				 << endl;
			cout << "Customer: " << customer1 << endl;
			cout << "Price   : " << Price << endl;
			cout << "Paid    : " << Paid << endl;
			cout << "Change  : " << Paid - Price << endl;
			cout << "Change Needed:" << endl;
			cout << "Hundreds: " << hundreds << endl;
			cout << "Fiftys  : " << fiddys << endl;
			cout << "Twenties: " << twenty << endl;
			cout << "Tens    : " << ten << endl;
			cout << "Fives   : " << five << endl;
			cout << "Ones    : " << one << endl;
			cout << "Quarters: " << quarter << endl;
			cout << "Dimes   : " << dime << endl;
			cout << "Nickles : " << nickle << endl;
			cout << "Pennies : " << penny << endl
				 << endl;

			cout << "Would you like to perform another sale? Type yes or no:" << endl;
			cin >> answer;
		}
		{
			cin.clear();
			cin.ignore(1000, '\n');
			char c;
			cout << "Hit enter to exit:";
			cin.get(c);
			return 0;
		}
	}
}
