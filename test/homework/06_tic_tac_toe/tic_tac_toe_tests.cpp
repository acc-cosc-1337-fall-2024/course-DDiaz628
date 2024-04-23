#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file
#include "catch.hpp"
#include "tic_tac_toe.h"
#include "tic_tac_toe_manager.h"
#include "tic_tac_toe_3.h"
#include "tic_tac_toe_4.h"

TEST_CASE("Verify Test Configuration", "verification") {
	REQUIRE(true == true);
}

TEST_CASE("Test game over if 9 slots are selected.") 
{
	unique_ptr<TicTacToe> game;

	game->mark_board(1);
	REQUIRE(game->game_over() == false);

	game->mark_board(2);
	REQUIRE(game->game_over() == false);

	game->mark_board(3);
	REQUIRE(game->game_over() == false);

	game->mark_board(5);
	REQUIRE(game->game_over() == false);

	game->mark_board(4);
	REQUIRE(game->game_over() == false);

	game->mark_board(6);
	REQUIRE(game->game_over() == false);

	game->mark_board(8);
	REQUIRE(game->game_over() == false);

	game->mark_board(7);
	REQUIRE(game->game_over() == false);

	game->mark_board(9);
	REQUIRE(game->game_over() == true);

	REQUIRE(game->get_winner() == "T");
}

TEST_CASE("Test first player set to X")
{
	unique_ptr<TicTacToe> game;
	game = make_unique<TicTacToe3>();
	string p1 = "X";
	game->start_game(p1);
	
	REQUIRE(game->get_player() == "X");
	
}

TEST_CASE("Test first player set to O")
{
	unique_ptr<TicTacToe> game;
	string p1 = "O";
	game->start_game(p1);
	
	REQUIRE(game->get_player() == "O");
}

TEST_CASE("Test win by first column")
{
	unique_ptr<TicTacToe> game;
	string p1 = "X";
	game->start_game(p1);

	game->mark_board(1);
	REQUIRE(game->game_over() == false);
	
	game->mark_board(2);
	REQUIRE(game->game_over() == false);

	game->mark_board(4);
	REQUIRE(game->game_over() == false);

	game->mark_board(5);
	REQUIRE(game->game_over() == false);

	game->mark_board(7);
	REQUIRE(game->game_over() == true);

	REQUIRE(game->get_winner() == "X");

}

TEST_CASE("Test win by second column")
{
	unique_ptr<TicTacToe> game;
	string p1 = "X";
	game->start_game(p1);

	game->mark_board(2);
	REQUIRE(game->game_over() == false);
	
	game->mark_board(1);
	REQUIRE(game->game_over() == false);

	game->mark_board(5);
	REQUIRE(game->game_over() == false);

	game->mark_board(4);
	REQUIRE(game->game_over() == false);

	game->mark_board(8);
	REQUIRE(game->game_over() == true);

	REQUIRE(game->get_winner() == "X");
}

TEST_CASE("Test win by third column")
{
	unique_ptr<TicTacToe> game;
	string p1 = "X";
	game->start_game(p1);

	game->mark_board(3);
	REQUIRE(game->game_over() == false);
	
	game->mark_board(2);
	REQUIRE(game->game_over() == false);

	game->mark_board(6);
	REQUIRE(game->game_over() == false);

	game->mark_board(5);
	REQUIRE(game->game_over() == false);

	game->mark_board(9);
	REQUIRE(game->game_over() == true);

	REQUIRE(game->get_winner() == "X");
}

TEST_CASE("Test win by first row ")
{
	unique_ptr<TicTacToe> game;
	string p1 = "X";
	game->start_game(p1);

	game->mark_board(1);
	REQUIRE(game->game_over() == false);
	
	game->mark_board(4);
	REQUIRE(game->game_over() == false);

	game->mark_board(2);
	REQUIRE(game->game_over() == false);

	game->mark_board(5);
	REQUIRE(game->game_over() == false);

	game->mark_board(3);
	REQUIRE(game->game_over() == true);

	REQUIRE(game->get_winner() == "X");
}

TEST_CASE("Test win by second row")
{
	unique_ptr<TicTacToe> game;
	string p1 = "X";
	game->start_game(p1);

	game->mark_board(4);
	REQUIRE(game->game_over() == false);
	
	game->mark_board(1);
	REQUIRE(game->game_over() == false);

	game->mark_board(5);
	REQUIRE(game->game_over() == false);

	game->mark_board(2);
	REQUIRE(game->game_over() == false);

	game->mark_board(6);
	REQUIRE(game->game_over() == true);

	REQUIRE(game->get_winner() == "X");
}

TEST_CASE("Test win by third row")
{
	unique_ptr<TicTacToe> game;
	string p1 = "X";
	game->start_game(p1);

	game->mark_board(7);
	REQUIRE(game->game_over() == false);
	
	game->mark_board(2);
	REQUIRE(game->game_over() == false);

	game->mark_board(8);
	REQUIRE(game->game_over() == false);

	game->mark_board(5);
	REQUIRE(game->game_over() == false);

	game->mark_board(9);
	REQUIRE(game->game_over() == true);

	REQUIRE(game->get_winner() == "X");
}

TEST_CASE("Test win diagonally from top left")
{
	unique_ptr<TicTacToe> game;
	string p1 = "X";
	game->start_game(p1);

	game->mark_board(1);
	REQUIRE(game->game_over() == false);
	
	game->mark_board(2);
	REQUIRE(game->game_over() == false);

	game->mark_board(5);
	REQUIRE(game->game_over() == false);

	game->mark_board(4);
	REQUIRE(game->game_over() == false);

	game->mark_board(9);
	REQUIRE(game->game_over() == true);

	REQUIRE(game->get_winner() == "X");
}

TEST_CASE("Test win diagonally from bottom left")
{
	unique_ptr<TicTacToe> game;
	string p1 = "X";
	game->start_game(p1);

	game->mark_board(7);
	REQUIRE(game->game_over() == false);
	
	game->mark_board(2);
	REQUIRE(game->game_over() == false);

	game->mark_board(5);
	REQUIRE(game->game_over() == false);

	game->mark_board(1);
	REQUIRE(game->game_over() == false);

	game->mark_board(3);
	REQUIRE(game->game_over() == true);

	REQUIRE(game->get_winner() == "X");
}

TEST_CASE("Test unique_ptr<TicTacToe> manager get winner total function")
{
	unique_ptr<TicTacToe> game;
	unique_ptr<TicTacToeManager> manage;
	game->start_game("X");

	game->mark_board(7);
	REQUIRE(game->game_over() == false);
	
	game->mark_board(2);
	REQUIRE(game->game_over() == false);

	game->mark_board(5);
	REQUIRE(game->game_over() == false);

	game->mark_board(1);
	REQUIRE(game->game_over() == false);

	game->mark_board(3);
	REQUIRE(game->game_over() == true);

	REQUIRE(game->get_winner() == "X");

	manage->save_game(game);

	game->start_game("O");

	game->mark_board(4);
	REQUIRE(game->game_over() == false);
	
	game->mark_board(1);
	REQUIRE(game->game_over() == false);

	game->mark_board(5);
	REQUIRE(game->game_over() == false);

	game->mark_board(2);
	REQUIRE(game->game_over() == false);

	game->mark_board(6);
	REQUIRE(game->game_over() == true);

	REQUIRE(game->get_winner() == "O");

	manage->save_game(game);

	game->start_game("X");
	
	game->mark_board(1);
	REQUIRE(game->game_over() == false);

	game->mark_board(2);
	REQUIRE(game->game_over() == false);

	game->mark_board(3);
	REQUIRE(game->game_over() == false);

	game->mark_board(5);
	REQUIRE(game->game_over() == false);

	game->mark_board(4);
	REQUIRE(game->game_over() == false);

	game->mark_board(6);
	REQUIRE(game->game_over() == false);

	game->mark_board(8);
	REQUIRE(game->game_over() == false);

	game->mark_board(7);
	REQUIRE(game->game_over() == false);

	game->mark_board(9);
	REQUIRE(game->game_over() == true);

	REQUIRE(game->get_winner() == "T");

	manage->save_game(game);

	int o, x, t;

	manage->get_winner_total(o, x, t);
	REQUIRE(o == 1);
	REQUIRE(x == 1);
	REQUIRE(t == 1);
}

//Test 4x4
