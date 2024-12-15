#include <stdio.h>

int main(){
	int n,sum=0;
	printf("Moi nhap vao so nguyen n ");	scanf("%d", &n);
	for(int i=n;i>=1;i--){
		sum += i;
	}
	printf("Tong tat cac so tu 1 -> n la : %d", sum);
}
