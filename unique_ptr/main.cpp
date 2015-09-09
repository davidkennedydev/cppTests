#include <memory>
#include <iostream>
using namespace std;

class Interface {
	public:
		virtual void print() const = 0;
};

class Implementation : public Interface {
	public:
		virtual void print() const {
			cout << typeid(*this).name() << ' ' << __func__ << endl;
		}
};

main() {
	unique_ptr<Interface> abstraction(new Implementation());
	abstraction->print();
}
