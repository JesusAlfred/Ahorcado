#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <conio.h>
#include <ctype.h>
#include<time.h>


#define TAM 50
#define TOTAL_PALABRAS 30

void mono(int err);

int main(void){
	srand(time(NULL));
	do{
	inicio:system("cls");
		char palabra[TAM], auxpalabra[TAM], letra=0, cad[TAM];
		int termino=0, contador=0, flag, error=0, i=0, aleatoria;
		char numeros[TAM];
	
		printf("1) Jugador contra Maquina (PvE)\n");
		printf("2) Jugador contra Jugador (PvP)\n");
		printf("3) Juego de Numeros contra Maquina(PvE)\n");
		printf("Ingrese Su Eleccion: \n");
		switch(tolower(getch())){
			case '1':
				aleatoria=rand() % TOTAL_PALABRAS;
				switch(aleatoria){
					case 0:strcpy(palabra,"electrodomestico");break;
					case 1:strcpy(palabra,"jugar");break;
					case 2:strcpy(palabra,"zorro");break;
					case 3:strcpy(palabra,"programacion");break;
					case 4:strcpy(palabra,"astronauta");break;
					case 5:strcpy(palabra,"colegial");break;
					case 6:strcpy(palabra,"computadora");break;
					case 7:strcpy(palabra,"artefacto");break;
					case 8:strcpy(palabra,"candelabro");break;
					case 9:strcpy(palabra,"estudiante");break;
					case 10:strcpy(palabra,"prefectura");break;
					case 11:strcpy(palabra,"biblioteca");break;
					case 12:strcpy(palabra,"carro");break;
					case 13:strcpy(palabra,"celular");break;
					case 14:strcpy(palabra,"camisa");break;
					case 15:strcpy(palabra,"arbol");break;
					case 16:strcpy(palabra,"ropero");break;
					case 17:strcpy(palabra,"universidad");break;
					case 18:strcpy(palabra,"autopista");break;
					case 19:strcpy(palabra,"aeroplano");break;
					case 20:strcpy(palabra,"bote");break;
					case 21:strcpy(palabra,"elefante");break;
					case 22:strcpy(palabra,"pintura");break;
					case 23:strcpy(palabra,"mexico");break;
					case 24:strcpy(palabra,"agua");break;
					case 25:strcpy(palabra,"tabasco");break;
					case 26:strcpy(palabra,"soleado");break;
					case 27:strcpy(palabra,"isomorfismo");break;
					case 28:strcpy(palabra,"arreglos");break;
					case 29:strcpy(palabra,"variable");break;
				}
				break;
			case '2':
				printf("\nIngrese palabra o frase\n");
				fflush(stdin);
				gets(palabra);
				break;
			case '3':
				for(int i = 0; i<10; i++){
					palabra[i] = rand() % 10 + 48;
				}
				break;
			default:
				printf("\nUse una opcion valida");
				system("pause");
				goto inicio;
					break;
		}
		strcpy(auxpalabra, palabra);
		system("cls");
		for(i=0; i<strlen(palabra); i++){
			if(palabra[i]==' ')
				cad[i]=' ';
			else {
				cad[i]='-';
				palabra[i]=tolower(palabra[i]);
				auxpalabra[i]=tolower(auxpalabra[i]);
			}
		}
		do{
			mono(error);
			printf("[");
			flag=0;
			for(i=0; i<strlen(palabra); i++)
				if(letra==auxpalabra[i])
					cad[i]=auxpalabra[i];
			for(i=0; i<strlen(palabra); i++)
				printf("%c",cad[i]);
			printf("]\nIngrese letra\n");
			scanf("%c", &letra);
			letra=tolower(letra);
			for(i=0; i<strlen(palabra); i++)
				if(letra==palabra[i] || palabra[i]==' '){
					palabra[i]='/';
					flag=1;
					contador++;
				}
				if(flag==0){
					error+=1;
					printf("\t\t\tError numero %i de 6\n",error);
					if(error==6)
						break;
					printf("Presione cualquier tecla para continuar\n");
					getch();
				}
				system("cls");
		}while(contador<strlen(palabra));
		for(i=0; i<strlen(palabra); i++)
			if(palabra[i]=='/')
				termino+=1;
		if(termino==strlen(palabra))
			printf("Ha Ganado\n%s\n",auxpalabra);
		else
			printf("Perdiste, la palabra o frase era %s\n",auxpalabra);

		printf("Desea Continuar?(s/n)\n");
	}while(tolower(getch()=='s'));

	system("Pause");
	return 0;
}

void mono(int err){
	if(err == 0){
		printf("%c%c%c%c%c%c\n",218,196,196,196,196,194);
		printf("%c\n",179);
		printf("%c\n",179);
		printf("%c\n",179);
		printf("%c\n",179);
		printf("%c\n",179);
		printf("%c\n",193);
	}else if(err == 1){
		printf("%c%c%c%c%c%c\n",218,196,196,196,196,194);
		printf("%c    %c\n",179,219);
		printf("%c\n",179);
		printf("%c\n",179);
		printf("%c\n",179);
		printf("%c\n",179);
		printf("%c\n",193);
	}else if(err == 2){
		printf("%c%c%c%c%c%c\n",218,196,196,196,196,194);
		printf("%c    %c%c\n",179,219,218);
		printf("%c   %c%c%c\n",179,218,197,217);
		printf("%c   %c\n",179,217);
		printf("%c\n",179);
		printf("%c\n",179);
		printf("%c\n",193);
	}else if(err == 3){
		printf("%c%c%c%c%c%c\n",218,196,196,196,196,194);
		printf("%c    %c%c\n",179,219,218);
		printf("%c   %c%c%c\n",179,218,197,217);
		printf("%c   %c%c\n",179,217,179);
		printf("%c    %c\n",179,193);
		printf("%c\n",179);
		printf("%c\n",193);
	}else if(err == 4){
		printf("%c%c%c%c%c%c\n",218,196,196,196,196,194);
		printf("%c    %c%c\n",179,219,218);
		printf("%c   %c%c%c\n",179,218,197,217);
		printf("%c   %c%c\n",179,217,179);
		printf("%c   %c%c\n",179,218,193);
		printf("%c   %c\n",179,217);
		printf("%c\n",193);
	}else if(err == 5){
		printf("%c%c%c%c%c%c\n",218,196,196,196,196,194);
		printf("%c    %c%c\n",179,219,218);
		printf("%c   %c%c%c\n",179,218,197,217);
		printf("%c   %c%c\n",179,217,179);
		printf("%c   %c%c%c\n",179,218,193,191);
		printf("%c   %c %c\n",179,217,192);
		printf("%c\n",193);
	}else if(err == 6){
		printf("%c%c%c%c%c%c\n",218,196,196,196,196,194);
		printf("%c    %c%c\n",179,219,218);
		printf("%c   %c%c%c\n",179,218,197,217);
		printf("%c   %c%c\n",179,217,179);
		printf("%c   %c%c%c\n",179,218,193,191);
		printf("%c   %c %c\n",179,217,192);
		printf("%c\n",193);
	}
	
}