//Технологично училише Електронни системи към ТУ София, http://www.elsys-bg.org
//11 А клас
//Номер 12
//Иван Мирославов Манев
/* 9. Да се разработи програма, която изисква от потребителя да въведе число x, където 0<x<1. Да се намери числото пи чрез следното развитие в ред:
1. 4-4/3+4/5-4/7+4/9-4/11+...4/N. Развитието в ред спира при 4/N<x. Получената стойност за пи да се изведе на екрана. 
*/
 #include <stdio.h>
 
main()
{


	float x;
	float n;
	double p;
	int a=0;
	int b=1;
	printf("wuwedi chisloto x\n");
	scanf("%f\n", &x);

	if((0<x) && (x<1)) {
			p = 4-(4/3);
		for (n=5; (4/n)<x; n=n+2) {
			if (a<b){
			p = p + (4/n);
			a = a + 2;
			n = n + 2;
				}
			if (a>b){
			p = p - (4/n);
			b = b + 2;
				}
						}

		printf("%f\n", p);

		   }
   	else {
		printf("x ne e mejdu 1 i 0\n");
   

}


}