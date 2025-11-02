#include <stdio.h>

int main() {
    int a[10], n, i, c=0;
    for(i=0;i<10;i++) scanf("%d",&a[i]);
    scanf("%d",&n);
    for(i=0;i<10;i++) if(a[i]==n) c++;
    if(c==0) printf("number not found");
    else printf("%d",c);
}

