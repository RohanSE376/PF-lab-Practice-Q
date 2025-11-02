#include <stdio.h>

int main() {
    int a[5], t, i;
    for(i=0;i<5;i++) scanf("%d",&a[i]);
    t=a[4];
    for(i=4;i>0;i--) a[i]=a[i-1];
    a[0]=t;
    for(i=0;i<5;i++) printf("%d ",a[i]);
}

