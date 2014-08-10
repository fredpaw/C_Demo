#include <iostream>
#include <string>
#include <cstring>

using namespace std;

int main(){
	string str1 = "world";
	string str2;
	strcpy(str2, str1);
	cout << str2;
	system("pause");
	return 0;
}