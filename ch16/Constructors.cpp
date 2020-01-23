#include <iostream>

using namespace std;

class Data {
    private:
        int d, m, y;
    public:
        Data(int dd, int mm, int yy);
        void show_Data();
};

Data::Data(int dd, int mm, int yy) {
    d = dd;
    m = mm;
    y = yy;
}

void Data::show_Data() {
    cout << "dd: " << d << endl;
    cout << "mm: " << m << endl;
    cout << "yy: " << y << endl;
}

int main() {

    Data today {25, 12, 1990};
    today.show_Data();

    return 0;
}
