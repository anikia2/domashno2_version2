//Технологично училише Електронни системи към ТУ София, http://www.elsys-bg.org
//11 А клас
//Номер 12
//Иван Мирославов Манев
/*5. Да се разработи програма, която изисква от потребителя да въведе целочислено число, x, където 0 < x < 10. Да се инициализират масива от 10 елемента. Стойностите на елементите на масива да са равни на косинус от индекса на елемента. Да се изведе масивът, след което да се сортира в низходящ ред и отново да се изведе.*/
# include <stdio.h>
# include <math.h>
# define MAX 10

int main(){
	int x,i,a=0,j;
	double c = 0;
	double array[MAX];
	scanf("%d", &x);
	if ((x>0) && (x<10)){
		for (i=0; i<MAX; i++)
		array[i]= cos((double)i);
		for (a=0; a<MAX; a++)
		printf("%lf ", array[a]);
		for (i=0; i<MAX-1; i++){
			a=i;
			for (j=i+1; j<MAX; j++)
			if (array[a]<array[j]) a=j;
			c=array[i];
			array[i]=array[a];
			array[a]=c;
		}
		printf("\n");
		for (a=0; a<MAX; a++)
		printf("%lf ", array[a]);	
	}
	else printf("x ne e mejdu 0 i 10\n");
	return 0;
}
