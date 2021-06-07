#include<iostream>
#include"Time.h"

using namespace std;

Time::Time(int h, int m, int s) :hour(h), min(m), sec(s)
{

}
int Time::getHour() const
{
	return hour;
}
int Time::getMin() const
{
	return min;
}
int Time::getSec() const
{
	return sec;
}
