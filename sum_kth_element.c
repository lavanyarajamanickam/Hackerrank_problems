#include<stdio.h>
int main(){
    int size;
    scanf("%d",&size);
    int a[size];
    for(int i=0;i<size;i++){
        scanf("%d",&a[i]);
    }
    int k;
    scanf("%d",&k);
    int kmax=0,ind=0,sum=0;
    for(int it=0;it<k;it++){
        int max=a[0];
    for(int i=1;i<size;i++){
        if(max<a[i]){
            max=a[i];
            ind=i;
        }
    }
    kmax=max;
    sum+=kmax;
    a[ind]=-1;
    }
    printf("%d",sum);
    return 0;
}