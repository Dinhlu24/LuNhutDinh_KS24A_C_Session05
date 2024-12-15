#include <stdio.h>

int main(){
	int n;
	printf("Moi nhap vao so tu 1 -> 10 ");	scanf("%d", &n);
	while(n < 1 || n > 10){
		printf("Sai roi vui long nhap lai ");	scanf("%d",&n);
	}
	printf("Day la bang cuu chuong cua ban\n");
	for(int i=1;i<=10;i++){
		printf("%d * %d = %d\n",n,i,n*i);
	}
}
