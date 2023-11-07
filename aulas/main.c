#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	char name[30];
	char adress[30];
	int age;
	
	printf("Nome \n");
	scanf("%s", &name);
	
	printf("\n Nome: %s", name);
	
	return 0;
}
