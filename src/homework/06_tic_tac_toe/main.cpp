#include "tic_tac_toe.h"

int main() 
{
	TicTacToe game;
	string p1;
	char option;

	do
	{
		cout<<"Enter player 1: ";
		cin>>p1;

		game.start_game(p1);

		int position;

		while(!game.game_over())
		{
			cout<<"\nEnter a position: ";
			cin>>position;
			game.mark_board(position);
			game.display_board();


		}

		cout<<"\nPlay again?\nEnter y or Y: ";
		cin>>option;
	
	} while (option == 'y' || option == 'Y');
	

	return 0;
}