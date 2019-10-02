#include <iostream>
#include <cassert>
using namespace std;
#include "fqueue.h"

int main(){
	fqueue q(10);
	assert(q.empty());
	assert(!q.full());
	assert(q.length() == 0);

	q.push(20);
	assert(!q.empty());
	assert(q.length() == 1);

}