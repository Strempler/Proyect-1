void captura1(int A[3]){
  int i;
  printf("\nIngresa el polinomio 1: \n");
    gotoxy(4,3);
    printf("x%c",253);
    gotoxy(7,3);
    printf("+    x");
    gotoxy(13,3);
    printf(" +");
   for(i=0;i<3;i++){
     gotoxy(i*(10-i),3);
    scanf("%d",&A[i]);}
  }

void captura2(int B[3]){
  int i;
  printf("\nIngresa el polinomio 2: \n  ");
     gotoxy(4,7);
     printf("x%c",253);
     gotoxy(7,7); 
     printf("+    x");
     gotoxy(13,7);
     printf(" +");
     for(i=0;i<3;i++){
       gotoxy(i*(10-i),7);
       scanf("%d",&B[i]);
     }
  }

int sumar(int A[3],int B[3]){
  int C[3],i;
  for(i=0;i<3;i++)
    C[i]=A[i]+B[i];
  printf("\nLa suma del polinomio es: \n");
  gotoxy(4,11);
  printf("x%c",253);
  gotoxy(7,11); 
  printf("+    x");
  gotoxy(13,11);
  printf(" + ");
  for(i=0;i<3;i++){
    gotoxy(i*(10-i),11);
  printf("%d",C[i]);
  }
  printf("\n\n");
  return C[i];
}
