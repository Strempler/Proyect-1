           //Algoritmo para una calculadora de matrices//

//Funcion principal//
int suma(void);
void gotoxy(x,y);
int principal(void);
int principal(void){
 suma();
}

int suma(void){
  int m1[100][100];
  int m2[100][100];
  int mres[100][100];
  int fm1,fm2,cm1,cm2,a,b;
  system("cls");
  do{
    system("cls");
  printf("\tHola, ingresa el numero de filas y columnas de tus matrices\n\n");
  printf("//recuerda que las matrices deben tener la misma cantidad de filas y columnas//\n");
  printf("\n\tMatriz 1\n");
  printf("Filas: "); scanf("%d",&fm1);
  printf("\nColumnas: "); scanf("%d",&cm1);
  printf("\n\tMatriz 2");
  printf("\nFilas: "); scanf("%d",&fm2);
  printf("\nColumnas: "); scanf("%d",&cm2);
  }while(fm1!=fm2 || cm2!=cm1);
    system("cls");
    printf("Matriz 1");
  for(a=0; a<fm1; a++){
    for(b=0; b<cm1; b++){
      printf("\nIngrese el dato de la posicion: [%d][%d]\n",a,b);
      scanf("%d",&m1[a][b]);
      system("cls");
    }
  }
  system("cls");
  printf("Matriz 1");
  for(a=0; a<fm1; a++){
    printf("\n");
    for(b=0; b<cm2; b++){
      printf("%d ",m1[a][b]);
    }
  }


  gotoxy(10,8);
  printf("\nMatriz 2");
  for(a=0; a<fm2; a++){
    for(b=0; b<cm2; b++){
      gotoxy(10,10);
      printf("\nIngrese el dato de la posicion: [%d][%d]\n",a,b);
      scanf("%d",&m2[a][b]);
      system("cls");
    }
  }

  system("cls");
  printf("Matriz 1");
  for(a=0; a<fm1; a++){
    printf("\n");
    for(b=0; b<cm2; b++){
      printf("%d ",m1[a][b]);
    }
  }

  printf("\n\n");
  printf("Matriz 2");
  for(a=0; a<fm1; a++){
    printf("\n");
    for(b=0; b<cm2; b++){
      printf("%d ",m2[a][b]);
    }
  }
  

  for(a=0; a<fm1; a++){
    for(b=0; b<cm2; b++){
      mres[a][b] = m1[a][b] + m2[a][b];
    }
  }

  printf("\n\n");
  printf("Matriz resultante");
      for(a=0; a<fm1; a++){
	printf("\n");
	for(b=0; b<cm2; b++){
	  printf("%d   ",mres[a][b]);
	}
      }
      printf("\n");
}
