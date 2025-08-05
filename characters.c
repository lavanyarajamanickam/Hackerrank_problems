#include<stdio.h>
int main(){
    char c,s[20],str[50];
    scanf("%c",&c);
    printf("%c\n",c);
    scanf("%s",s);
    printf("%s\n",s);
    scanf("\n");
    scanf("%[^\n]%*c",str);
    printf("%s",str);
    return 0;
}