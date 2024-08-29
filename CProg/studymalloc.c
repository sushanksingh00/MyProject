#include <stdio.h>
#include <ctype.h>//toupper
#include <stdlib.h>//malloc
#include <string.h>//strcpy

//Malloc is used to avoid stack data implimentation
//Malloc uses heap data implimentation 
//Usage- malloc(sizeof(int)) it returns a pointer to that memory which is allocated 
//sizeof int = 4, char*(a pointer) 4/8, float = 4, double = 8, char = 1; sizeof determines the value from the system itself
//to avoid writing yourself

//to use the pointer which we got from Malloc we have to use derefrencing- *p = anything to use or change 
//Malloc returns NULL if no memory is allocated, couldn't allocate any memory.
//Very important to free(pointer) unless it will forever store that data in RAM
//e.g.- you open yt on chrome and close it after using it but it doesn't give you any free RAM.

int main(void){


	char *s;


	printf("type here ");
	scanf("%s", s);
	//took input in s 

	char *t=s; 
	//this is a new generated memory which has same address as s.
	//a different way to approch is needed cuz changing in t will change in s as well cuz they are pointing to same address.


	if (t==NULL){

		return 1;
	}
	
	char *q = malloc(strlen(s)+1);
	// malloc(*allocated bytes*) created an addition new space to store a new data (not just the address).
	//**
	//for (int i=0; i<(strlen(s)+1);i++){
	//	t[i]=s[i];
	//}
	//**
	//alternative is to do strcpy(destination, origin)
	strcpy(q, s);

	if (strlen(t)>0){
		t[0] = toupper(t[0]);
	}
	//changing in t will make changes in s also 


	printf("input was- %s\n", s);

	printf("changed: %s\n", t);
	printf("origin: %s\n", s);


	printf("mallocated: %s\n", q);

	free(q);
	//allocated memory must be freed.
	return 0;
}