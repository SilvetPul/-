#ifndef TIME_H
#define TIME_H

class Time
{
public:
	Time(int,int,int);
	int getHour() const;
	int getMin() const;
	int getSec() const;

private:
	int hour;
	int min;
	int sec;

};



#endif
