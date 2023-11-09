#include<stdio.h>
int main () {
	int num1,num2,num3,temp;
	char direct;
	printf (" nhap cac so ");
	 scanf ("%d %d %d", &num1, &num2, &num3);
	fflush(stdin);
	printf ("chon thu tu cua day (+ la tang, - la giam )");
	 scanf (" %c" , &direct);
	int max = num1, min = num2;
	 if ( max < num2) max = num2;
	 if ( max < num3) max = num3;
	 if ( min > num1) min = num1;
	 if ( min > num3) min = num3;
	 if (num1>min && num1 < max) temp = num1; 
	 if (num2>min && num2 < max) temp = num2; 
	 if (num3>min && num3 < max) temp = num3; 
	switch (direct) {
	  case '+' :
	  	printf ( " %d, %d, %d", min, temp, max );
	  	break;
	  default: printf ( " %d, %d, %d", max, temp, min );
	}
}
