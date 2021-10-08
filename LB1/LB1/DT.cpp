#include "DT.h"
#include <iostream>
#include <string>
using namespace std;
DT::DT()
{
	year = 0;
	day = 1;
	month = 1;
	hour = 0;
	minute = 0;
}
DT::DT(short valueday, short valuemonth, short valueyear, short valuehour, short valueminute)
{
	if (valueday < 32 && valueday > 0)
	{
		day = valueday;
	}
	else
	{
		day = 1;
	}
	if (valuemonth < 13 && valuemonth >0)
	{
		month = valuemonth;
	}
	else
	{
		month = 1;
	}
	if (valuehour < 25 && valuehour >= 0)
	{
		hour = valuehour;
	}
	else
	{
		hour = 1;
	}
	if (valueminute < 61 && valueminute >= 0)
	{
		minute = valueminute;
	}
	else
	{
		minute = 1;
	}

	if (valueyear > 0)
	{
		year = valueyear;
	}
	else
	{
		year = 1;
	}
}
DT::DT(const DT& ob)
{
	day = ob.day;
	month = ob.month; 
	year = ob.year;
	hour = ob.hour;
	minute = ob.minute;
}
DT::~DT()
{
	cout << "  Destructing DT "<<endl;
}

void DT::SetDay(int day1) {
	if (day1 > 31 || day1 < 0) { cout << "Error"; }
	else{day = day1;}
}
void DT::SetMonth(int month1) {
	if (month1 > 12 || month1 < 0) { cout << "Error"; }
	else { month = month1; }
}
void DT::SetYear(int year1) {
	if (year1 < 0) { cout << "Error"; }
	else { year = year1; }
}
void DT::SetHour(int hour1) {
	if (hour1 > 24 || hour1<0) { cout << "Error"; }
	else { hour = hour1; }
}
void DT::SetMinute(int minute1) {
	if (minute1 > 24 || minute1 < 0) { cout << "Error"; }
	else { minute = minute1; }
}

int DT::GetDay() { return day; };
int DT::GetMonth() { return month; };
int DT::GetYear() { return year; };
int DT::GetHour() { return hour; };
int DT::GetMinute() { return minute; };

int DT::PlusDay()
{
	//if (!(year / 4 == 0))
	{
		if (month == 2)
		{
			if (day < 28)
				day++;
			else
			{
				day = 0;
				month++;
			}
		}
	//	else
	/*	{
			if (month == 2)
			{
				if (day < 29)
					day++;
				else
				{
					day = 0;
					month++;
				}
			}
		}*/
	}
	 if (month == 1 || month == 3 || month == 5 || month == 7 || month == 8 || month == 10 || month == 12)
	{
		if (day < 31)
			day++;
		else
		{
			day = 1;
			month++;
		}
	}
	if (month == 4 || month == 6 || month == 9 || month == 11)
	{
		if (day < 30)
			day++;
		else
		{
			day = 1;
			month++;
		}
	}
	
	return day;
}
int DT::PlusMonth()
{if (month<12)
	month++;
else
{
	month = 1;
	year++;
}
	return month;
}
int DT::PlusYear()
{
	year++;
	return year;
}
int DT::PlusHour()
{
	if (hour<24)
	hour++;
	else
	{
		hour =0;
		day++;
	}
	return hour;
}
int DT::PlusMinute()
{
	if (minute < 60)
		minute++;
	else
	{
		minute = 0;
		hour++;
	}
	return minute;
}

int DT::MinusDay()
{
	day--;
	return day;
}
int DT::MinusMonth()
{
	month--;
	return month;
}
int DT::MinusYear()
{
	year--;
	return year;
}
int DT::MinusHour()
{
	hour--;
	return hour;
}
int DT::MinusMinute()
{
	minute--;
	return minute;
}

char* DT::SR()
{
	char* stroka= new char[255];
	sprintf_s(stroka,25, "%d.%d.%d.%d.%d", minute, hour, day, month, year);
	return stroka;
}