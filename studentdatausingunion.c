#include <stdio.h>

union Student {
    char grade;
    char s[20];
    float mark;
    int fees;
};

int main() {
    union Student std;
    scanf(" %c", &std.grade);
    printf("Grade is: %c\n", std.grade);
    scanf(" %s", std.s);
    printf("Rollno is: %s\n", std.s);
    scanf(" %f", &std.mark);
    if (((int)std.mark) * 100 != (int)(std.mark * 100)) 
        printf("Mark is: %.2f\n", std.mark);
    else
        printf("Mark is: %d\n", (int)std.mark);
    scanf(" %d", &std.fees); // Corrected std.fee to std.fees
    printf("Fees paid is: %d\n", std.fees);
    return 0;
}
