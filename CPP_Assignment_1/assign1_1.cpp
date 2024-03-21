#include <stdio.h>

// Structure to represent a date
struct Date {
    int day;
    int month;
    int year;
};

// Function to initialize date
void initDate(struct Date* ptrDate) {
    ptrDate->day = 0;
    ptrDate->month = 0;
    ptrDate->year = 0;
}

// Function to print date on console
void printDateOnConsole(struct Date* ptrDate) {
    printf("Date: %02d/%02d/%04d\n", ptrDate->day, ptrDate->month, ptrDate->year);
}

// Function to accept date from console
void acceptDateFromConsole(struct Date* ptrDate) {
    printf("Enter day, month, and year (in format dd mm yyyy): ");
    scanf("%d %d %d", &(ptrDate->day), &(ptrDate->month), &(ptrDate->year));
}

int main() {
    struct Date date;
    int choice;

    initDate(&date);

    do {
        printf("\nMenu:\n");
        printf("1. Initialize Date\n");
        printf("2. Print Date\n");
        printf("3. Accept Date\n");
        printf("4. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                initDate(&date);
                printf("Date initialized.\n");
                break;
            case 2:
                if (date.day == 0 || date.month == 0 || date.year == 0) {
                    printf("Date not initialized. Please initialize date first.\n");
                } else {
                    printDateOnConsole(&date);
                }
                break;
            case 3:
                acceptDateFromConsole(&date);
                break;
            case 4:
                printf("Exiting...\n");
                break;
            default:
                printf("Invalid choice. Please enter a valid choice.\n");
        }
    } while (choice != 4);

    return 0;
}
