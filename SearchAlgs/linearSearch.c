#include <stdio.h>
 
int linearSearch(int list[], int listSize, int target){
    for(int i = 0; i < listSize; i++){
        if(list[i] == target){
            return i;
        }
    }

    return -1;
}

int main(){
    int list[] = {1,5,3,45,6,89,21,4};
    int target = 45;

    int listSize = sizeof(list) / sizeof(list[0]);

    int value = linearSearch(list, listSize, target);

    if(value != -1)
        printf("O valor: %d existe na casa: %d\n", target, value);

    else 
        printf("Não foi localizado no array o valor: %d", target);

    return 0;
}