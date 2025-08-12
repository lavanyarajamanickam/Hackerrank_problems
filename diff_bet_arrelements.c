#include<stdio.h>
int main(){
    int size;
    scanf("%d",&size);
    int a[size];
    for(int i=0;i<size;i++){
        scanf("%d",&a[i]);
    }
    int total_dist=0;
    for(int i=0;i<size-1;i++){
        int dif=a[i]-a[i+1];
        if(dif<0){
            total_dist=total_dist+(-1)*dif;
        }
        else{
            total_dist=total_dist+dif;
        }
    }
    printf("%d",total_dist);
    return 0;
}