#include<stdio.h>
int main() {
	int year,month,day;
	printf ("nhap nam ");
	 scanf ("%d", &year);
	printf ("nhap thang ");
	 scanf ("%d", &month);
	printf ("nhap ngay ");
	 scanf ("%d" , &day);
	if (year < 0) {
		printf (" nam khong hop le");	
	} else if ( month <0 || month >12) {
		printf (" thang khong hop le");
	} else {
	switch (month) {
	case 1:
	  if (day < 0 || day > 31) {
	  	printf ("ngay khong hop le");
	  } else printf (" ngay %d thang %d nam %d hop le", day , month , year);
	  break;
	case 2:
	  if (year%4 == 0 && year%100 != 0) {
	     if (day < 0 || day > 29) {
	  	printf ("ngay khong hop le");
	  } else printf (" ngay %d thang %d nam %d hop le", day , month , year);
	 } else if (day < 0 || day > 28) {
	  	printf ("ngay khong hop le");
	  } else printf (" ngay %d thang %d nam %d hop le", day , month , year);
	  break;
	case 3:
	  if (day < 0 || day > 31) {
	  	printf ("ngay khong hop le");
	  } else printf (" ngay %d thang %d nam %d hop le", day , month , year);
	  break;
	case 4:
	  if (day < 0 || day > 30) {
	  	printf ("ngay khong hop le");
	  } else printf (" ngay %d thang %d nam %d hop le", day , month , year);
	  break;
	case 5:
	  if (day < 0 || day > 31) {
	  	printf ("ngay khong hop le");
	  } else printf (" ngay %d thang %d nam %d hop le", day , month , year);
	  break;
	case 6:
	  if (day < 0 || day > 30) {
	  	printf ("ngay khong hop le");
	  } else printf (" ngay %d thang %d nam %d hop le", day , month , year);
	  break;
	case 7:
	  if (day < 0 || day > 31) {
	  	printf ("ngay khong hop le");
	  } else printf (" ngay %d thang %d nam %d hop le", day , month , year);
	  break;
	case 8:
	  if (day < 0 || day > 31) {
	  	printf ("ngay khong hop le");
	  } else printf (" ngay %d thang %d nam %d hop le", day , month , year);
	  break;              
	case 9:
	  if (day < 0 || day > 30) {
	  	printf ("ngay khong hop le");
	  } else printf (" ngay %d thang %d nam %d hop le", day , month , year);
	  break;
	case 10:
	  if (day < 0 || day > 31) {
	  	printf ("ngay khong hop le");
	  } else printf (" ngay %d thang %d nam %d hop le", day , month , year);
	  break;
	case 11:
	  if (day < 0 || day > 30) {
	  	printf ("ngay khong hop le");
	  } else printf (" ngay %d thang %d nam %d hop le", day , month , year);
	  break;
	default : if (day < 0 || day > 31) {
	  	printf ("ngay khong hop le");
	  } else printf (" ngay %d thang %d nam %d hop le", day , month , year);
 }
}
}
