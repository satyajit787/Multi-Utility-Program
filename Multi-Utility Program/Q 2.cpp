#include<stdio.h>

main(){
	
	int salary;
	float HRA;float DA; float TA;
	
	printf("Enter basa salary :");
	scanf("%d",&salary);
	
	printf("Enter HRA :");
	scanf("%f",&HRA);
	
	printf("Enter DA:");
	scanf("%f",&DA);
	
	printf("EnterTA :");
	scanf("%f",&TA);
	
	float cal = salary+((salary*HRA)/100)+((salary*DA)/100)+((salary*TA)/100);
	
	printf("Gross salary : Rs. %f",cal);
}