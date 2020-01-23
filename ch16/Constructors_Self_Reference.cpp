#include <iostream>

using namespace std;

class Date {
    private:
        int d, m, y;
    public:
        Date(int dd = 0, int mm = 0, int yy = 0);
        void show_Date();

        Date& add_day(int dd = 0);
        Date& add_month(int mm = 0);
        Date& add_year(int yy = 0);
};

Date& Date::add_day(int dd) {

    this->d += dd;

    if ( this->m % 2 == 0 ) {
        if ( this->d > 30 ) {
            this->m += 1;
            this->d -= 30;
        }
    } else {
        if ( this->d > 31 ) {
            this->m += 1;
            this->d -= 31;
        }
    }
    return *this;
}

Date& Date::add_month(int mm) {

    this->m += mm;

    if ( this->m > 12 )
        this->m -= 12;

    return *this;
}

Date& Date::add_year(int yy) {

    this->y += yy;

    return *this;
}

Date::Date(int dd, int mm, int yy) {
    d = dd;
    m = mm;
    y = yy;
}

void Date::show_Date() {
    cout << "dd: " << d << endl;
    cout << "mm: " << m << endl;
    cout << "yy: " << y << endl;
}

int main() {

    Date today {25, 12, 1990};
    today.show_Date();

    cout << "\ntoday.add_day(31).add_month(2).add_year(11);\n" << endl;
    today.add_day(31).add_month(2).add_year(11);
    today.show_Date();

    return 0;
}
