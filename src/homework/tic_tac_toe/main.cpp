#include "tic_tac_toe.h"

using std::cout;	using std::cin;	using std::string;

int main() 
{
	TicTacToe tic_tac_toe;
	string player;
	string repeat;

do
	{
	
		do
		{
		std::cout<<"Enter X or O: ";
		std::cin>>player;

		if(player != "X" && player != "O")
		{
			std::cout<<"That was not an X or an O."<<"\n";
		}

		}while(player != "X" && player != "O");

		tic_tac_toe.start_game(player);

		do
		{
			int position;
			std::cout<<"Enter position from 1 to 9: ";
			std::cin>>position;
			tic_tac_toe.mark_board(position);
			tic_tac_toe.display_board();


		}while (tic_tac_toe.game_over() == false);


		std::cout<<"Game Over"<<"\n";
		std::cout<<"Winner: "<<tic_tac_toe.get_winner()<<"\n";

		std::cout<<"Enter y or Y to play another game: ";
		std::cin>>repeat;
		std::cout<<"\n";

	}while (repeat == "y" || repeat == "Y");
	return 0;
}