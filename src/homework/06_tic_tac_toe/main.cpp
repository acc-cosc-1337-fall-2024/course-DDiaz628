#include "tic_tac_toe.h"
#include "tic_tac_toe_manager.h"

int main() 
{
	TicTacToe game;
	TicTacToeManager manage;
	string p1;
	char option;

	do
	{
		cout<<"Enter X or O: ";
		cin>>p1;
		
		while (p1 != "x" && p1 != "X" && p1 != "o" && p1 != "O")
		{
			cout<<"Invalid option\nEnter X or O: ";
			cin>>p1;
		}

		if (p1 == "x")
		{
			p1 = "X";
		}
		else if(p1 == "o")
		{
			p1 = "O";
		}
		

		game.start_game(p1);

		int position;

		while(!game.game_over())
		{
			cout<<"\nEnter a position from 1 - 9: ";
			cin>>position;
			game.mark_board(position);
			game.display_board();
			


		}

		//game.get_winner();
		manage.save_game(game);

		int o;
		int x;
		int t;
		manage.get_winner_total(o, x, t);

		cout<<"\nX Wins: "<<x<<"\n";
		cout<<"\nO Wins: "<<o<<"\n";
		cout<<"\nTies: "<<t<<"\n";

		cout<<"\nPlay again?\nEnter Y for a new game or N to exit: ";
		cin>>option;
		
		while (option != 'y' && option != 'Y' && option != 'n' && option != 'N')
		{
			cout<<"\nInvalid Option\nEnter Y for a new game or N to exit: ";
			cin>>option;
		}
		
		if (option == 'y')
		{
			option = 'Y';
		}
		else if(option == 'n')
		{
			option = 'N';
			cout<<"\nGoodbye!\n";
		}

		
		
	
	} while (option == 'Y');
	

	return 0;
}