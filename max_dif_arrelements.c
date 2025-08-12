#include<stdio.h>
int main(){
    int size;
    scanf("%d",&size);
    int a[size];
    for(int i=0;i<size;i++){
        scanf("%d",&a[i]);
    }
    int max=a[0]-a[1],diff=0;
    for(int i=0;i<size-1;i++){
        diff=a[i]-a[i+1];
       if(max<diff){
           max=diff;
       }
        
    }
    printf("%d",max);
    return 0;
}