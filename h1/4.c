//Технологично училише Електронни системи към ТУ София, http://www.elsys-bg.org
//11 А клас
//Номер 12
//Иван Мирославов Манев
/*4. Да се разработи програма, която изисква от потребителя да въведе две целочислени числа, x и y, където x < y. Да се намерят и изведат всички числа на Фибоначи в интервала [x, y].*/

#include <stdio.h>


int main()
{
	int a;
	int b;
	int i=0;
	int x=0;
	int y=1;
	int s;
		

	printf("Wuwedete purwoto chislo: ");
	scanf("%d", &a);
	
	printf("Wuwedete wtoroto chislo: ");
	scanf("%d", &b);
			if (x<y){
				for (i=0; i<=b; i++){
					s = x+y;
					x=y;
					y=s;
					if ((x>=a) && (x<=b)){
						printf("%d\n", x);
					}
					
					
					
				}
			}		

				
}
