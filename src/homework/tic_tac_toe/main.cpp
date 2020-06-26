#include "tic_tac_toe.h"

int main() 
{
	TicTacToe tic_tac_toe;
	std::string player;

	std::cout<<"Enter X or O";
	std::cin>>player;

	tic_tac_toe.start_game(player);

	do
	{
		int position;
		std::cout<<"Enter position from 1 to 9";
		tic_tac_toe.mark_board(position);

	}while (tic_tac_toe.game_over() == false);

	std:: cout<< "Game over";
	
	return 0;
}