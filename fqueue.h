#pragma once

class fqueue {
private:
	int* parray;
	int size; // capacity of the array
	int ifront;
	int iback;
	int count; // # of data
public:
	fqueue(int);
	~fqueue();
	bool empty() const;
	bool full() const;
	int length() const;
	void push(int);
	

};