#include<iostream>
#include"Date.h"

using namespace std;


Date::Date(int d ,int m,int y):day(d), month(m), year(y)
{

}
int Date::getDay() const
{
	return day;
}
int Date::getMonth() const
{
	return month;
}
int Date::getYear() const
{
	return year;
}