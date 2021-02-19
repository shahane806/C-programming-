// 2. WAP to find simple interest

// formula of simple interest is A = P(1+rt)
/*
A = final amount
P = initial principal balance
r = annual interest rate
t = time(in year)
*/

#include <stdio.h>
int main()
{
    int p, r, t;
    int a;
    printf("Enter initial principa balance\n");
    scanf("%d", &p);

    printf("Enter annual interest rate\n");
    scanf("%d", &r);

    printf("Enter time(in year)\n");
    scanf("%d", &t);

    a = p * (1 + r * t);

    printf("The simple interest is %d\n", a);
    return 0;
}
