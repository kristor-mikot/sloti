#pragma once
#include <iostream>
#include <windows.h>
#include "Vrash.h"
using namespace std;
class Vrash
{
private:
	int *baraban;
	int Max_lenght;
	int lenght;
	int slot1;
	int slot2;
	int slot3;
public:
	Vrash(int max);
	~Vrash();
	void Clear();
	bool Empty();
	bool Full();
	void vrash();
	void _rand();
};

