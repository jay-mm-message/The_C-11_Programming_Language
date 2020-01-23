#include <iostream>

using namespace std;

class Date {
    private:
        int d, m, y;
    public:
        Date(int dd, int mm, int yy);
        void show_Date();
        int day() const { return d; };
        int month() const { return m; };
        int year() const { return y; };
};

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
    //today.show_Date();

    cout << "Day: " << today.day() << endl;
    cout << "Month: " << today.month() << endl;
    cout << "Year: " << today.year() << endl;
    return 0;
}
