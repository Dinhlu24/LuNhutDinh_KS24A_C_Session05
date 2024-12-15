#include <stdio.h>

int main(){
	int n,tmp;	printf("Moi nhap vao so n ");	scanf("%d", &n);
	for(int i=1;i<=2;i++){
		while(n){
			int x=n%10;
			if(i == 1)	tmp = tmp*10 + x;
			else	printf("%d ",x);
			n/=10;
		}
		n=tmp;
	}
}
