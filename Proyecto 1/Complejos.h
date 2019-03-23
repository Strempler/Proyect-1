struct complejos
{
  int r,i;
}z1,z2;
                              
int mult(struct complejos z1,struct complejos z2);
void gotoxy(int x,int y);
int sumac(struct complejos z1,struct complejos z2);
int complex(void);
int complex(void){
  char opcion;
  system("cls");
  printf("Hola bienvenido a tu calculadora de complejos\n\n");
  printf("a. Suma\n");
  printf("b. Multiplicacion\n");
  printf("\t opcion:");
  scanf("%c", &opcion);
  switch(opcion)
    {
    case 'a': system("cls");
      printf("\n\tIngrese los coeficientes de z1 y z2 de la forma [a+bi]:\n\n");
      printf("\t     z1\t\t     z2\n");
      printf("\t([a   +   bi])    +    ([c  +  di])\n   ");
      gotoxy(10,7);
      scanf("%d ",&z1.r);
      gotoxy(20,7);
      scanf("%d ",&z1.i);
      gotoxy(32,7);
      scanf("%d ",&z2.r);
      gotoxy(40,7);
      scanf("%d ",&z2.i);
      printf("\n\t[%d  +  %di]  +  [%d  +  %di]=",z1.r,z1.i,z2.r,z2.i);
      sumac(z1,z2);
      printf("\n\n");
      break;    
 case'b': system("cls");
  printf("\n\tIngrese los coeficientes de z1 y z2 de la forma [a+bi]:\n\n");
  printf("\t     z1\t\t     z2\n");
  printf("\t([a   +   bi])    *    ([c  +  di])\n   ");
  gotoxy(10,7);
  scanf("%d ",&z1.r);
  gotoxy(20,7);
  scanf("%d ",&z1.i);
  gotoxy(32,7);
  scanf("%d ",&z2.r);
  gotoxy(40,7);
  scanf("%d ",&z2.i);
  printf("\n\t[%d  +  %di]  *  [%d  +  %di]=",z1.r,z1.i,z2.r,z2.i);
  mult(z1,z2);
  printf("\n\n");
  break;
    }
}
//FUNCION DE MULTIPLICACION
int mult(struct complejos z1,struct complejos z2){
  //(a+bi)(c+di)=(ac-bd) + (ad+cb)i 
  int ac,bd,ad,cb,cd,res1,res2;
  //ac
  ac=z1.r*z2.r;
  //bd
  bd=z1.i*z2.i;
  //ad
  ad=z1.r*z2.i;
  //cb
  cb=z1.i*z2.r;
  res1=ac-bd;
  res2=ad+cb; 
  printf("%d  + %di",res1,res2);
}

int sumac(struct complejos z1,struct complejos z2)
{
  z1.r+=z2.r;
  z1.i+=z2.i; 
  printf("%d + %di",z1.r,z1.i);
} 

