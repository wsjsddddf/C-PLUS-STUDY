#include <iostream>
using namespace std;

int main() {
	int num;
	char ch;

	while(true){
	cin >> num;
		if(cin.good())
		{
			cout << "����" << endl;
			break;
		}

		if(cin.fail()){
			cout << "!!!" << endl;
			cin.clear();
			cin.ignore(10, '\n'); // ->�Է¹��� �����
		}
	}

}