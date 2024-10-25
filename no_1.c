#include <stdio.h>
#include <math.h>

int main(){
double hasil, nilai_sementara=1, euler=exp(1);
euler *= 1000000;
hasil = 1000000*pow(((2*nilai_sementara)+1)/((2*nilai_sementara)-1), nilai_sementara);
while(hasil-euler >= 1){
hasil = 1000000*pow(((2*nilai_sementara)+1)/((2*nilai_sementara)-1), nilai_sementara);
hasil = floor(hasil);
nilai_sementara++;
}
printf("Nilai X        : %.0llf\n", nilai_sementara);
printf("Approach Rumus : %.7llf\n", hasil/1000000);
printf("Nilai e        : %.7llf\n", (double) euler/1000000);
return 0;
}

