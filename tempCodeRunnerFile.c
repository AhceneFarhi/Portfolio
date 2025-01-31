#include<stdio.h>
#include<stdlib.h>
#include"C:\Users\ACER\Desktop\TD_program\file.h"


int main()
{
	Pointeur_Fi P; // d�claration d'un pointeur vers la t�te et la queue de la file 
	int x;
	
	Creerfile_Fi(&P); 
	
	Enfiler_Fi(P,10);
	Enfiler_Fi(P,15);
	Enfiler_Fi(P,25);
	
	afficher_file(P);
	Defiler_Fi(P,&x); // 10
	printf("valeur d�fil�e de la t�te de la file x=%d \n",x);
	
	afficher_file(P);
	
	Defiler_Fi(P,&x); // 15
	printf("valeur d�fil�e de la t�te de la file x=%d \n",x);
	Defiler_Fi(P,&x); // 25
	printf("valeur d�fil�e de la t�te de la file x=%d \n",x);
	
	Defiler_Fi(P,&x); 
	printf("valeur d�fil�e de la t�te de la file x=%d \n",x);
	return 0;
}