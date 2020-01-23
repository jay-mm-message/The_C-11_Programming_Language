#include <iostream>

using namespace std;

class Date {
    private:
        int d, m, y;
    public:
        //建構式帶有關建字 explicit 表示建構式只能進行初始化和顯示型別轉和
        // Date d1 {15};, Date d2 = Date{15}; , Date d3 = {15}; , Date d4 = 15;
        explicit Date(int dd, int mm, int yy);
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
