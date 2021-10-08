#include "Test.h"
#include "DT.h"
#include <iostream>
#include <cassert>
void Test::TestPlus()
{
	DT a = DT(1,1,1,1,1);
	assert(a.PlusDay()==2);
	assert(a.PlusHour() == 2);
	assert(a.PlusMinute() == 2);
	assert(a.PlusMonth() == 2);
	assert(a.PlusYear() == 2);
	cout << "TestPlus completed";
}
void Test::TestMinus()
{
	DT a = DT(2, 2, 2, 2, 2);
	assert(a.MinusDay() == 1);
	assert(a.MinusHour() == 1);
	assert(a.MinusMinute() == 1);
	assert(a.MinusMonth() == 1);
	assert(a.MinusYear() == 1);
	cout << "TestMinus completed";
}
void Test::TestExcep()
{
	DT a = DT(0, -1, 0, -1, -1);
	assert(a.GetDay() == 1);
	assert(a.GetMonth() == 1);
	assert(a.GetHour() == 1);
	assert(a.GetMinute() == 1);
	assert(a.GetYear() == 1);
	cout << "TestExcep completed";
}
void Test::TestÑonversion28Day()
{
	DT a = DT(28, 2, 1, 1, 1);
	assert(a.PlusDay() == 1);
	assert(a.GetMonth()==3);
	cout << "TestÑonversion28Day completed";
}
void Test::TestÑonversion30Day()
{
	DT a = DT(30, 4, 1, 1, 1);
	assert(a.PlusDay() == 1);
	assert(a.GetMonth() == 5);
	DT b = DT(30, 6, 1, 1, 1);
	assert(b.PlusDay() == 1);
	assert(b.GetMonth() == 7);
	DT c = DT(30, 9, 1, 1, 1);
	assert(c.PlusDay() == 1);
	assert(c.GetMonth() == 10);
	DT d = DT(30, 11, 1, 1, 1);
	assert(d.PlusDay() == 1);
	assert(d.GetMonth() == 12);
	cout << "TestÑonversion30Day completed";
}
void Test::TestÑonversion31Day()
{
	DT a = DT(31, 1, 1, 1, 1);
	assert(a.PlusDay() == 1);
	assert(a.GetMonth() == 2);
	DT b = DT(31, 3, 1, 1, 1);
	assert(b.PlusDay() == 1);
	assert(b.GetMonth() == 4);
	DT c = DT(31, 5, 1, 1, 1);
	assert(c.PlusDay() == 1);
	assert(c.GetMonth() == 6);
	DT d = DT(31, 7, 1, 1, 1);
	assert(d.PlusDay() == 1);
	assert(d.GetMonth() == 8);
	DT f = DT(31, 8, 1, 1, 1);
	assert(f.PlusDay() == 1);
	assert(f.GetMonth() == 9);
	DT g = DT(31, 10, 1, 1, 1);
	assert(g.PlusDay() == 1);
	assert(g.GetMonth() == 11);
	cout << "TestÑonversion31Day completed";
}