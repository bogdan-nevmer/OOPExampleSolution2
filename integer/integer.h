#include<iostream>


class integer {
private:
	int value;

public:
	integer();
	integer(int val);
	integer(const integer & obj);

	int getValue()const;
	void setValue(int val);

	integer add(const integer& other)const;
	integer substract(const integer& other)const;
	integer multiply(const integer& other)const;
	integer divide(const integer& other)const;


	integer operator+(const integer& other)const;
	integer operator-(const integer& other)const;
	integer operator*(const integer& other)const;
	integer operator/(const integer& other)const;

	void print() const;

};