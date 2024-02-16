#include <stdio.h>

int main() {
    int age, yearOfPassing, familyIncome, standingArrears;
    float scholarshipTestMarks, attendancePercentage;
    scanf("%d %d %d %d %f %f", &age, &yearOfPassing, &familyIncome, &standingArrears, &scholarshipTestMarks, &attendancePercentage);
  if(yearOfPassing<2021)
    return 0;
  if (standingArrears <= 2 &&
        familyIncome <= 200000 &&
        age >= 18 && age <= 21 &&
        scholarshipTestMarks >= 60.0 &&
        attendancePercentage >= 80.0) {
        printf("Eligible\n");
    } else if (standingArrears > 2 &&
               scholarshipTestMarks >= 80.0 &&
               attendancePercentage >= 90.0 &&  familyIncome >= 200000 &&  familyIncome <= 250000 ) {
       
        printf("Partially Eligible\n");
    } else {
        printf("Not Eligible\n");
    }

    return 0;
}
