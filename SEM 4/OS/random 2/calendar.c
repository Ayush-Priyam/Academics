#include <stdio.h>
// Function that returns the index of the day for date DD/MM/YYYY
int dayNumber(int day, int month, int year)
{
    static int t[] = {0, 3, 2, 5, 0, 3, 5, 1, 4, 6, 2, 4};
    year -= month < 3;
    return (year + year / 4 - year / 100 + year / 400 + t[month - 1] + day) % 7;
}

// Function for name of the month 0=Jan, 1=Feb and so on
char *getMonthName(int monthNumber)
{
    char *nmonth[] = {"January","February","March", "April", "May","June",
                      "July","August","September","October","November","December"};
    return nmonth[monthNumber];
}

// Function for the number of days in a month
int numberOfDays(int monthNumber, int year)
{
    int ndays[]={31,28,31,30,31,30,31,31,30,31,30,31};
    if (year % 400 == 0 || (year % 4 == 0 && year % 100 != 0))
        ndays[1]=29;
    return ndays[monthNumber];
}

// Function to print the calendar of the given year, month
void printCalendar(int month, int year)
{
    printf("\n\n\t\tCalendar - %d\n\n", year);
    int days, sw;
    //for specific months, introducing a switch. 
    //for month= 0, switch=0 and whole year is printed
    //for some valid month, switch becomes 0 and only that  month is printed
    if(month==0) sw=1;
    else sw=0;
    month = month - 1;
    // Index of the day from 0 to 6
    int current = dayNumber(1, 1, year);
    // i for Iterate through months
    // j for Iterate through days
    // of the month - i
    for (int i = 0; i < 12; i++)
    {
        days = numberOfDays(i, year);
        //Print the current month name
        if (sw == 1 || month == i)
        {
            printf("\n---------------------%s----------------------\n",getMonthName(i));
            // Print the columns
            printf("Sun\tMon\tTue\tWed\tThu\tFri\tSat\n");
        }
        //Print appropriate spaces
        int k;
        for (k = 0; k < current; k++)
            if (sw == 1 || month == i)
                printf("-\t");

        for (int j = 1; j <= days; j++)
        {
            if (sw == 1 || month == i)
                printf("%d\t", j);
            if (++k > 6)
            {
                k = 0;
                if (sw == 1 || month == i)
                    printf("\n");
            }
        }
        if (k)
            if (sw == 1 || month == i)
                printf("\n");

        current = k;
    }
    return;
}
// Driver Code
int main()
{
    int m,y;
    printf("Enter month no, year: ");
    scanf("%d %d", &m, &y);
    int month= 0;
    int year = 2022;
    // Function Call
    // printCalendar(month, year);
    printCalendar(m, y);
    printf("\n\n");
    return 0;
}