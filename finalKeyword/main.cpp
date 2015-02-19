#include <iostream>
using namespace std;

class First {
	public:
	virtual void overwrite() final {
		cout << "first: overwrite call" << endl;
	}
};

class Second : public First {
	public:
	void overwrite() {
		cout << "second: overwrite call" << endl;
	}
};

main() {
	First *obj = new Second();
	obj->overwrite();
	delete obj;
}
