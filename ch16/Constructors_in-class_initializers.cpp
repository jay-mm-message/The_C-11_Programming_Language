#include <iostream>

using namespace std;

class Date {
    private:
        int d, m, y;
    public:
        Date(int dd, int mm, int yy);
        void show_Date();
};

Date::Date(int dd, int mm, int yy) : d {dd}, m {mm}, y {yy} {
}

void Date::show_Date() {
    cout << "dd: " << d << endl;
    cout << "mm: " << m << endl;
    cout << "yy: " << y << endl;
}

int main() {

    Date today {25, 12, 1990};
    today.show_Date();

    return 0;
}
