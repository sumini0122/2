#include<stdio.h>
int sum (int i) {
if (i == 1) {
return 1;
} else
return i + sum(i-1);
}

int main(void) {
int i, sum1, sum2;
sum2 = 0;
sum1 = 0;
printf("수를 하나 입력하세요:");
scanf("%d", &i);
printf("%d\n", sum(i));
}