#include <stdio.h>

int main() {
    int a[11], i, p, v;
    for(i=0;i<10;i++) scanf("%d",&a[i]);
    scanf("%d%d",&v,&p);
    for(i=10;i>p;i--) a[i]=a[i-1];
    a[p]=v;
    for(i=0;i<11;i++) printf("%d ",a[i]);
}

