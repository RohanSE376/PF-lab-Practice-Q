#include <stdio.h>

int main() {
    int a[10], i, max, s;
    for(i=0;i<10;i++) scanf("%d",&a[i]);
    max=s=a[0];
    for(i=1;i<10;i++) if(a[i]>max) max=a[i];
    for(i=0;i<10;i++) if(a[i]>s && a[i]<max) s=a[i];
    printf("%d",s);
}

