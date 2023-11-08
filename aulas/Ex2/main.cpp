#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	float nota01;
	float nota02;
	float media;
	
	printf("Insira a primeira nota! \n");
	scanf("%f", &nota01);
	
	printf("Insira a segunda nota! ");
	scanf("%f", &nota02);
	
	media = (nota01 + nota02) / 2;
	
	printf("A media final e %2f", media);
	
	return 0;
}
