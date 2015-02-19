#include <iostream>
using namespace std;

class First {
	public:
	void operationA() {
		cout << "first: operationA call" << endl;
	}
};

class Second {
	public:
	void operationB() {
		cout << "second: operationB call" << endl;
	}
};

class FirstAndSecond : public First, public Second {
};

main() {
	FirstAndSecond obj;
	obj.operationA();
	obj.operationB();
}
