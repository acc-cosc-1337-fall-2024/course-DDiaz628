#include "tic_tac_toe_manager.h"

//cpp
//public
void TicTacToeManager::save_game(TicTacToe b)
{
    games.push_back(make_unique<TicTacToe>(b));

    string win = b.get_winner();

    update_winner_count(win);
    
}

void TicTacToeManager::get_winner_total(int& o, int& x, int& t)
{
    o = o_win;
    x = x_win;
    t = ties;
}

//private
void TicTacToeManager::update_winner_count(string winner)
{
    if(winner == "X")
    {
        x_win += 1;
    }

    else if(winner == "O")
    {
        o_win += 1;
    }

    else if (winner == "T")
    {
        ties += 1;
    }
}