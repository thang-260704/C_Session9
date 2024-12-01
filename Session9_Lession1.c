#include <stdio.h>
#include<math.h>
#include<stdlib.h>
#include<string.h>
long long a[101],n,vt,gt;
int main(){
    printf("Nhap mang: \n");
    scanf("%d",&n);
    if(n>100||n==0)return 0;
    for(int i=0;i<n;i++)scanf("%lld",&a[i]);
    printf("Nhap gia tri can chen: ");
    scanf("%lld",&gt);
    printf("Nhap vi tri can chen: ");
    scanf("%lld",&vt);
    if(vt>n)return 0;
    else if(vt==n)a[n]=gt;
    else{
        for(int i=n;i>=vt;i--)a[i]=a[i-1];
        a[vt]=gt;
    }
    for(int i=0;i<=n;i++)printf("%lld ",a[i]);
}
