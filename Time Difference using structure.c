#include <stdio.h>
struct Time {
    int hours;
    int minutes;
    int seconds;
};
struct Time difference(struct Time t1, struct Time t2) {
    struct Time diff;
    if (t2.seconds > t1.seconds) {
        t1.minutes--;
        t1.seconds += 60;
    }
    diff.seconds = t1.seconds - t2.seconds;
    if (t2.minutes > t1.minutes) {
        t1.hours--;
        t1.minutes += 60;
    }
    diff.minutes = t1.minutes - t2.minutes;
    diff.hours = t1.hours - t2.hours;
    return diff;
}
int main() {
    struct Time time1, time2, diff;
    scanf("%d", &time1.hours);
    scanf("%d", &time1.minutes);
    scanf("%d", &time1.seconds);
    scanf("%d", &time2.hours);
    scanf("%d", &time2.minutes);
    scanf("%d", &time2.seconds);
    diff = difference(time1, time2);  
    printf("TIME DIFFERENCE: %d:%d:%d - %d:%d:%d = %d:%d:%d\n", 
           time1.hours, time1.minutes, time1.seconds, 
           time2.hours, time2.minutes, time2.seconds, 
           diff.hours, diff.minutes, diff.seconds);
    return 0;
}
