#include <stdio.h>
#include<math.h>
#include<stdlib.h>
#include<string.h>
long long a[100005],n,vt,gt,d;
int main(){
    do{
        printf("MENU\n1.Nhap vao mang\n2.Hien thi mang\n3.Them phan tu\n4.Sua phan tu\n5.Xoa phan tu\n6.Thoat\nLua chon cua ban: ");
        scanf("%d",&d);
        switch(d){
            case 1:
                printf("Nhap mang:\n");
                scanf("%lld",&n);
                for(int i=0;i<n;i++)scanf("%lld",&a[i]);
                break;
            case 2:
                for(int i=0;i<n;i++)printf("%lld ",a[i]);
                printf("\n");
                break;
            case 3:
                printf("Nhap gia tri can chen: ");
                scanf("%lld",&gt);
                printf("Nhap vi tri can chen: ");
                scanf("%lld",&vt);
                if(vt>=n){
                    a[n]=gt;
                    n++;
                }
                else{
                    for(int i=n;i>=vt;i--)a[i]=a[i-1];
                    a[vt]=gt;
                    n++;
                }
                printf("Da chen vao vi tri yeu cau\n");
                break;
            case 4:
                printf("Nhap gia tri can sua: ");
                scanf("%lld",&gt);
                printf("Nhap vi tri can sua: ");
                scanf("%lld",&vt);
                a[vt]=gt;
                printf("Da sua vi tri yeu cau\n");
                break;
            case 5:
                printf("Nhap vi tri can xoa: ");
                scanf("%lld", &vt);
                if(vt>=n)printf("Vi tri nhap vao khong hop le");
                else{
                    for(int i=vt;i<n-1;i++)a[i]=a[i+1];
                    n--;
                }
                printf("Da xoa vi tri yeu cau\n");
                break;
            default: continue;
        }
    }while(d!=6);
}
