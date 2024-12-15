#include <stdio.h>

int main(){
	int a;	printf("Moi nhap vao so nguyen a = 10 neu sai ban se phai nhap lai !! : ");	scanf("%d",&a);
	while(a != 10){
		printf("Sai roi nhap lai di a = 10 : ");	scanf("%d", &a);
	}
	printf("Chuc mung ban da nhap dung roi day !!");
}
