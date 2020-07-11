//h
#ifndef TIC_TAC_TOE_H
#define TIC_TAC_TOE_H
#include <string>
#include <vector>
#include<iostream>
using std::string;  using std::vector;
class TicTacToe
{
public:
    bool game_over();
    void mark_board(int position);
    string get_player()const{return player;}
    void start_game(string first_player);
    void display_board()const;
    string get_winner(){return winner;}

private:
    void set_next_player();
    bool check_board_full()const;
    void clear_board();
    string player;
    vector<string> pegs{9, " "};
    bool check_column_win();
    bool check_row_win();
    bool check_diagonal_win();
    void set_winner();
    string winner;

};

#endif