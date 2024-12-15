#include <stdio.h>
#include <math.h>

int main(){
	int a,b;
	printf("Moi nhap vao so nguyen duong a ");	scanf("%d", &a);
	printf("Moi nhap vao so nguyen duong b ");	scanf("%d", &b);
	
	while(b){
		int r = a%b;
		a = b;
		b = r;
	}
	
	printf("Uoc chung lon nhat cua a va b la : %d",a);
}
