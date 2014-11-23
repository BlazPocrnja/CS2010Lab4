#include "memory.h"

/*
Author : Blaz Pocrnja 
Student ID : 5035473
Lab #4 
Purpose: Demonstrates the use of the "Memory" class by using its member functions to simulate computer memory.
*/

int main(void){
	
	Memory *mem = new Memory(200);
	int retrieval;	

	for(int i = 0; i < mem->getSize(); i++){
		mem->insert(i,i);
	}
	printf("\n200 integers have been inserted into Memory from 0 to 199.\n");	
	mem->dump();
	mem->copy(0,100,99);
	printf("\nThe first 100 integers have been copied into the last 100 locations.\n");
	mem->dump();
	retrieval = mem->retrieve(199);
	printf("\nThe last integer in Memory is");
	printf("%3d",retrieval);
	printf(".\n");
	mem->copy(190, 10, 9);
	printf("\nThe last ten integers have been copied into location 10.\n");
	mem->dump(10, 19);
	
	return -1;
}
