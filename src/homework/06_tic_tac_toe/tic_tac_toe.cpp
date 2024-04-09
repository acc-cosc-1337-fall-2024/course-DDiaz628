//cpp
#include "tic_tac_toe.h"

bool TicTacToe::game_over()
{
    if(check_column_win() == true)
    {
        return check_column_win();
    }

    else if(check_row_win() == true)
    {
        return check_row_win();
    }

    else if(check_diagonal_win() == true)
    {
        return check_diagonal_win();
    }

    else
        return check_board_full();
}

void TicTacToe::start_game(string first_player)
{
    player = first_player;
    clear_board();

}

void TicTacToe::mark_board(int position)
{
    pegs[position - 1] = player;
    set_next_player();
}

void TicTacToe::display_board() const
{
    for(int i = 0; i < pegs.size(); i += 3)
    {
        cout<<pegs[i]<<"|"<<pegs[i + 1]<< "|"<<pegs[i + 2]<<"\n";
    }
}

string TicTacToe::get_winner()
{
    string win;
    win = winner();
    if(win == "X" || win == "O")
    {
       cout<<"\n"<<win<<" Wins!\n"; 
    }

    else
    {
        cout<<"\nIt's a tie!\n";
    }
    
    return win;
}

//private
void TicTacToe::clear_board()
{
    for (auto& peg: pegs)
    {
        peg = " ";
    }
}

void TicTacToe::set_next_player()
{
    if(player == "X" || player == "x")
    {
        player = "O";
    }
    
    else
    {
        player = "X";
    }
}

bool TicTacToe::check_board_full()
{
    for(int i = 0; i < pegs.size(); i++)
    {
        if(pegs[i] == " ")
        {
            return false;
        }
    }

    return true;
}

bool TicTacToe::check_column_win()
{
    if (pegs[0] == "X" && pegs[3] == "X" && pegs[6] == "X")
    {
        return true;
    }

    else if (pegs[0] == "O" && pegs[3] == "O" && pegs[6] == "O")
    {
        return true;
    }

    else if (pegs[1] == "X" && pegs[4] == "X" && pegs[7] == "X")
    {
        return true;
    }

    else if (pegs[1] == "O" && pegs[4] == "O" && pegs[7] == "O")
    {
        return true;
    }

    else if (pegs[2] == "X" && pegs[5] == "X" && pegs[8] == "X")
    {
        return true;
    }

    else if (pegs[2] == "O" && pegs[5] == "O" && pegs[8] == "O")
    {
        return true;
    }
    
    else
    {
        return false;
    }
}

bool TicTacToe::check_row_win()
{
    if (pegs[0] == "X" && pegs[1] == "X" && pegs[2] == "X")
    {
        return true;
    }

    else if (pegs[0] == "O" && pegs[1] == "O" && pegs[2] == "O")
    {
        return true;
    }

    else if (pegs[3] == "X" && pegs[4] == "X" && pegs[5] == "X")
    {
        return true;
    }

    else if (pegs[3] == "O" && pegs[4] == "O" && pegs[5] == "O")
    {
        return true;
    }

    else if (pegs[6] == "X" && pegs[7] == "X" && pegs[8] == "X")
    {
        return true;
    }

    else if (pegs[6] == "O" && pegs[7] == "O" && pegs[8] == "O")
    {
        return true;
    }
    
    else
    {
        return false;
    }
}

bool TicTacToe::check_diagonal_win()
{
    if (pegs[0] == "X" && pegs[4] == "X" && pegs[8] == "X")
    {
        return true;
    }

    else if (pegs[0] == "O" && pegs[4] == "O" && pegs[8] == "O")
    {
        return true;
    }

    else if (pegs[2] == "X" && pegs[4] == "X" && pegs[6] == "X")
    {
        return true;
    }

    else if (pegs[2] == "O" && pegs[4] == "O" && pegs[6] == "O")
    {
        return true;
    }
    
    else
    {
        return false;
    }
}

void TicTacToe::set_winner()
{
    if(player == "X")
    {
        player = "O";
        //cout<<player<<" won!\n";
    }
    
    else
    {
        player = "X";
        //cout<<player<<" won!\n";
    }
}

string TicTacToe::winner()
{
    if(check_column_win() == true)
    {
        set_winner();
        if (player == "X")
        {
            return player;
        }
        else
        {
            return player;
        }
    }

    else if(check_row_win() == true)
    {
        set_winner();
        if (player == "X")
        {
            return player;
        }
        else
        {
            return player;
        }
    }

    else if(check_diagonal_win() == true)
    {
        set_winner();
        if (player == "X")
        {
            return player;
        }
        else
        {
            return player;
        }
    }

    else if(check_board_full() == true)
    {
        return "C";
    }

}