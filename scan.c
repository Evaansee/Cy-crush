#include<stdio.h>

void vide_buffer(){
	while(getchar()!='\n'){
	}
}
int main(){
	float n1, n2;
	int a;
	do{printf("Saisir une  note");
	a=scanf("%f",&n1);
	vide_buffer();}
	while(a!=1 || n1<0 || n1>20);
	
	printf("Saisir une autre  note");
	scanf("%f",&n2);
	printf(" Les notes sont %f %f \n",n1,n2);
	return 0;
}
