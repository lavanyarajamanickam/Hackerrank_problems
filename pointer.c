#include<stdio.h>
void update (int *a, int *b) {
int t=*a;
*a=*a+*b;
*b=abs (t-(*b));
return *a, *b;
}
int main(){
int a, b;
int *pa = &a, pb = &b;
scanf("%d %d", &a, &b);
update (pa, pb);
printf("%d\n%d", a, b);
return 0;
}