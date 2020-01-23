#include <iostream>

using namespace std;

class Date {
    private:
        int d, m, y;
    public:
        //養成初始賦值的好習慣
        Date(int dd = 0, int mm = 0, int yy = 0);
        void show_Date();
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
    today.show_Date();

    return 0;
}
