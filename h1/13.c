//Технологично училише Електронни системи към ТУ София, http://www.elsys-bg.org
//11 А клас
//Номер 12
//Иван Мирославов Манев
/* 13. Да се разработи програма, която изисква от потребителя да въведе целочислено число x, където 0<x<10. Да се инициализира масив от 10 елемента. Да се намери сумата от всички числа в интервала [0; 1000) делящи се на x и да се запише като първа стойност в масива. Да се намери сумата от всички числа в интервала [0;1000) деляща се на 2x и да се запише като втора стойност в масива. Аналогично да се намери сумата на всички числа делящи се на Nx за N в интервала [1;10] и да се запишат като елемент N-1 в масива. Масивът да се изведе на стандартния изход. */

#include <stdio.h> 


main()
{


	int x;
	int n;
	int array[10];
	int i;
	int m=0;
	int a=0;
	int s;
	
	printf("wuwedi chisloto x\n");
	scanf("%d\n", &x);

	if((0<x) && (x<10)) {
			
			for (n=1; n<10; n++) {
		       	 for (i=0; i<1000; i++) {
					
					if (i % (n*x) == 0) {		
					m = n-1;
					array[m] = a + i;
					
					               }
		
		

			          	      }
					    }
				printf("masiwa e : ");
				for (s=0; s<10; s++) {
				printf ("%d\n", array[s]);
				
						}
}

		
		
   	else {
		printf("x ne e mejdu 0 i 10");
   
			}




}
