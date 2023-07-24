#include <iostream>
using namespace std;
class Time {
private:
    int hour;
    int min;
    int sec;

public:
    Time() : hour(0), min(0), sec(0) {}

    void read() {
        cout << "Enter time (hours minutes seconds): "<<endl;
        cin >> hour >> min >> sec;
    }

    void display() const {
        cout << hour << "h " << min << "m " << sec << "s";
    }

    Time add(const Time& t) const {
        Time sum;
        sum.sec = sec + t.sec;
        sum.min = min + t.min + sum.sec / 60;
        sum.sec %= 60;
        sum.hour = hour + t.hour + sum.min / 60;
        sum.min %= 60;
        return sum;
    }

    Time difference(const Time& t) const {
        Time diff;
        int totalSec1 = sec + min * 60 + hour * 3600;
        int totalSec2 = t.sec + t.min * 60 + t.hour * 3600;
        int diffSec = totalSec1 - totalSec2;

        if (diffSec >= 0) {
            diff.hour = diffSec / 3600;
            diffSec %= 3600;
            diff.min = diffSec / 60;
            diff.sec = diffSec % 60;
        } else {
            // When the difference is negative, swap the times and calculate the difference again.
            diff = t.difference(*this);
            diff.hour = -diff.hour;
            diff.min = -diff.min;
            diff.sec = -diff.sec;
        }

        return diff;
    }
};

int main() {
    Time t1, t2;

    cout << "Enter time 1:" << endl;
    t1.read();

    cout << "Enter time 2:" << endl;
    t2.read();

    Time sum = t1.add(t2);
    Time diff = t1.difference(t2);

    cout << "Sum of times: ";
    sum.display();
    cout << endl;

    cout << "Difference between times: ";
    diff.display();
    cout << endl;

    return 0;
}
