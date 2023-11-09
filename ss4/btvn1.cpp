#include <stdio.h>
int main() {
    int num;
    printf ("nhap so: ");
    scanf ("%d", &num);
    if (num%5==0 && num%3==0) {
       printf ("%d chia het cho 3 va 5", num);
	} else if (num%5==0 && num%3!=0) {
	   printf ("%d chia het cho 5 nhung khong chia het cho 3", num);	
	} else if (num%5!=0 && num%3==0) {
	   printf ("%d khong chia het cho 5 nhung chia het cho 3", num);	
	} else printf ("%d khong chia het cho 5 va 3");
}	
