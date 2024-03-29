#include "sudoku_io.c"

///Print the output from the solve function
int main() {
    Sudoku_board s = create_board("");
    print_sudoku_board(s);
    switch (check_sudoku(s)) {
        case INVALID:
            printf("INVALID");
            break;
        case COMPLETE:
            printf("COMPLETE");
            break;
        case INCOMPLETE:
            printf("INCOMPLETE");
            break;
    }
}