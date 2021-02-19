// 4.WAP to calculate sum of 5 subjects and find percentage

#include <stdio.h>
int main()
{
    int sub1, sub2, sub3, sub4, sub5, sum, per;

    printf("Enter Sub1 marks\n");
    scanf("%d", &sub1);

    printf("Enter Sub2 marks\n");
    scanf("%d", &sub2);

    printf("Enter Sub3 marks\n");
    scanf("%d", &sub3);

    printf("Enter Sub4 marks\n");
    scanf("%d", &sub4);

    printf("Enter Sub5 marks\n");
    scanf("%d", &sub5);

    sum = sub1 + sub2 + sub3 + sub4 + sub5;
    per = (sum / 5);

    printf("The total marks is %d\nThe percentage is %d%%\n", sum, per);
    return 0;
}