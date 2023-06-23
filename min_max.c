#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
    int a[10], i;
    
    printf("\nEnter the 10 sales and buy values throughout the day: ");
    for(i = 0; i < 10; i++) {
        scanf("%d", &a[i]);
    }
    
    // Insertion sort
    int key, j;
    for (i = 1; i < 10; i++) {
        key = a[i];
        j = i - 1;
        
        while (j >= 0 && a[j] > key) {
            a[j + 1] = a[j];
            j = j - 1;
        }
        
        a[j + 1] = key;
    }
    
    printf("\nThe best buy price: %d", a[0]);
    printf("\nThe best sell price: %d", a[9]);
    
    return 0;
}
