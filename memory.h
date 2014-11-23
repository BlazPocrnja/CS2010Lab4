#ifndef MEMORY_H
#define MEMORY_H

#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <cmath>

using namespace std;
using std::string;


/*
Author : Blaz Pocrnja 
Student ID : 5035473
Lab #4
Purpose: Interface for the class "memory", to be used in "driver.cpp" and "memory.cpp"
*/

class Memory{
	private:
		int *m;
		int size;
	public:
		//Constructor
		explicit Memory(int);
		Memory(void);
		//Destructor
		~Memory(void);
		//Modifiers
		void copy(int, int, int);
		void insert(int,int);
		//Selectors
		int getSize(void);
		int retrieve(int);
		void dump(void);
		void dump(int, int); 	
};




#endif
