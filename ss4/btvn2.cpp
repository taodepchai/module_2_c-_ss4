#include<stdio.h>
#include<iostream>
using namespace std;
int main() {
	int a,b,c;
	printf ("nhap 3 canh cua tam giac : ");
	 scanf ("%d %d %d", &a , &b, &c);
	if (a+b>c || a+c>b || b+c>a){
		if ( a==b || a==c || b==c) {
			printf (" la tam giac can");
		} else if ( a*a+b*b==c*c || a*a+c*c==b*b || b*b+c*c==a*a) {
			printf ("la tam giac vuong");
		} else if ( (a*a+b*b==c*c && a==b) || (a*a+c*c==b*b && a==c) || (b*b+c*c==a*a && b==c) ) {
			printf ("la tam giac vuong can");	
		} else if ( a==b && a==c) {
			printf ("la tam giac deu");
		} else printf ("la tam giac thuong");
	} else printf (" khong phai tam giac");
return 0;	
}
