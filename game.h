#ifndef _GAME_H_
#define _GAME_H_

#include "common.h"
#include "utils.h"
#include "pieces.h"
#define MAX_ROWS 15
#define MAX_COLUMNS 12

#define MIN_ROWS 10
#define MIN_COLUMNS 6

typedef struct{
    Piece p;     //Definition of PieceInfo
    int at_row;
    int at_col;
} PieceInfo;

int rows = MIN_ROWS;
int columns = MIN_COLUMNS;

typedef struct{     //Definition of GameState
    int score;
    char **board;
    int rows;
    int columns; //Check if right
    PieceInfo current_piece;
}GameState;

/// Implemented functions
void print_game_state(GameState *gs);
void print_options();
bool is_valid_option(int option);
void print_line();
void print_board(GameState *game_state);
void get_new_random_piece(GameState *game_state);
void block_current_piece(GameState *game_state);
bool is_collision(char board[MIN_ROWS][MIN_COLUMNS], PieceInfo *piece_info);

/**** LAB 1 - functions to program (start here) ****/
void init_game_state(GameState *game_state);
bool is_terminal(char board[MIN_ROWS][MIN_COLUMNS]); // True if contains X values in TOP-4 rows
void move(char board[MIN_ROWS][MIN_COLUMNS], PieceInfo *piece_info, int option);
void rotate(char board[MIN_ROWS][MIN_COLUMNS], PieceInfo *piece_info, int option);
/**** LAB 1 - functions to program (end here) ****/

/// Implemented functions
void run_turn(GameState *game_state, int option);


#endif

