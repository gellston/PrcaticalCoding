#pragma once


class staticObject {
public:
	staticObject() {

	}

	~staticObject() {

	}

};

class niftyCounter {
private:
	static int count;
	static staticObject* _staticObject;

public:

	niftyCounter();
	~niftyCounter();

};