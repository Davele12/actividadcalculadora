/*
 * * FILE: calculadora.c
 * * juncotic.com
 * */
#include "calculadora.h"
int main(int argc, const char *argv[]){
	    int (*ptr_fc)(int,int);
	    int n1 = atoi(*(argv+1));
	    int n2 = atoi(*(argv+3));
	    char op = *(*(argv+2));

	    switch(op){
	    case '+':
	       ptr_fc = suma;
	       break;
	     case '-':
	       ptr_fc = resta;
	       break;
	     default:
	     printf("Opción incorrecta!!\n");
	     }
	     printf(">>> %d %c %d = %d\n", n1, op, n2, (*ptr_fc)(n1,n2));
	     return 0;
}
