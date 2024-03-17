/*
	Q10. Read at most 10 names of students and store them into an array of
	char nameOfStudents[10][50]. Sort the array and display them back. Hint:
	Use qsort() method.
*/

#include <stdio.h>
#include <string.h>

void swap(char *x, char *y) {
    char temp[100];
    strcpy(temp, x);
    strcpy(x, y);
    strcpy(y, temp);
}

int partition(char arr[][100], int low, int high) {
    char pivot[100];
    strcpy(pivot, arr[high]);
    int i = (low - 1);
    
    for (int j = low; j <= high - 1; j++) {
        if (strcmp(arr[j], pivot) < 0) {
            i++;
            swap(arr[i], arr[j]);
        }
    }
    swap(arr[i + 1], arr[high]);
    return (i + 1);
}

void quickSort(char arr[][100], int low, int high) {
    if (low < high) {
        int pi = partition(arr, low, high);
        quickSort(arr, low, pi - 1);
        quickSort(arr, pi + 1, high);
    }
}

int main() {
    char names[20][100];
    
    printf("Enter 20 names:\n");
    for (int i = 0; i < 20; i++) {
        scanf("%s", names[i]);
    }
    
    quickSort(names, 0, 19);
    
    printf("\nSorted names:\n");
    for (int i = 0; i < 20; i++) {
        printf("%s\n", names[i]);
    }
    
    return 0;
}

