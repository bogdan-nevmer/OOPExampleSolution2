#include "Group.h"

Group::Group() : Group(20) {
}

Group::Group(int capacity) {
	this->capacity = capacity;
	list = new Student[capacity];
	count = 0;
}

Group::Group(Student* list, int count) {
	if (count > 0 && list != nullptr) {
		this->count = count;
		list = new Student[count];
	
			for (int i = 0; i < count; i++)
			{
				this->list[i] = list[i];
			}
	}
}

Group::~Group() {
	if (list != nullptr) {
		delete[] list;
	}
}

Student Group::get(int index);
void Group::set(int index, Student student);
int Group::getCount();
void Group::add(Student student);
void Group::add(int index, Student student);
void Group::remove(Student student);
void Group::remove(int index);
void Group::clear();
bool Group::isEmpty();
string Group::toString();