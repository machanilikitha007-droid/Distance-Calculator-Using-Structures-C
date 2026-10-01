#include <stdio.h>

struct Distance {
    int feet;
    float inches;
};

int main() {
    struct Distance d1, d2, total;

    printf("===== Distance Calculator =====\n");

    printf("\nEnter first distance\n");
    printf("Feet: ");
    scanf("%d", &d1.feet);
    printf("Inches: ");
    scanf("%f", &d1.inches);

    printf("\nEnter second distance\n");
    printf("Feet: ");
    scanf("%d", &d2.feet);
    printf("Inches: ");
    scanf("%f", &d2.inches);

    total.feet = d1.feet + d2.feet;
    total.inches = d1.inches + d2.inches;

    if (total.inches >= 12) {
        total.feet += (int)(total.inches / 12);
        total.inches = total.inches - ((int)(total.inches / 12) * 12);
    }

    printf("\n----- Total Distance -----\n");
    printf("Feet: %d\n", total.feet);
    printf("Inches: %.2f\n", total.inches);

    return 0;
}
