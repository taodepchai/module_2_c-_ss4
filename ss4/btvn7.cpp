#include<stdio.h>
int main () {
	int basic_salary,day;
	printf ("nhap luong co ban ");
	 scanf ("%d", &basic_salary);
	printf ("nhap ngay cong thuc te ");
	 scanf ("%d", &day);
	int residual = day - 26;
	if (residual > 0) {
		printf ( "luong thang nay la %d" , basic_salary*26 +((basic_salary / 100 *50)+basic_salary * residual) );
	} else printf ("luong thang nay la %d" , basic_salary*day);
}
