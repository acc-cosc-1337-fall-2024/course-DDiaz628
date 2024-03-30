#include "tic_tac_toe.h"

int main() 
{
	TicTacToe game;
	string p1;
	char option;

	do
	{
		cout<<"Enter X or O: ";
		cin>>p1;

		game.start_game(p1);

		int position;

		while(!game.game_over())
		{
			cout<<"\nEnter a position from 1 - 9: ";
			cin>>position;
			game.mark_board(position);
			game.display_board();


		}

		cout<<"\nPlay again?\nEnter y or Y for a new game: ";
		cin>>option;
	
	} while (option == 'y' || option == 'Y');
	

	return 0;
}