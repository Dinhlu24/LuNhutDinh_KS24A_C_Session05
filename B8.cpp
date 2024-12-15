#include <stdio.h>

int main(){
	int a,b,i=1;
	printf("Moi nhap vao so nguyen duong a ");	scanf("%d", &a);
	printf("Moi nhap vao so nguyen duong b ");	scanf("%d", &b);
	
	while(a*i % b != 0){
		i++;
	}
	printf("Boi chung nho nhat cua a va b la %d",a*i);
}
