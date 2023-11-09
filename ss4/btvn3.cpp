#include<stdio.h>
int main() {
	int new_electricity_number , old_electricity_number , value , price;
	printf ("nhap so dien cu ");
	 scanf ("%d", &old_electricity_number);
	printf ("nhap so dien moi ");
	 scanf ("%d", &new_electricity_number);
	value =  new_electricity_number - old_electricity_number;
	 if (value >= 200) {
	 	price = value * 30000;
	 } else if (value >=150) {
	 	price = value * 25000;
	 } else if (value >=100) {
	 	price = value *20000;
	 } else if (value >=50)  {
	 	price = value * 15000;
	 } else price = value * 10000; 
	printf ("tong tien dien la %d" ,price);
}
