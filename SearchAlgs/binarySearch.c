#include <math.h>

int binarySearch(int book[], int bookSize, int targetPage){
    int currentPage; 
    
    while(currentPage != targetPage){
        int currentTarget = ceil(bookSize / 2);
        book[currentTarget];
    }
}

int main(){
    int book[] = {1,2,3,4,5,6,7,8,9,10,11,12,13,14,15};
    int targetPage = 4;

    int bookSize = sizeof(book[0]) / sizeof(book);

    binarySearch(book, bookSize, targetPage);

    return 0;
}