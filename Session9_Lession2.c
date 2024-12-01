#include <stdio.h>
#include<math.h>
#include<stdlib.h>
#include<string.h>
long long a[]={4,7,3,1,5,3,6,8,9},n,vt,gt;
int main(){
    printf("Nhap gia tri can sua: ");
    scanf("%lld",&gt);
    printf("Nhap vi tri can sua: ");
    scanf("%lld",&vt);
    if(vt>=sizeof(a)/sizeof(a[0]))a[sizeof(a)/sizeof(a[0])]=gt;
    else a[vt]=gt;
    for(int i=0;i<sizeof(a)/sizeof(a[0]);i++)printf("%lld ",a[i]);
}
