#include<stdio.h>
#include<stdlib.h>

int main(){
//Gauss Method was used in getting the day of the week. 
int  decennial, weekday, MonthConstant, century, date, month, year, defaultyear, leapedyear;

do{
    printf("Enter date (1-31): ");
    scanf("%d", &date);
}while(date < 1 || date > 31 );

do{
    printf("Enter month (1-12): ");
    scanf("%d", &month);
     if(( date == 31 ) && (month == 2 || month == 4 || month == 6 || month == 9 || month == 11)){
        printf("This month does not have a 31st day. Please try again.");
        exit(EXIT_SUCCESS);
    }
    if((date == 30) && (month == 2)){
        printf("This month does not have a 30th day. Please try again.");
        exit(EXIT_SUCCESS);
    }
}while(month < 1 || month > 12);

do{
    printf("Enter year: ");
    scanf("%d", &year);
    if((date == 29 && month == 2) && ((year % 400 != 0 && year % 100 == 0)|| year % 4 != 0)){
        printf("February does not have a 29th day in this year. Please try again.");
        exit(EXIT_SUCCESS);
    }
}while(year < 0);
    
decennial = year % 100;

if(month == 1){
    MonthConstant = 0;
    decennial = decennial-1;
}
if(month == 2){
    MonthConstant = 3;
    decennial = decennial-1;
}
if(month == 3){
    MonthConstant = 2;
}
if(month == 4){
    MonthConstant = 5;
}
if(month == 5){
    MonthConstant = 0;
}
if(month == 6){
    MonthConstant = 3;
}
if(month == 7){
    MonthConstant = 5;
}
if(month == 8){
    MonthConstant = 1;
}
if(month == 9){
    MonthConstant = 4;
}
if(month == 10){
    MonthConstant = 6;
}
if(month == 11){
    MonthConstant = 2;
}
if(month == 12){
    MonthConstant = 4;
}


if(year /100 == 19){
    century = 1;
}

if(year / 100 == 20){
    century = 0;
}

if(year / 100 == 21){
    century = 5;
}

if(year /100 == 22){
    century = 3;
}

//Gauss method computation.
weekday = (decennial + decennial/4 + century + MonthConstant + date) % 7;


    if (weekday == 0){
        printf("Sunday.");
    }
    if(weekday == 1){
        printf("Monday.");
    }
    if(weekday == 2){
        printf("Tuesday.");
    }
    if(weekday == 3){
        printf("Wedday.");
    }
    if(weekday == 4){
        printf("Thursday.");
    }
    if(weekday == 5){
        printf("Friday.");
    }
    if(weekday == 6){
        printf("Saturday.");
    }
return 0;
}