#include <stdio.h>
int max_of_four(int a,int b,int c,int d);
int max_of_four(int p,int q,int r,int s){
    int max=0;
    if(p>q && p>r && p>s){
        max=p;
    }
    else if(q>p && q>r && q>s){
        max=q;
    }
    else if(r>p && r>q && r>s){
        max=r;
    }
    else{
        max=s;
    }
    return max;
}
int main() {
    int a, b, c, d;
    scanf("%d\n %d\n %d\n %d", &a, &b, &c, &d);
    int ans = max_of_four(a, b, c, d);
    printf("%d", ans);
    
    return 0;
}
