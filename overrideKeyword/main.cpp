#include <iostream>
using namespace std;

class First {
	public:
};

class Second : public First {
	public:
	void overwrite() override {
		cout << "second: overwrite call" << endl;
	}
};

main() {
	First *obj = new Second();
	obj->overwrite();
	delete obj;
}
