//Технологично училише Електронни системи към ТУ София, http://www.elsys-bg.org
//11 А клас
//Номер 12
//Иван Мирославов Манев
/*3. Да се разработи програма, която изисква от потребителя да въведе две целочислени числа, x и y, където x < y. Да се намерят и изведат всички прости числа завършващи на 3 в интервал [x,y].
*/

#include <stdio.h>

int main () {

            int x;
            int y;
            int i;
            int b;

    printf("wuwedi x\n");
    scanf("%d", &x);
    printf("wuwedi y\n");
    scanf("%d", &y);
    if (x<y) {
                for (i=x; i<=y; i++)
                          {
                               if (i%10 == 3){

                                          for(b=2; b <= y-1; b++) {
                                          if(i%b == 0){
						
						printf("%d\n", i);
						      }
                                       
                                         			 }
                          			}
             }
}
    else { printf("y ne e po-golyamo ot x");

}
}
