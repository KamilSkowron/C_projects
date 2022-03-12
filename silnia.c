	#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {

		//wybor programu


		int w;
		int test;

start:
		system("cls");	

		printf("Witaj w moim wielofunkcyjnym programie.\n");
		printf("Jezeli bedziesz wrocic sie do poprzedniego menu wpisz litere.\n");
		printf("Napisz numer programu ktory chcesz wykorzystac:\n");
		printf("1. Kalkulator silnii\n");
		printf("2. Zwykly kalkulator\n");
		printf("3. Podzielnosc liczb\n");
		printf("4. Potegowanie liczb\n");
		printf("5. Operacje na macierzach\n");

		printf("\nWybrales: ");


	
		test = scanf("%d",&w);
		if(test){
		if(w!=1 && w!=2 && w!=3 && w!=4 && w!=5) goto start;
	
		switch(w){

		//program 1
		case 1:		
		{

		system("cls");

		int n;
	
		printf("Witaj w kalkulatorze silni. Aby cofnac wpisz litere.\n\n");
silnia:
		printf("Podaj swoja liczbe: ",n);		
		test = scanf("%lld",&n);
		if(test==0) goto start;
		unsigned long long int stala=1;

			if(n<0){
			printf("Liczba nie moze byc ujemna!\n\n");
			goto silnia;
			}
			if(n>20){
			printf("Liczba zbyt duza.\n\n");
			goto silnia;
			}
			
			else{
				while(n>1){
				stala=stala*n;
				--n;
						}
			printf("Silnia z niej wynosi %llu\n\n",stala);
			}
			
		goto silnia;
		}



		//program 2
		case 2:
		{
			
			
			int w1;
			
			float a1;
			float a2;
			
			int od1;
			int od2;
			
			float dz1;
			float dz2;
			
			int mn1;
			int mn2;
zwykly:
			system("cls");
			printf("Witaj w zwyklym kalkulatorze.\n");
			printf("Powiedz, co chcesz zrobic?\n");	
			printf("1. Dodawanie\n");
			printf("2. Odejmowanie\n");
			printf("3. Dzielenie\n");
			printf("4. Mnozenie\n\n");
			
			printf("\n\n\nWybrales: ");
			test = scanf("%d",&w1);
			if(test==0) goto start;
			printf("\n");
				if(w1>=1 && w1<=4){
				switch(w1){
					case 1:
						{
							printf("Wpisz pierwsza liczbe: ");
						
							test =scanf("%f",&a1);
							if(test==0) goto start;
						
							printf("Wpisz druga liczbe: ");
							test =scanf("%f",&a2);
							if(test==0) goto start;
							printf("Wynik jest rowny: %f",a1+a2);
							getch();
						}
						goto zwykly;
					case 2:
						{
							printf("Wpisz pierwsza liczbe: ");
							test =scanf("%d",&od1);
							if(test==0) goto start;
							printf("Wpisz druga liczbe: ");
							test =scanf("%d",&od2);
							if(test==0) goto start;	
							printf("Wynik jest rowny: %d",od1-od2);
							getch();
						}
						goto zwykly;
					case 3:
						{
							printf("Wpisz pierwsza liczbe: ");
							test= scanf("%f",&dz1);
							if(test==0) goto start;
							printf("Wpisz druga liczbe: ");
							test= scanf("%f",&dz2);
							if(test==0) goto start;
							printf("Wynik jest rowny: %f",dz1/dz2);
							getch();
						}
						goto zwykly;
					case 4:
						{
							printf("Wpisz pierwsza liczbe: ");
							test = scanf("%d",&mn1);
							if(test==0) goto start;
							printf("Wpisz druga liczbe: ");
							test= scanf("%d",&mn2);
							if(test==0) goto start;
							printf("Wynik jest rowny: %d",mn1*mn2);
							getch();
						}
						goto zwykly;
				}
		    }
			if(w1!=1 && w1!=1 && w1!=2 && w1!=3 && w1!=4) goto zwykly;
		}

		//program 3
		case 3:
			{
			int w2;
			float dzielna;
			

dzielenie:
			system("cls");
			printf("Witaj w programie sprawdzajacym podzielnosc.\n");
			printf("Wybierz ktora podzielnosc chcesz sprawdzic:\n");
			printf("1. Podzielnosc przez 2\n");
			printf("2. Podzielnosc przez 3\n");
			printf("3. Podzielnosc przez 5\n");
			
			printf("\nWybrales: ");
			test= scanf("%d",&w2);
			if(test==0) goto start;
				if(w2==1 || w2==2 || w2==3){
								
				switch(w2){
					case 1:
						{
							printf("\nWpisz liczbe i sprawdz czy jest podzielna przez 2: ");
							test=scanf("%f",&dzielna);
							if(test==0) goto start;
							int sprawdzenie = dzielna/2;
							dzielna= dzielna/2;
							if(dzielna==sprawdzenie)
								{
								printf("Tak\n");
								}
							else{
								printf("Nie\n");
							}
							getch();
							
						}
						printf("\n");
						goto dzielenie;
					case 2:
						{
							printf("\nWpisz liczbe i sprawdz czy jest podzielna przez 3: ");
							test= scanf("%f",&dzielna);
							if(test==0) goto start;	
							int sprawdzenie = dzielna/3;
							dzielna= dzielna/3;
							if(dzielna==sprawdzenie)
								{
								printf("Tak\n");
								}
							else{
								printf("Nie\n");	
							}
							getch();
						}
						printf("\n");
						goto dzielenie;
					case 3:
						{
							printf("\nWpisz liczbe i sprawdz czy jest podzielna przez 5: ");
							test= scanf("%f",&dzielna);
							if(test==0) goto start;
							int sprawdzenie = dzielna/5;
							dzielna= dzielna/5;
							if(dzielna==sprawdzenie)
								{
								printf("Tak\n");
								}
							else{
								printf("Nie\n");	
							}
							getch();
						}
						printf("\n");
						goto dzielenie;

					}
				}
				if(w2!=1 && w2!=2 && w2!=3) goto dzielenie;
			}
			
			
		//program 4
		case 4:
			{
			float liczp;
			float p;
			float wynikp;
				poteg:
				system("cls");
				printf("Witaj w kalkulatorze potegowania. \n");	
				printf("\nWpisz swoja liczbe ktora chcesz spotegowac: ");
				test= scanf("%f",&liczp);
				if(test==0) goto start;
				printf("Wpisz potege: ");
				test= scanf("%f",&p);
				if(test==0) goto start;
				wynikp = pow(liczp,p);
				printf("Liczba wynosi: %f",wynikp);
				getch();
				goto poteg;
			}
			
			
		//program 5	
		case 5:
			{
				int w5;
				int wiersz;
				int kolumna;
				
				int wiersz1;
				int kolumna1;				
				
				int tab[10][10], tab1[10][10], tab2[10][10];
				int n,m,i,j;
				
				system("cls");
								
				printf("Co chcesz zrobiæ z macierzami?\n\n");
				printf("1. Dodawanie\n");
				printf("2. Odejmowanie\n");
				printf("3. Mnozenie\n");
				printf("4. Dzielenie\n");
				
				printf("\nWybrales: ");
				scanf("%d",&w5);
					
					switch(w5){
						
						//dodawanie
						case 1:
							{
								printf("\n\nWpisz liczbe wierszy: ");
								scanf("%d",&wiersz);
								printf("Wpisz liczbe kolumn: ");
								scanf("%d",&kolumna);
							
								for(i=0;i<wiersz;i++){
									for(j=0;j<kolumna;j++){
									
										printf("tab[%d,%d]",i,j);
										scanf("%d",&tab[i][j]);
										printf("tab1[%d,%d]",i,j);
										scanf("%d",&tab1[i][j]);
								
									}
								}
								printf("\n");
								
								for(i=0;i<wiersz;i++){									
									for(j=0;j<kolumna;j++){
										tab2[i][j]=tab[i][j]+tab1[i][j];
										printf("\t%1d",tab2[i][j]);

									}	printf("\n");
								}getch();
								goto start;
							}
							
						//odejmowanie
						case 2:
							{
								
								printf("\n\nWpisz liczbe wierszy: ");
								scanf("%d",&wiersz);
								printf("Wpisz liczbe kolumn: ");
								scanf("%d",&kolumna);
							
								for(i=0;i<wiersz;i++){
									for(j=0;j<kolumna;j++){
									
										printf("tab[%d,%d]",i,j);
										scanf("%d",&tab[i][j]);
										printf("tab1[%d,%d]",i,j);
										scanf("%d",&tab1[i][j]);
								
									}
								}
								printf("\n");
								
								for(i=0;i<wiersz;i++){									
									for(j=0;j<kolumna;j++){
										tab2[i][j]=tab[i][j]-tab1[i][j];
										printf("\t%1d",tab2[i][j]);

									}	printf("\n");
								}getch();
								goto start;								
								
							}
						//mno¿enie
						case 3:
						{
							
							printf("\n\nWpisz liczbe wierszy macierzy A: ");
							scanf("%d",&wiersz);
							printf("Wpisz liczbe kolumn A: ");
							scanf("%d",&kolumna);
							
							printf("\nWpisz liczbe wierszy macierzy B: ");
							scanf("%d",&wiersz1);
							printf("Wpisz liczbe kolumn B: ");
							scanf("%d",&kolumna1);							
							
							if(kolumna!=wiersz1) printf("Blad! Operacja niemozliwa!");								
							getch();								
							
							for(i=0;i<wiersz;i++){
								for(j=0;j<kolumna;j++){
									printf("MacierzA[%d,%d]",i,j);
									scanf("%d",&tab[i][j]);
								}								
							}
							
							for(i=0;i<wiersz1;i++){
								for(j=0;j<kolumna1;j++){
									printf("MacierzB[%d,%d]",i,j);
									scanf("%d",&tab1[i][j]);
								}
							}
							getch();
							goto start;
							
						}	
					}					
				}
			}
			
			
			
		
		}
		char c;
		while(scanf("%c",&c) && c!='\n'){}
		test=1;
		if (test==1)goto start;
koniec:
		printf("%d",test);
		return 0;

}
