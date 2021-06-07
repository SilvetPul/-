#include<iostream>
#include<cstring>
#include<stdlib.h>
#include"DateTime.h"
#pragma warning(disable : 4996)

using namespace std;

DateTime::DateTime(int d, int m, int y, int h, int mn, int s) : Date(d, m, y), Time(h, mn, s)
{
	char temp[10];
	strcpy(dateTimeString, itoa(getMonth(), temp, 10));
	strcat(dateTimeString, "/");
	strcat(dateTimeString, itoa(getDay(), temp, 10));
	strcat(dateTimeString, "/");
	strcat(dateTimeString, itoa(getYear(), temp, 10));
	strcat(dateTimeString, "/");
	strcat(dateTimeString, " ");

	strcat(dateTimeString, itoa(getHour(), temp, 10));
	strcat(dateTimeString, ":");
	strcat(dateTimeString, itoa(getMin(), temp, 10));
	strcat(dateTimeString, ":");
	strcat(dateTimeString, itoa(getSec(), temp, 10));
	strcat(dateTimeString, " ");
}

char* DateTime::getDateTime()
{
	return dateTimeString;
}
