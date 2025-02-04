#include <pieces.h>

void init_piece(Piece *p){
	p->rows = 0; // Initializing rows and cols to 0
    p->cols = 0;
    for (int i = 0; i<PIECE_SIZE; ++i){
        for(int j=0; j<PIECE_SIZE; ++i){
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

void rotate_clockwise(Piece *p){
    int temp[4][4];   //creating a temporary matrix to build the rotated matrix
    for (int i = 0; i < 4; i++){
        for (int j = 0; j < 4; j++){
            temp[j][3-i] = p->board[i][j]; //This algorithm rotates a 4x4 matrix to the right (clockwise)
        }
    }
    for (int i = 0; i < 4; i++){
        for (int j = 0; j < 4; j++){
            p->board[i][j] = temp[i][j]; //Copying the temporary matrix to the main matrix, to fullfill rotation
        }
    }
}

void rotate_counter_clockwise(Piece *p){
    rotate_clockwise(p);  //rotating 3 clockwise times, so that is the same as rotating counterclocwise once
    rotate_clockwise(p);
    rotate_clockwise(p);
}

Piece make_O(){
    Piece piece;
    init_piece(&piece);                                     //creating O piece starting form top left cornet assigning # to the piece
    piece.name = 'O'; piece.rows = piece.cols = 2;
    piece.board[0][0] = '#'; piece.board[0][1] = '#';
    piece.board[0][1] = '#'; piece.board[1][1] = '#';;
    return piece
}

Piece make_I(){
    Piece piece;                                            //creating the I piece starting top left
    piece.name = 'L'; piece.rows = 4; piece.cols = 1;
    for(int i=0; i<4; ++i){
    piece.board[i][0] = '#';
    }
    return piece
}


Piece make_S(){                                             //creating the S piece starting top left
	Piece piece;
    piece.name = 'S'; piece.rows = 2; piece.cols = 3;
    piece.board[0][1] = '#'; piece.board[0][2] = '#';
    piece.board[1][0] = '#'; piece.board[1][2] = '#'; 
    return piece
}


Piece make_Z(){                                             //creating the Z piece starting top left
    Piece piece;
    piece.name = 'Z'; piece.rows = 2; piece.cols = 3;
    piece.board[0][0] = '#'; piece.board[0][1] = '#';
    piece.board[1][1] = '#'; piece.board[1][2] = '#';
    return piece
}

Piece make_L(){                                             //creating the L piece starting top left
    Piece piece;
    piece.name = 'L'; piece.rows= 3; piece.cols = 2;
    for(int i=0; i<3; ++i){
        piece.board[i][0] = '#';
    }
    piece.board[2][1] = '#';
    return piece;
}

Piece make_J(){                                              //creating the J piece starting top left
    Piece piece;
    piece.name = 'L'; piece.rows = 3; piece.cols = 2;

    for(int i=0; i<3; ++i){
    piece.board[i][1] = '#';
}
    piece.board[2][0] = '#';
    return piece;
    }

Piece make_T(){                                                             //creating the T piece starting top left
    Piece piece;   
    piece.name = 'T'; piece.rows = 2; piece.cols = 3;
    for(int i=0; i<3; ++i){
        piece.board[0][i] = '#';
    }
    piece.board[1][1] = '#';
    return piece;
}