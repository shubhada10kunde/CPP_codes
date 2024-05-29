#include <iostream>
#include "TimeDate.hpp"
using namespace std;

Time::Time(int hr = 0, int min = 0, int sec = 0)
{
    hours = hr;
    minutes = min;
    seconds = sec;
}

Time Time::operator+(Time const &t)
{
    Time sum;
    sum.seconds = seconds + t.seconds;
    sum.minutes = minutes + t.minutes + sum.seconds / 60;
    sum.hours = hours + t.hours + sum.minutes / 60;
    sum.minutes %= 60;
    sum.hours %= 24;
    sum.seconds %= 60;

    if (sum.hours >= 24)
    {
        sum.hours -= 24;
        sum = sum + 1;
    }
    return sum;
}
void Time::display()
{
    cout << "Time: " << hours << ":" << minutes << ":" << seconds << ":" << endl;
}

Date::Date(int d, int m, int y)
{
    day = d;
    month = m;
    year = y;
}

Date Date::operator+(const int &dt)
{
    Date sum = *this;
    sum.day += dt;
    return sum;
}
void Date::display()
{
    cout << "Date:" << day << "-" << month << "-" << year << endl;
}