#include <iostream>

class Time {
private:
    int hour;
    int minute;
    int second;
    int day;

public:
    Time(int h, int m, int s, int d) {
        hour = h;
        minute = m;
        second = s;
        day = d;
    }

    void addTime(Time otherTime) {
        int totalSeconds = second + otherTime.second;
        int extraMinutes = totalSeconds / 60;
        int remainingSeconds = totalSeconds % 60;

        int totalMinutes = minute + otherTime.minute + extraMinutes;
        int extraHours = totalMinutes / 60;
        int remainingMinutes = totalMinutes % 60;

        int totalHours = hour + otherTime.hour + extraHours;
        int extraDays = totalHours / 24;
        int remainingHours = totalHours % 24;

        int totalDays = day + otherTime.day + extraDays;

        std::cout << "Total time: " << totalDays << " days, " << remainingHours << " hours, " << remainingMinutes << " minutes, " << remainingSeconds << " seconds" << std::endl;
    }
};

int main() {
    // Creating two Time objects and adding them
    Time time1(12, 30, 45, 2);
    Time time2(30, 15, 20, 1);

    time1.addTime(time2);

    return 0;
}
