#include <stdio.h>

int main(){
	int a=0,b=0,c=0,n=0;
	while(n != 6){
		printf("%8s\n","MENU");
        printf("1. Nhap 3 so\n");
        printf("2. Tong 3 so\n");
        printf("3. Trung binh cong 3 so\n");
        printf("4. So nho nhat\n");
        printf("5. So lon nhat\n");
        printf("6. Thoat\n");
        printf("Nhap lua chon: ");
		scanf("%d",&n);
		switch(n){
			case 1:
				{
				printf("Moi nhap vao 3 so a,b,c: ");
				scanf("%d%d%d", &a,&b,&c);
				}
				break;
			case 2:
				{
				int sum=a+b+c;
				printf("Tong %d + %d + %d = %d",a,b,c,sum);
				}
				break;
			case 3:
				{
				float avg=(a+b+c)/3.0;
				printf("Trung binh cong (%d + %d + %d)/3 = %.2f",a,b,c,avg);
				}
				break;
			case 4:
				{
				int min=a;
				if(b < a && b < c)
					min = b;
				else if(c < a && c < b)
					min = c;
				printf("So nho nhat trong %d %d %d la: %d",a,b,c,min);
				}
				break;
			case 5:
				{
				int max=a;
				if(b > a && b > c)
					max = b;
				else if(c > a && c > b)
					max = c;
				printf("So lon nhat trong %d %d %d la: %d",a,b,c,max);
				}
				
				break;
			case 6:
				printf("Chuong trinh ket thuc");
				break;
			default:
				printf("Du lieu ban nhap vao khong co trong menu vui long nhap lai !!!");
		}
		printf("\n");
	}
}
