//Технологично училише Електронни системи към ТУ София, http://www.elsys-bg.org
//11 А клас
//Номер 12
//Иван Мирославов Манев
/*6. Да се разработи програма, която изисква от потребителя да въведе целочислено число x, където 0<x<10. Да се инициализира масив от 100 целочислени елемента. Стойностите на елементите да са случайни числа в интервала [0, 100). Елементите на масива да се подредят така, че числата завършващи на x да са в началото.*/

# include <stdio.h>
# include <stdlib.h>
#define MAX 100

void fillarray(int array[MAX]);
void printarray(int array[MAX]);
void main(void);
void sortarray(int array[MAX]);

void main(void) {
	int array[MAX];
	int x;
	printf("wuwedi x\n");
	scanf("%d\n", &x);
	fillarray(array);
	sortarray(array);
	printf("sortiraniyat masiw:");
	printarray(array);
	
		}

void fillarray(int array[MAX]){
	int i;
	for (i=0; i<=MAX; i++){
		 array[i] = ( rand() %100); 
				}
		
}

void printarray(int array[MAX]){
	int i;
	for (i=0; i<MAX; i++){
		printf("%d\n", array[i]); 
			     }
		
}

void sortarray(int array[MAX]){
	
	int a;
	int b;
	int c;
	int x;

	for (a<0; a<MAX; a++){
		 for (b=(a+1); b<MAX; b++){
				
					if (array[a] % x == 0) {
							c = array[a];
							array[a] = array[b];
							array[b] = c;
								    }
					if  (array[b] % x == 0) {
							c = array[a];
							array[a] = array[b];
							array[b] = c;
								    }

						 	   } 
				      	    }
		
}
