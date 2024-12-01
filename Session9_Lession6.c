#include <stdio.h>
#include<math.h>
#include<stdlib.h>
#include<string.h>
long long a[10005][10005],m,n,d,odd,sumOdd,maxLine=INT_MIN,line,s=1;
int main(){
    do{
        printf("MENU\n1.Nhap kich co va gia tri cac phan tu cua mang\n2.In gia tri cac phan tu cua mang theo ma tran\n3.In gia tri cac phan tu le va tinh tong\n4.In ra cac phan tu nam tren duong bien va tinh tich\n5.In ra cac phan tu nam tren duong cheo chinh\n6. In ra cac phan tu nam tren duong cheo phu\n7.In ra dong co tong gia tri cac phan tu la lon nhat\n8.Thoat\nLua chon cua ban: ");
        scanf("%lld",&d);
        switch(d){
            case 1:
                printf("Nhap kich co va gia tri cac phan tu cua mang\n");
                scanf("%lld%lld",&m,&n);
                for(int i=1;i<=m;i++){
                    int maxLineTg=0;
                    for(int j=1;j<=n;j++){
                        scanf("%lld",&a[i][j]);
                        if(a[i][j]%2==1)sumOdd+=a[i][j];
                        if(i==1||j==1||i==m||j==n)s*=a[i][j];
                        maxLineTg+=a[i][j];
                    }
                    if(maxLineTg>maxLine){
                        maxLine=maxLineTg;
                        line=i;
                    }
                }
                break;
            case 2:
                for(int i=1;i<=m;i++){
                    for(int j=1;j<=n;j++)printf("%lld ",a[i][j]);
                    printf("\n");
                }
                printf("\n");
                break;
            case 3:
                printf("Phan tu le: ");
                for(int i=1;i<=m;i++)for(int j=1;j<=n;j++)if(a[i][j]%2==1)printf("%lld ",a[i][j]);
                printf("\nTong cac phan tu le: %d\n",sumOdd);
                break;
            case 4:
                printf("Phan tu nam tren duong bien: ");
                for(int i=1;i<=m;i++)for(int j=1;j<=n;j++)if(i==1||j==1||i==m||j==n)printf("%lld ",a[i][j]);
                printf("\nTich duong bien: %lld\n", s);
                break;
            case 5:
                printf("Phan tu nam tren duong cheo chinh: ");
                for(int i=1;i<=m;i++){
                    for(int j=1;j<=n;j++)if(i==j)printf("%lld ",a[i][j]);
                }
                printf("\n");
                break;
            case 6:
                printf("Phan tu nam tren duong cheo phu: ");
                for(int i=1;i<=m;i++)for(int j=1;j<=n;j++)if(i+j==n+1)printf("%lld ",a[i][j]);
                printf("\n");
                break;
            case 7:
                for(int j=1;j<=n;j++)printf("%lld ",a[line][j]);
                printf("\n");
            default: continue;
        }
    }while(d!=8);
}
