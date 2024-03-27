#include <stdio.h>

// Function to find the day of the week for a given date
// The function returns 0 for Sunday, 1 for Monday, and so on.
int dayOfWeek(int d, int m, int y) {
    static int t[] = {0, 3, 2, 5, 0, 3, 5, 1, 4, 6, 2, 4};
    y -= m < 3;
    return (y + y/4 - y/100 + y/400 + t[m-1] + d) % 7;
}

// Function to print the calendar for a given month and year
void printCalendar(int month, int year) {
    int daysInMonth, i, j, day;
    
    // Array to store the names of the months
    char *months[] = {"January", "February", "March", "April", "May", "June",
                      "July", "August", "September", "October", "November", "December"};
    
    // Array to store the number of days in each month
    int days[] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    
    // Check for leap year
    if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0))
        days[1] = 29;
    
    daysInMonth = days[month - 1];
    
    // Print the header
    printf("\n-----------------------------\n");
    printf("    %s %d\n", months[month - 1], year);
    printf("-----------------------------\n");
    printf(" Sun Mon Tue Wed Thu Fri Sat\n");
    
    // Calculate the starting day of the month
    day = dayOfWeek(1, month, year);
    
    // Print spaces until the starting day
    for (i = 0; i < day; i++)
        printf("    ");
    
    // Print the days of the month
    for (i = 1; i <= daysInMonth; i++) {
        printf("%4d", i);
        
        // Move to the next line if it's Saturday
        if (++day > 6) {
            printf("\n");
            day = 0;
        }
    }
    
    printf("\n\n");
}

int main() {
    int month, year;
    
    // Prompt the user to enter the month and year
    printf("Enter the month (1-12): ");
    scanf("%d", &month);
    printf("Enter the year: ");
    scanf("%d", &year);
    
    // Print the calendar for the given month and year
    printCalendar(month, year);
    
    return 0;
}
