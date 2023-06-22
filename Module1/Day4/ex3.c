#include <stdio.h>

struct Time {
    int hours;
    int minutes;
    int seconds;
};

void getTimeDifference(struct Time startTime, struct Time endTime, struct Time *diffTime) {
    // Calculate the difference in seconds
    int startSeconds = startTime.hours * 3600 + startTime.minutes * 60 + startTime.seconds;
    int endSeconds = endTime.hours * 3600 + endTime.minutes * 60 + endTime.seconds;
    int diffSeconds = endSeconds - startSeconds;

    // Calculate the difference in hours, minutes, and seconds
    diffTime->hours = diffSeconds / 3600;
    diffSeconds %= 3600;
    diffTime->minutes = diffSeconds / 60;
    diffSeconds %= 60;
    diffTime->seconds = diffSeconds;
}

int main() {
    struct Time startTime, endTime, diffTime;

    printf("Enter the start time (hh:mm:ss): ");
    scanf("%d:%d:%d", &(startTime.hours), &(startTime.minutes), &(startTime.seconds));

    printf("Enter the end time (hh:mm:ss): ");
    scanf("%d:%d:%d", &(endTime.hours), &(endTime.minutes), &(endTime.seconds));

    getTimeDifference(startTime, endTime, &diffTime);

    printf("\nTime difference: %02d:%02d:%02d\n", diffTime.hours, diffTime.minutes, diffTime.seconds);

    return 0;
}