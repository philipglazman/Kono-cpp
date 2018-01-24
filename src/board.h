#ifndef BOARD_H
#define BOARD_H

#include "stdafx.h"

class board {
    public:
        board(unsigned short a_boardSize);

        // Return current state of the board.
        std::vector <std::vector <int> > & getBoard() const { return *boardTable; };
    
    protected:
        //  Set of variables that reflects the state of the board at a certain position.
        enum positionState {
            blank = '+',
            white = 'W',
            black = 'B',
            superWhite = 'W',
            superBlack = 'B'
            };

    private:
        // Size of the Board.
        unsigned short m_boardSize;

        //board
        int ** table;
        
        std::vector <std::vector <int> > * boardTable;
};

#endif