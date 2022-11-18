#include<stdio.h>
struct Time{
    int hours;
    int min;
    int sec;
};
int main(){
    int seconds,minutes,hours;
    struct Time start={2,10,15};
    struct Time end={4,15,20};
        if(end.sec<start.sec){
            end.sec+=60;
            end.min--;
        }
        seconds=end.sec-start.sec;
        if(end.min<start.min){
            end.min+=60;
            end.hours--;
        }
        minutes=end.min-start.min;
        hours=end.hours-start.hours;
    printf("%d:%d:%d",hours,minutes,seconds);
    return 0;
}
