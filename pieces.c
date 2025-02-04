#include "pieces.h"

void init_piece(Piece *p){
	p->rows = 0; // Initializing rows and cols to 0
    p->cols = 0;
    for (int i = 0; i<PIECE_SIZE; ++i){
        for(int j=0; j<PIECE_SIZE; ++j){
            p->board[i][j] = '.';  //Initializing the piece board with a matrix full of '.'
        }
    }
}

void print_piece(Piece p){
    printf("Name: %c; Size: %dx%d\n", p.name, p.rows, p.cols);
    for(int i=0; i<PIECE_SIZE; ++i){
        for(int j=0; j<PIECE_SIZE; ++j){
            printf("%c", p.board[i][j]);
        }
        printf("\n");
    }
}

void rotate_clockwise(Piece *p) {
    char temp[4][4] = {{0}};

    for (int i = 0; i < p->rows; i++) {
        for (int j = 0; j < p->cols; j++) {
            int new_row = j;
            int new_col = p->rows - 1 - i;
            temp[new_row][new_col] = p->board[i][j];
        }
    }
    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 4; j++) {
            p->board[i][j] = temp[i][j];
        }
    }

    int original_rows = p->rows;
    p->rows = p->cols;
    p->cols = original_rows;
}

void rotate_counter_clockwise(Piece *p){
    rotate_clockwise(p);  //rotating 3 clockwise times, so that is the same as rotating counterclocwise once
    rotate_clockwise(p);
    rotate_clockwise(p);
}

Piece make_O()
{
	Piece pc;
	pc.name = 'O';
	init_piece(&pc);
	pc.rows = 2;
	pc.cols = 2;

	pc.board[0][0] = '#';
	pc.board[0][1] = '#';
	pc.board[1][0] = '#';
	pc.board[1][1] = '#';
	return (pc);
}

Piece make_I()
{
	Piece pc;
	pc.name = 'I';
	init_piece(&pc);
	pc.rows = 1;
	pc.cols = 4;

	pc.board[0][0] = '#';
	pc.board[0][1] = '#';
	pc.board[0][2] = '#';
	pc.board[0][3] = '#';
	return (pc);
}


Piece make_S()
{
	Piece pc;
	pc.name = 'S';
	init_piece(&pc);
	pc.rows = 2;
	pc.cols = 3;

	pc.board[0][1] = '#';
	pc.board[0][2] = '#';
	pc.board[1][0] = '#';
	pc.board[1][1] = '#';
	return (pc);
}


Piece make_Z()
{
	Piece pc;
	pc.name = 'Z';
	init_piece(&pc);
	pc.rows = 2;
	pc.cols = 3;

	pc.board[0][0] = '#';
	pc.board[0][1] = '#';
	pc.board[1][1] = '#';
	pc.board[1][2] = '#';
	return (pc);
}

Piece make_L()
{
	Piece pc;
	pc.name = 'L';
	init_piece(&pc);
	pc.rows = 2;
	pc.cols = 3;

	pc.board[0][2] = '#';
	pc.board[1][0] = '#';
	pc.board[1][1] = '#';
	pc.board[1][2] = '#';
	return (pc);
}

Piece make_J()
{
	Piece pc;
	pc.name = 'J';
	init_piece(&pc);
	pc.rows = 2;
	pc.cols = 3;

	pc.board[0][0] = '#';
	pc.board[1][0] = '#';
	pc.board[1][1] = '#';
	pc.board[1][2] = '#';
	return (pc);
}

Piece make_T()
{
	Piece pc;
	pc.name = 'T';
	init_piece(&pc);
	pc.rows = 2;
	pc.cols = 3;

	pc.board[0][1] = '#';
	pc.board[1][0] = '#';
	pc.board[1][1] = '#';
	pc.board[1][2] = '#';
	return (pc);
}
