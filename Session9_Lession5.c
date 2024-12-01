#include <stdio.h>
#include<math.h>
#include<stdlib.h>
#include<string.h>
int a[10005],n,vt,gt,d,even,sumPrime,sumEven,max=INT_MIN,min=INT_MAX;
int snt(int a){
    if(a<2)return 0;
    for(int i=2;i<=sqrt(a);i++)if(a%i==0)return 0;
    return 1;
}
int main(){
    do{
        printf("MENU\n1.Nhap so phan tu can nhap va gia tri cac phan tu\n2.In ra gia tri cac phan tu dang quan ly\n3.In ra gia tri cac phan tu chan va tinh tong\n4.In ra gia tri lon nhat va nho nhat trong mang\n5.In ra cac phan tu la so nguyen to trong mang va tinh tong\n6.Nhap vao mot so va thong ke trong mang co bao nhieu phan tu do\n7.Them mot phan tu vao vi tri chi dinh\n8.Thoat\nLua chon cua ban: ");
        scanf("%d",&d);
        switch(d){
            case 1:
                printf("Nhap so phan tu can nhap va gia tri cac phan tu\n");
                scanf("%d",&n);
                for(int i=0;i<n;i++){
                    scanf("%d",&a[i]);
                    if(a[i]%2==0)sumEven+=a[i];
                    max=fmax(max,a[i]);
                    min=fmin(min,a[i]);
                    if(snt(a[i]))sumPrime+=a[i];
                }
                break;
            case 2:
               for(int i=0;i<n;i++)printf("%d ",a[i]);
               printf("\n");
               break;
            case 3:
                for(int i=0;i<n;i++)if(a[i]%2==0)printf("%d ",a[i]);
                printf("\nTong chan: %d\n",sumEven);
                break;
            case 4:
                printf("So lon nhat trong mang: %d\n",max);
                printf("So nho nhat trong mang: %d\n",min);
                break;
            case 5:
                for(int i=0;i<n;i++)if(snt(a[i]))printf("%d ",a[i]);
                printf("\nTong cac so nguyen to trong mang: %d\n",sumPrime);
                break;
            case 6:
                printf("Nhap vao mot so: ");
                scanf("%d",&gt);
                int dem=0;
                for(int i=0;i<n;i++)if(a[i]==gt)dem++;
                printf("So lan xuat hien trong mang la %d\n",dem);
                break;
            case 7:
                printf("Nhap gia tri can chen: ");
                scanf("%lld",&gt);
                printf("Nhap vi tri can chen: ");
                scanf("%lld",&vt);
                if(vt>n)printf("Vi tri nhap vao khong hop le");
                else if(vt==n){
                    a[n]=gt;
                    n++;
                }
                else{
                    for(int i=n;i>=vt;i--)a[i]=a[i-1];
                    a[vt]=gt;
                    n++;
                }
            default: continue;
        }
    }while(d!=8);
}
