#include <iostream>
#include "DT.h"
#include "Test.h"
using namespace std;

int main()
{
	setlocale(LC_ALL, "ru");
	Test t = Test();
	t.TestPlus();
	t.TestExcep();
	t.TestMinus();
}
