#include<iostream>
using namespace std;
int main(){

	double var1, var2;
	cout << "Please enter first number: ";
	cin >> var1;
	cout << "Please enter second number: ";
	cin >> var2;

	cout << "What would you like to do? Add(1), Subtract(2), Multiply(3), or divide(4)?" << endl;
	int operation;
	cin >> operation;

	switch(operation){
		case 1:{
			cout << (var1 + var2) << endl;
			break;
		}
		case 2:{
			cout << (var1 - var2) << endl;
			break;
		}
		case 3:{
			cout << (var1 * var2) << endl;
			break;
		}
		case 4:{
			cout << (var1 / var2) << endl;
			break;
		}
		default:{
			cout << "You did not select a correct operation" << endl;  
		}
	}
	return 0;
 
}