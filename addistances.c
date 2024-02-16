#include <stdio.h>

struct Distance {
    int feet;
    float inch;
};

struct Distance addDistances(struct Distance d1, struct Distance d2) {
    struct Distance result;
    result.feet = d1.feet + d2.feet;
    result.inch = d1.inch + d2.inch;
    while (result.inch >= 12.0) {
        result.inch -= 12.0;
        result.feet++;
    }

    return result;
}

int main() {
    struct Distance distance1, distance2, result;
    scanf("%d %f", &distance1.feet, &distance1.inch);
    scanf("%d %f", &distance2.feet, &distance2.inch);
    result = addDistances(distance1, distance2);
    if (result.inch == (int)result.inch) {
        printf("%d'-%d\"\n", result.feet, (int)result.inch);
    } else {
        printf("%d'-%.1f\"\n", result.feet, result.inch);
    }

    return 0;
}
