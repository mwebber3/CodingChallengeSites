#include <iostream>

int main() {
    int hour, minute, minuteRemainder, finalHour, finalMinute;

    std::cin >> hour >> minute;

    if (minute >= 45) {
        finalMinute = (minute - 45);
        finalHour = hour;
    } else {
        minuteRemainder = (45 - minute);
        finalMinute = (60 - minuteRemainder);
        if (hour == 0) {
            finalHour = 23;
        } else {
            finalHour = (hour - 1);
        }
    }
    std::cout << finalHour << " " << finalMinute;
}