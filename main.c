#include <stdio.h>
#include <stdlib.h>

int main() {
    int _row, _col;
    printf("Row & Col: ");
    scanf("%d %d", &_row, &_col);

    int **row = (int **) calloc(_row, sizeof(int *));
    if (row == NULL) {
        fprintf(stderr, "Failed to allocate memory!");
        exit(-1);
    }

    for (int i = 0; i < _col; i++) {
        row[i] = (int *) calloc(_col, sizeof(int));
        if (row[i] == NULL) {
            fprintf(stderr, "Failed to allocate memory!");
            exit(-1);
        }
    }

    for (int i = 0; i < _row; i++) {
        for (int j = 0; j < _col; j++) {
            row[i][j] = i * _col + j + '!';
            printf("%c ", row[i][j]);
        }
        printf("\n");
    }

    for (int i = 0; i < _row; i++)
        free(row[i]);
    free(row);

    return 0;
}