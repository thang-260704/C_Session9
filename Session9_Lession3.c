#include <stdio.h>
#include<math.h>
#include<stdlib.h>
#include<string.h>
long long a[100005],n,vt;
int main(){
    printf("Nhap mang:\n");
    scanf("%lld",&n);
    for(int i=0;i<n;i++)scanf("%lld",&a[i]);
    printf("Nhap vi tri can xoa: ");
    scanf("%lld",&vt);
    if(vt>=n){
        printf("Vi tri nhap vao khong hop le");
        return 0;
    }
    else for(int i=vt;i<n-1;i++)a[i]=a[i]+1;
    for(int i=0;i<n-1;i++)printf("%lld ",a[i]);
}
