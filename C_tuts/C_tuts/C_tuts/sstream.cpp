#include <iostream>
#include <string>
#include <sstream>
using namespace std;

int main(){
	string mystr;
	float price;
	int quantity;

	cout << "Please Enter Price: ";
	getline(cin, mystr);
	stringstream(mystr) >> price;
	cout << "Please Enter Quantity: ";
	getline(cin, mystr);
	stringstream(mystr) >> quantity;
	cout << "Total Price: " << price*quantity << endl;
	system("pause");
	return 0;
}