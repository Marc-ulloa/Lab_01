#ifndef _GAME_H_
#define _GAME_H_

#include "common.h"
#include "utils.h"
#include "pieces.h"

#define MIN_ROWS 10
#define MIN_COLUMNS 6

typedef struct{
    Piece p;     //Definition of PieceInfo
    int at_row;
    int at_col;
} PieceInfo;

extern int rows;
extern int columns;

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
bool is_collision(GameState *gs);

/**** LAB 1 - functions to program (start here) ****/
void init_game_state(GameState *game_state);
bool is_terminal(GameState * gs); // True if contains X values in TOP-4 rows
/**** LAB 1 - functions to program (end here) ****/

/// Implemented functions
void run_turn(GameState *game_state, int option);


// Lab 02 Implemented Functions
void make_board(GameState *gs, int rows, int columns);
void set_default_game_state(GameState *gs);
void restart_game_state(GameState * gs, int rows, int columns);

#endif