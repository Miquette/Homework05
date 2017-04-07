#ifndef DATE_H_
#define DATE_H_

class Date
{
private:
	int _year;
	int _month;
	int _day;
public:
	Date()
	{
		time_t seconds = time(0);
		tm *ptm = localtime(&seconds);
		_year = 1900 + ptm->tm_year;
		_month = ptm->tm_mon + 1;
		_day = ptm->tm_mday;
	}

	Date(int timesincespoch)
	{
		time_t seconds = timesincespoch;
		tm *ptm = localtime(&seconds);
		_year = 1900 + ptm->tm_year;
		_month = ptm->tm_mon + 1;
		_day = ptm->tm_mday;
	}

	Date(int yr, int mnth, int dy)
	{
		_year = yr;
		_month = mnth;
		_day = dy;
	}

	Date(const Date& date)
	{
		_year = date._year;
		_month = date._month;
		_day = date._day;
	}

	void setDate(int timesincespoch)
	{
		time_t seconds = timesincespoch;
		tm *ptm = localtime(&seconds);
		_year = 1900 + ptm->tm_year;
		_month = ptm->tm_mon + 1;
		_day = ptm->tm_mday;
	}

	void setDate(const Date& date)
	{
		_year = date._year;
		_month = date._month;
		_day = date._day;
	}

	int getYear() const
	{
		return _year;
	}

	int getMonth() const
	{
		return _month;
	}

	int getDay() const
	{
		return _day;
	}

};


#endif //DATE_H_
