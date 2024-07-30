#include <stdio.h>

main(){
	
	int fa,sa;
	
	printf("First angle:");
	scanf("%d",&fa);
	
	printf("Second angle:");
	scanf("%d",&sa);
	
	int total=180-(fa+sa);
	printf("Third angle:%d",total);
	
	
}