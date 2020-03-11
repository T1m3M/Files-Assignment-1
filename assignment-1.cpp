#include <iostream>
#include <fstream>

using namespace std;

class Datetime
{
private:
    int day, month, year;

public:

    Datetime():day(0), month(0), year(0){}

    /// setters
    void setDay(int d) { day = d; }
    void setMonth(int m) { month = m; }
    void setYear(int y) { year = y; }

    /// getters
    int getDay() { return day; }
    int getMonth() { return month;}
    int getYear() { return year;}


};

class Student
{
private:
    int StudentId;
    char StudentName[100];
    float GPA;
    Datetime StudentDOB;
    int level;
};

int main(){

    return 0;
}
