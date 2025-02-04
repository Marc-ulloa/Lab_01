#include <pieces.h>

void init_piece(Piece *p){
	// ToDo in LAB 1
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

void rotate_clockwise(Piece *p){
    int temp[4][4];
    for (int i = 0; i < 4; i++){
        for (int j = 0; j < 4; j++){
            temp[j][3-i] = p->board[i][j];
        }
    }
    for (int i = 0; i < 4; i++){
        for (int j = 0; j < 4; j++){
            p->board[i][j] = temp[i][j];
        }
    }
}

void rotate_counter_clockwise(Piece *p){
    rotate_clockwise(p);
    rotate_clockwise(p);
    rotate_clockwise(p);
}

Piece make_O(){
    Piece piece;
    init_piece(&piece);
    piece.name = 'O'; piece.rows = piece.cols = 2;
    piece.board[0][0] = '#'; piece.board[0][1] = '#';
    piece.board[0][1] = '#'; piece.board[1][1] = '#';;
    return piece
}

Piece make_I(){
    Piece piece;
    piece.name = 'L'; piece.rows = 4; piece.cols = 1;
    for(int i=0; i<4; ++i){
    piece.board[i][0] = '#';
    }
    return piece
}


Piece make_S(){
	Piece piece;
    piece.name = 'S'; piece.rows = 2; piece.cols = 3;
    piece.board[0][1] = '#'; piece.board[0][2] = '#';
    piece.board[1][0] = '#'; piece.board[1][2] = '#'; 
    return piece
}


Piece make_Z(){
    Piece piece;
    piece.name = 'Z'; piece.rows = 2; piece.cols = 3;
    piece.board[0][0] = '#'; piece.board[0][1] = '#';
    piece.board[1][1] = '#'; piece.board[1][2] = '#';
    return piece
}

Piece make_L(){
    Piece piece;
    piece.name = 'L'; piece.rows= 3; piece.cols = 2;
    for(int i=0; i<3; ++i){
        piece.board[i][0] = '#';
    }
    piece.board[2][1] = '#';
    return piece;
}

Piece make_J(){
    Piece piece;
    piece.name = 'L'; piece.rows = 3; piece.cols = 2;

    for(int i=0; i<3; ++i){
    piece.board[i][1] = '#';
}
    piece.board[2][0] = '#';
    return piece;
    }

Piece make_T(){
    Piece piece;
    piece.name = 'T'; piece.rows = 2; piece.cols = 3;
    for(int i=0; i<3; ++i){
        piece.board[0][i] = '#';
    }
    piece.board[1][1] = '#';
    return piece;
}