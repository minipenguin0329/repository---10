#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {

    srand(time(NULL));
    int arr[10];
    for (int i = 0; i < 10; i++)
    {
        arr[i] = rand() % 100 + 1;
        printf(%dn, arr[i]);
    }
    int max = arr[0];
    for (int i = 1; i < 10; i++)
    {
        if (arr[i] > max) {
            max = arr[i];
        }
    }

    printf(가장큰값: %dn, max);

    return 0;
}
