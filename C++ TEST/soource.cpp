#include <iostream>
using namespace std;

int main() {
	int num;
	char ch;

	while(true){
	cin >> num;
		if(cin.good())
		{
			cout << "정상" << endl;
			break;
		}

		if(cin.fail()){
			cout << "!!!" << endl;
			cin.clear();
			cin.ignore(10, '\n'); // ->입력버퍼 비워줌
		}
	}

}