#include <stdio.h>

int main() {
    int month, room_rent, days_stayed;

    // Taking input
    scanf("%d%d%d", &month, &room_rent, &days_stayed);

    // Checking if the month value is valid (1-12)
    if (month < 1 || month > 12) {
        printf("Invalid Input\n");
    } else {
        // Checking if the month is in the peak season
        if ((month >= 4 && month <= 6) || (month >= 11 && month <= 12)) {
            // Applying a 20% increase in room rent during peak season
            int hotel_tariff = room_rent * days_stayed * 120 / 100;
            printf("%d\n", hotel_tariff);
        } else {
            // No increase in room rent during other months
            int hotel_tariff = room_rent * days_stayed;
            printf("%d\n", hotel_tariff);
        }
    }

    return 0;
}
