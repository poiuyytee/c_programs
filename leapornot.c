#include <stdio.h>

// Function to check if a year is a leap year
int isLeapYear(int year) {
    if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0)) {
        return 1; // Leap year
    } else {
        return 0; // Not a leap year
    }
}

int main() {
    int year, month;

    // Taking input
    scanf("%d%d", &year, &month);

    // Checking if the year is within the given range
    if (year < 1900 || year > 9999) {
        printf("0\n");
    } else {
        // Array to store the number of days in each month
        int daysInMonth[] = {0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};

        // Checking if it's a leap year and updating February days
        if (isLeapYear(year)) {
            daysInMonth[2] = 29;
        }

        // Checking if the month is within the given range
        if (month >= 1 && month <= 12) {
            printf("%d Days\n", daysInMonth[month]);
        } else {
            printf("0\n");
        }
    }

    return 0;
}
