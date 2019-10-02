#include "fqueue.h"

fqueue::fqueue(int s)
	: size(s), ifront(0), iback(-1), count(0)
{
	parray = new int[size];
}

fqueue::~fqueue() {
	delete [] parray;
}

bool fqueue::empty() const {
	return count == 0;

}

bool fqueue::full() const {
	return count == size;
}

int fqueue::length() const{
	return count;
}