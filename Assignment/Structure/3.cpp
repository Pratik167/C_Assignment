#include <stdio.h>
struct time_struct 
{
    int hour;
    int minute;
    int second;
};
int main()
{
    int totalSeconds;
    printf("Enter the total seconds: ");
    scanf("%d", &totalSeconds);

    int hour = totalSeconds / 3600;
    int minute = (totalSeconds % 3600) / 60;
    int second = (totalSeconds % 3600) % 60;

    printf("Time: %02d:%02d:%02d\n", hour, minute, second);
    return 0;
}

