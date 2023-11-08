#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	char name[30];
	char adress[30];
	int age;
	
	printf("Nome \n");
	scanf("%s", &name);
	
	printf("Endereco \n");
	scanf("%s", &adress);
	
	printf("Idade");
	scanf("%d", &age);
	
	printf("\n Nome: %s", name);
	printf("\n Endereco: %s", adress);
	printf("\n Idade: %d", age);
	
	return 0;
}
