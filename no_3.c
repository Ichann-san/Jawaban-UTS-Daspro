#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <math.h>

void get_grid(bool (*listrik)[4]){
printf("Input 1 jika nyala, 0 jika padam\n");
for(int i=0; i<4; i++){
    for(int j=0; j<3; j++){
        scanf("%d", &listrik[i][j]);
    }
}}

void display_grid(bool (*listrik)[4]){
printf("Berikut merupakan grid nya\n");
for(int i=0; i<4; i++){
    for(int j=0; j<3; j++){
        printf("%d ", listrik[i][j]);
    }
    printf("\n");
}}

bool power_ok(bool (*listrrik)[4]){
    for(int i=0; i<4; i++){
        for(int j=0; j<3; j++){
        if(listrrik[i][j]==0) return false;
        }
    }
    return true;
}

void where_off(bool (*listrik)[4]){
    for(int i=0; i<4; i++){
        for(int j=0; j<3; j++){
            if(listrik[i][j]==0){
                printf("(%d,%d) ", i, j);
}}}}

int main(){
bool listrik[3][4];
get_grid(listrik);
display_grid(listrik);
printf("Hasil dari fungsi power_ok : %d\n", power_ok(listrik));
if(power_ok(listrik)){
    printf("Daya menyala di seluruh jaringan.");
} else {
    printf("Daya mati di sektor: ");
    where_off(listrik);
}
return 0;
}