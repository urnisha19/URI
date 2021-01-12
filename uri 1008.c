#include <stdio.h>
int main()
{
    int employee_number,work_hour;
    float salary_per_hour;
    scanf("%d %d %f", &employee_number,&work_hour,&salary_per_hour);
    printf("NUMBER = %d\n", employee_number);
    printf("SALARY = U$ %.2f\n",work_hour*salary_per_hour);
    return 0;

}
