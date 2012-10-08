//Технологично училише Електронни системи към ТУ София, http://www.elsys-bg.org
//11 А клас
//Номер 12
//Иван Мирославов Манев
/*16. Да се разработи програма, която изисква от потребителя да въведе целочислено число x, където x e интервала [0; +∞). Да се намерят първите 10 нечетни числа делители на x и да се запишат в масив. Масивът да се изведе на екрана и да се намерят простите числа в този масив.*/

#include <stdio.h>
#define MAX 10
main(){

	int x;
	int array[MAX];
	int i;
	int a;
	int b;
	int c;

	printf("wuwedi chisloto x\n");
	scanf("%d\n", &x);

	while (a=MAX-1) {
		for (i=0; i>0; i++)	{
			if (i%2 != 0){
				if (i%x == 0) {
					array[a] = i;
					a=a+1;
						}
				     }
					}
			}
 for(c=0; c<MAX; c++){
	printf("%d\n", array[a]);


		}

	printf("prostite chisla w masiwa sa:");
	for (a=0; a=MAX-1; a++)	{
		for (b=2; b <= a-1; b++){
		if (array[a]%b == 0) {
			printf("%d\n", a);
				     }

		}			
					}
}








