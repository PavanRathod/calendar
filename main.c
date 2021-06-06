#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x=0,y=0,z=0,month=0,day,i,year=0,week=0,year_code=0;
    printf("\n                        Calendar 1600-2099\n");
    printf("\nenter the month and year in the format mm-yyyy\n");
    printf("\nPlease enter month: ");
    scanf("%d",&month);
    printf("\nPlease enter year: ");
    scanf("%d",&year);
    month -= 1;

    char *months[]={"January","February","March","April","May","June","July","August","September","October","November","December"};
    int month_days[]={31,28,31,30,31,30,31,31,30,31,30,31};

    if (year % 4 ==0 && year % 100 !=0)
    {
        month_days[1]=29;
    }
        printf("\n\n            %s - %d",months[month],year);
        printf("\n  -----------------------------------");
        printf("\n   sun  mon  tue  wed  thu  fri  sat ");
        printf("\n  -----------------------------------\n");

        int month_code[]={0,3,3,6,1,4,6,2,5,0,3,5};
       if (year>=2000 && year<2999)
       {
           year_code = 6;
       }
       else if(year>=1900 && year<1999)
       {
           year_code = 0;
       }
       else if(year>=1800 && year<1899)
       {
           year_code=2;
       }
       else if(year>=1700 && year<1799)
       {
           year_code = 4;
       }
       else if(year>=1600 && year<1699)
       {
           year_code = 6;
       }
       else{printf("\nplease enter a valid year");}
       x= year%100;
       y=x/4;
       z=x+y+year_code+month_code[month]+1;
       day=z%7;

        for(week=0;week<day;week++)
        {
            printf("     ");
        }


          for(i=1;i<= month_days[month];i++)
             {
                printf("%5d",i);
                if(++week>6)
                   {
                      printf("\n");
                      week=0;
                   }
                  day=week;
            }

}
