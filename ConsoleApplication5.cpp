// ConsoleApplication5.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"

#include <iostream>
#include <string>
using namespace std;


void myFunction(int counter)
{
	if (counter == 0)
		return;
	else
	{
		cout << counter << endl;
		myFunction(--counter);
		return;
	}
}

int main()
{
	myFunction(5);     
}