#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	float x=0;
	float y=0;
	float z=0;
	float r=0;
	float r1=0;
	float r2=0;
	float r3=0;
	
	
	printf("Quantas latas deseja: ");
	scanf("%f", &x);
	
	printf("Quantas garrafas de 600ml deseja: ");
	scanf("%f", &y);
	
	printf("Quantas garrafas de 2L deseja: ");
	scanf("%f", &z);
	
	r= (x * 350 )/ 1000;
	r1= (y * 600 )/ 1000;
	r2= z * 2;	
	r3= r + r1 + r2;
	
	printf("Quantidade de refrigerante das latas em litros: %f L\n",r);
	
	printf("Quantidade de refrigerante das garrafas de 600ml em litros:  %f L\n",r1);
	
	
	printf("Quantidade total de refrigerate em litros:  %f L\n", r3);
	system("pause");
	
	
	
	return 0;
}
