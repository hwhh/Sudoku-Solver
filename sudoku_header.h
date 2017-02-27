#include <stdbool.h>
#include <stdio.h>
#include <memory.h>
#include <math.h>
#include <stdlib.h>

#define BUFFER_SIZE 10000

#ifndef PRACTICAL3_SUDOKU_HEADER_H
#define PRACTICAL3_SUDOKU_HEADER_H

#endif //PRACTICAL3_SUDOKU_HEADER_H

typedef struct {
    int *board;
    bool *possible_values;
    double length;
    int size;
} Sudoku_board;


enum STATE {
    INVALID = -1,//": The array contains some value twice.",
    INCOMPLETE = 0,//": The array is not INVALID, but is not complete.",
    COMPLETE = 1//": The array is not INVALID, and every value is assigned. \n"This means the array contains the values between 1 and 9, in some permutation."
};

//bool writ_value(Sudoku_board *sudoku_board);
//
//int read_value(Sudoku_board *sudoku_board);
//
//int get_coordinates(int size);
//
//void print_sudoku_board(Sudoku_board *sudoku_board);
//
//Sudoku_board copy_sudoku_board(Sudoku_board sudoku_board);
//
//bool free_sudoku_board(Sudoku_board *sudoku_board);
//
//enum STATE check_list(int *contents, int size);
//
//enum STATE check_sudoku(Sudoku_board *sudoku_board);
//
//Sudoku_board create_board(char* filename);
//
//void delete_board(Sudoku_board *sudoku_board);
//
//int * get_row(Sudoku_board *sudoku_board, int index, double size);
//
//int * get_col(Sudoku_board *sudoku_board, int index, double size);
//
//int * get_box(Sudoku_board *sudoku_board, int index, double size);
//
//bool write_value(Sudoku_board *sudoku_board);