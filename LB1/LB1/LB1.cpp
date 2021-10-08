#include <iostream>
#include "DT.h"
#include "Test.h"
using namespace std;

int main()
{
	setlocale(LC_ALL, "ru");
	Test t = Test();
	/*t.TestPlus();
	t.TestExcep();
	t.TestMinus();*/
    //t.TestСonversion31Day();
	//DT a = DT(28, 2, 1, 1, 1);
	//a.PlusDay();
	DT a = DT(31, 1, 1, 1, 1);
	a.PlusDay();
	cout << a.SR();
	DT b = DT(31, 3, 1, 1, 1);
	b.PlusDay();
	cout << a.SR();
	DT c = DT(31, 5, 1, 1, 1);
	c.PlusDay();
	
	DT d = DT(31, 7, 1, 1, 1);
	d.PlusDay();
	
	DT f = DT(31, 8, 1, 1, 1);
	f.PlusDay();
	
	DT g = DT(31, 10, 1, 1, 1);
	g.PlusDay();
	
	//cout << a.SR();


}
