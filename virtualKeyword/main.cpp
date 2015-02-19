#include <iostream>
using namespace std;

class First {
	public:
	virtual void polimorphic() {
		cout << "first: polimorphic call" << endl;
	}
	void overwrite() {
		cout << "first: overwrite call" << endl;
	}
};

class Second : public First {
	public:
	virtual void polimorphic() {
		cout << "second: polimorphic call" << endl;
	}
	void overwrite() {
		cout << "second: overwrite call" << endl;
	}
};

main() {
	First *obj = new Second();
	obj->polimorphic();
	obj->overwrite();
	delete obj;
}
