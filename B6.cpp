#include <stdio.h>

int main(){
	int a,b,status=0;
	printf("Moi nhap vao so a ");	scanf("%d", &a);
	printf("Moi nhap vao so b ");	scanf("%d",&b);
	printf("		CACULATOR\n");
	while(status != 5){
		if(status == 1)	printf("Tong : %d + %d = %d\n",a,b,a+b);
		else if(status == 2)	printf("Hieu : %d - %d = %d\n",a,b,a-b);
		else if(status == 3)	printf("Tich : %d x %d = %d\n",a,b,a*b);
		else if(status == 4)	printf("Thuong : %d : %d = %.2f\n",a,b,1.0*a/b);
		printf("1. Tong 2 so\n");
		printf("2. Hieu 2 so\n");
		printf("3. Tich 2 so\n");
		printf("4. Thuong 2 so\n");
		printf("5. Thoat\n");
		printf("Lua chon cua ban : ");	scanf("%d",&status);
		if(!(status >= 1 && status <= 5))	printf("Lua chon chua ban khong hop le vui long nhap lai\n");
	}
	printf("Chuong trinh ket thuc");
}
