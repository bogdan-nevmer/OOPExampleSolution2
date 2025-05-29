#pragma once
class integer
{private:
	int value;
public:
	integer() :value(0) {}
	integer(int value) :value(value) {}

	int getValue() { return value; }
	void setValue(int value) {this->value = value;}

	integer sum()
};

