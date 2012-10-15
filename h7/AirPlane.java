// Технологично училише Електронни системи към ТУ София, http://www.elsys-bg.org
// 11 А клас
// Номер 12
// Иван Мирославов Манев
// 1. Да се разработи програма, която автоматично подрежда групи хора - по 1/2/3 човека един до друг в даден самолет.

import java.util.*;
public class AirPlane {

	private int[][] seats = new int[6][27];
	private int sum = 0;
	private boolean taken = false;

	public void printSeats() {
			for (int r=0; r<27; r++) {
				for (int c=0; c<6; c++) {
					System.out.print(" " + seats[c][r]);
					if(c==2) System.out.print("            ");
				}
				System.out.println("");
			}
	}

	public void fillSeats(int rvalue) {
		for(int r=0; r<27; r++) {
			for(int c=0; c<6; c++) {
				if(rvalue == 1) { 
					if(seats[c][r] == 0) {
						seats[c][r] = 1;
						sum += rvalue;
						break;
					}
				}
				if(rvalue == 2 && (c!=2) && (c!=5)) {
					if((seats[c][r] == 0) && (seats[c+1][r] == 0)) {	 							seats[c][r] = 1;
						seats[c+1][r] = 1;
						sum += rvalue;
						break;
					}
				}

				if(rvalue == 3 && ((c == 0) || (c == 3))) {
				if((seats[c][r] == 0) && (seats[c+1][r] == 0) && (seats[c+2][r] == 0)) {
					seats[c][r] = 1;
					seats[c+1][r] = 1;
					seats[c+2][r] = 1;
					sum += rvalue;
					break;
					}
				}

			}

		}


	}

	public int untakenSeats() {
			int untakenSeats;
			if(sum < 162) {
				untakenSeats = 162 - sum;
				return untakenSeats;
			} else {
				return 0;
			}
	}
 




	public static void main(String[] args){
			int rvalue;
			AirPlane plane = new AirPlane();
			plane.printSeats();

			while(plane.untakenSeats() != 0){
				rvalue = new Random().nextInt (3) + 1;
				plane.fillSeats(rvalue);
			}
			System.out.println();
			plane.printSeats();

	}
}
