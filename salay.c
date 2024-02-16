#include <stdio.h>

int main() {
    // Declare variables
    int hours[7];
    int salary = 0;

    // Input the number of hours worked each day
    for (int i = 0; i < 8; i++) {
        scanf("%d", &hours[i]);
    }

    // Calculate salary for each day
    for (int i = 0; i < 8; i++) {
        // Base salary for regular hours
        salary += hours[i] * 100;
        
        // Bonus for working more than 8 hours
        if (hours[i] > 8) {
            salary += (hours[i] - 8) * 15;
        }
        
        // Bonus for working on Saturday (25%)
        if (i == 6) {
            salary += hours[i] * 100 * 0.25;
        }
        
        // Bonus for working on Sunday (50%)
        if (i == 0) {
            salary += hours[i] * 100 * 0.5;
        }
    }

    // Output John's salary for the week
    printf("%d\n", salary);

    return 0;
}
