
#include "niftyCounter.h"


#include <iostream>



int niftyCounter::count = 0;
staticObject* niftyCounter::_staticObject = nullptr;

niftyCounter::niftyCounter() {
	if (niftyCounter::count++ == 0) {
		niftyCounter::_staticObject = new staticObject();
		std::cout << "static object created" << std::endl;
	}

}

niftyCounter::~niftyCounter() {
	if (--niftyCounter::count == 0) {
		delete niftyCounter::_staticObject;
		niftyCounter::_staticObject = nullptr;
		std::cout << "static object deleted" << std::endl;
	}
}