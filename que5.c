// 5. WAP to find gross salary
// D.A = 10 % of basic
// T.A = 12 % basic
// Gross salary = basic + D.A + T.A

#include <stdio.h>
int main()
{
    int basic, GS, DA, TA;

    printf("Enter basic salary of an employee: ");
    scanf("%d", &basic);

    DA = basic * 0.1;
    TA = basic * 0.12;

    GS = basic + DA + TA;

    printf("The gross salary of the employee is %d\n", GS);
    return 0;
}