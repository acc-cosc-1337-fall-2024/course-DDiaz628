#include <iostream>
#include <string>
#include <vector>

using std::string; using std::cout; using std::cin;
//h
#ifndef TIC_TAC_TOE_H
#define TIC_TAC_TOE_H

class TicTacToe
{
public:
    TicTacToe(){};
    TicTacToe(int size) : pegs{size * size, " "} {};
    bool game_over();
    void start_game(string first_player);
    void mark_board(int position);
    string get_player() const {return player;}
    void display_board() const;
    string get_winner();

protected:
    std::vector<string> pegs;
    virtual bool check_column_win();
    virtual bool check_row_win();
    virtual bool check_diagonal_win();

private:
    string player;
    void set_next_player();
    bool check_board_full();
    void clear_board();
    void set_winner();
    string winner();
};


#endif