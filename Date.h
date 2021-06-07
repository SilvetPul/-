#ifndef DATE_H
#define DATE_H

class Date
{
public:
	Date(int,int,int);

	int getDay() const;
	int getMonth() const;
	int getYear() const;

private:
	int day;
	int month;
	int year;

};





#endif
