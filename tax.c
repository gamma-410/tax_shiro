#include <stdio.h>
int main (void                 ) {
int f;
int consumptionTax;
int taxIncludedPrice;
printf (">>>");
scanf ("%d", &f);
consumptionTax = f*0.1;
taxIncludedPrice = f+consumptionTax;
printf ("¥%d(tax=¥%d)\n",taxIncludedPrice,consumptionTax);
return 0;
}
