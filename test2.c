#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>
#include <string.h>

int get_random(int range) {
    return ((int)floor((float)range * rand() / RAND_MAX)) % range;
}

int** new_board(int rows, int cols, int num_mines) {
    int** board = (int**)malloc(rows * sizeof(int*));
       for (int i = 0; i < rows; ++i) {
        board[i] = (int*)malloc(cols * sizeof(int));
        for (int j = 0; j < cols; ++j) {
            board[i][j] = 0; // Initialize all cells to zero
        }
    }

    // Place mines on the board
    for (int p = 0; p < num_mines; ++p) {
        int r = get_random(rows);
        int c = get_random(cols);

        while (board[r][c] == 1) {
            r = get_random(rows);
            c = get_random(cols);
        }

        board[r][c] = 1; // Set mined = 1
    }

    // Shuffle mines around the board
    for (int s = 1; s <= 100; ++s) {
        int r1 = get_random(rows);
        int c1 = get_random(cols);
        int r2 = get_random(rows);
        int c2 = get_random(cols);

        int temp = board[r1][c1];
        board[r1][c1] = board[r2][c2];
        board[r2][c2] = temp;
    }

    return board;
}

void show_board(int** board, int rows, int cols, int showNumbers) {
    printf("Current Board\n");
    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < cols; ++j) {
            if (board[i][j] == 1) {
                printf("* "); // Display '*' for mines
            } else if (showNumbers) {
                printf("%d ", board[i][j]); // Display mine count if showNumbers is true
            } else {
                printf(". "); // Display spaces for the initial state
            }
        }
        printf("\n");
    }
    printf("\n");
}

void free_board(int** board, int rows) {
    for (int i = 0; i < rows; ++i) {
        free(board[i]);
    }
    free(board);
}

void calculate_adjacent_mines(int** board, int rows, int cols) {
    int neighborcount = 8;
    int rowneighbors[] = {-1, -1, 0, 1, 1, 1, 0, -1};
    int colneighbors[] = {0, 1, 1, 1, 0, -1, -1, -1};

    // Create a new array to store mine information
    int** mineInfo = (int**)malloc(rows * sizeof(int*));
    for (int i = 0; i < rows; ++i) {
        mineInfo[i] = (int*)malloc(cols * sizeof(int));
        for (int j = 0; j < cols; ++j) {
            mineInfo[i][j] = board[i][j];
        }
    }

    for (int r = 0; r < rows; ++r) {
        for (int c = 0; c < cols; ++c) {
            int minecount = 0;

            for (int d = 0; d < neighborcount; ++d) {
                int rn = r + rowneighbors[d];
                int cn = c + colneighbors[d];

                if (0 <= rn && rn < rows && 0 <= cn && cn < cols) {
                    if (mineInfo[rn][cn] == 1) {
                        minecount++;
                    }
                }
            }

            // Set mine count in a separate array
            board[r][c] = minecount;
        }
    }

    // Free the dynamically allocated array for mine information
    for (int i = 0; i < rows; ++i) {
        free(mineInfo[i]);
    }
    free(mineInfo);
}

int main() {
    srand((unsigned int)time(NULL));

    char command[10];
    int rows, cols, num_mines;
    int** board = NULL;

    while (1) {
        printf(">> ");
        scanf("%s", command);

        if (strcmp(command, "new") == 0) {
            scanf("%d %d %d", &rows, &cols, &num_mines);

            if (board != NULL) {
                free_board(board, rows);
            }

            board = new_board(rows, cols, num_mines);
            calculate_adjacent_mines(board, rows, cols);
            show_board(board, rows, cols, 1);
        } else if (strcmp(command, "show") == 0) {
            if (board != NULL) {
                show_board(board, rows, cols, 1);
            } else {
                printf("No board created. Use 'new' command.\n");
            }
        } else if (strcmp(command, "quit") == 0) {
            printf("end of game\n");

            if (board != NULL) {
                free_board(board, rows);
            }

            break;
        } else {
            printf("Invalid command\n");
        }
    }

    return 0;
}
