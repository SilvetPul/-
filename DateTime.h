#ifndef DATETIME_H
#define DATETIME_H
#include"Date.h"
#include"Time.h"

class DateTime : public Date, public Time
{
public:
	DateTime(int, int, int, int, int, int);
	char* getDateTime();

private:
	char dateTimeString[20];

};




#endif
