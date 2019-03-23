#include <stdlib.h>
#include <stdio.h>
#include <conio.h>
#include <windows.h>
#include "Matrices.h"
#include "Polinomio.h"
#include "Complejos.h"

void gotoxy(int x,int y){  
      HANDLE hcon;  
      hcon = GetStdHandle(STD_OUTPUT_HANDLE);  
      COORD dwPos;  
      dwPos.X = x;  
      dwPos.Y= y;  	
      SetConsoleCursorPosition(hcon,dwPos);
 }

int main(){
  int mult(struct complejos z1,struct complejos z2);
  int A[3],B[3],C[3],x=2;
  char c;
 	gotoxy(40,0);
 	printf("**********PROYECTO NUMERO 1**********");
 	gotoxy(45,x);
 	printf("--->");
 	gotoxy(50,1);
 	printf("1.Matriz");
 	gotoxy(50,2);
 	printf("2.Numeros complejos");
 	gotoxy(50,3);
 	printf("3.Polinomios");
 	gotoxy(50,4);
 	printf("4.Salir");
	gotoxy(42,6);
	printf("Presione ENTER para seleccionar");
 	do{
 	
     	c=getch();
        if(c==-32)
		{
        	gotoxy(45,x);
    	printf("    ");
    	
    		c=getch();
    		
    	     	if(c==72)/*arriba*/
    	     	    if(x==1)
					 {
					 x=4;
					 }
					 else
					 {
				    	x--;
					 }
    	     	if(c==80)/*abajo*/
    	            if(x==4)
					{
					x=1;	
    	            }
    	            else
					{
					x++;
    	            }
    	     	
    	     
    	
    	
    	   gotoxy(45,x);
 	       printf("--->");	
        }
	 if(c==13)
	 {
	   if(x==1)//Matrices
		{
		  principal();
	   	}
	 	if(x==2)//Complejos
		 {
		   complex();
	 	 }
	 	if(x==3)//Polinomios
	        {
		    system("cls");
		    captura1(A);
		    captura2(B);
		    sumar(A,B);
		    system("pause");
		    return 0;
	 	}
	 	if(x==4)//Salida
		 {
		   system("cls");
		   printf("\n\tGracias por utilizar el programa.\n\n");
		   system("pause");
	 	   break;
	 	 }	
	 }
}
    while(1);
	 
 	return 0;
 }
