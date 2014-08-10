#include <iostream>
#include <string>
#include <sstream>
using namespace std;
int main() {
	string mystr;
	cout << "Input some words:"<<endl;
	getline(cin, mystr);
	cout << mystr<<endl;
	system("pause");
	return 0;
}