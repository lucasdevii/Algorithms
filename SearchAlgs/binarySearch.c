#include <math.h>
#include <stdio.h>

int binarySearch(int book[], int bookSize, int targetPage){
    int top = bookSize - 1;
    int bottom = 0;
   

    while(bottom <= top){
        int currentMid = bottom + (top - bottom) / 2;

        if(targetPage == book[currentMid]){
            return currentMid;
        }
        else if(targetPage < book[currentMid]){ //O valor é menor
            top = currentMid - 1;
        }
        else if(targetPage > book[currentMid]){ // O valor é maior
            bottom = currentMid + 1;
        } 
    }

    return -1;
}

int main(){
    int book[] = {1,2,3,4,5,6,7,8,9,10,11,12,13,14,15};
    int targetPage = 5;

    int bookSize = sizeof(book) / sizeof(book[0]);

    int result =  binarySearch(book, bookSize, targetPage);

    if(result != -1){
        printf("indice da pagina: %d", result);
    }
    else{
        printf("A pagina %d não foi encontrada", targetPage);
    }

    return 0;
}