#include <iostream>
#include <cstdlib>
#include <ctime>

const int Rock = 1,
          Paper = 2,
          Scissors = 3;

int validation(int);
int cchoice(int);
int playerchoice(int);
void randomnumber(int);
void winner(int, int, bool &);

using namespace std;

int main()
{
  int c_choice,
      player_choice;

  bool play_again;
  do
  {
    c_choice = cchoice(c_choice);
    player_choice = playerchoice(player_choice);
    randomnumber(c_choice);
    winner(c_choice, player_choice, play_again);
  }
  while (play_again == 1);
  return 0;
}
int cchoice(int c_choice)
{
  unsigned seed = time(0);
  srand(seed);
  return (rand() % (Scissors - Rock +1)) + Rock;
}
int playerchoice(int player_choice)
{
  cout << "\nChoose 'Rock', 'Paper', or 'Scissors'. \n";
  cout << "Select 1 for 'Rock', 2 for 'Paper', 3 for 'Scissors'";

  player_choice = validation(player_choice);
  return player_choice;
}
int validation(int num1)
{
  while (!(cin >> num1) || (num1 < 1 || num1 >3))
  {
    cout << "Number must be between 1 and 3!";
    cin.clear();
    cin.ignore(numeric_limits<streamsize>::max(), '\n');
  }
return num1;
}
void randomnumber(int c_choice)
{
  cout << "System Choice = ";
  if (c_choice == 1)
  cout << "Rock";
  else if (c_choice == 2)
  cout << "Paper";
  else if (c_choice == 3)
  cout << "Scissors";
  cout << endl;
}
void winner(int c_choice, int player_choice, bool & play_again)
{
  cout << endl;
  if (c_choice == Rock)
  {
    if (player_choice == Paper)
    {
      cout << "You win: Paper beats Rock.";
      play_again = 0;
    }
    else if (player_choice == Scissors)
    {
      cout << "Computer wins: Rock beats Scissors.";
      play_again = 0;
    }
    else if (player_choice == Rock)
    {
      cout << "It's a Tie. Play again to get a winner." << endl;
      play_again = 1;
    }
  }
    else if (c_choice == Paper)
    {
    if (player_choice == Rock)
    {
      cout << "Computer wins: Paper beats Rock.";
      play_again = 0;
    }
    else if (player_choice == Scissors)
    {
      cout << "You win: Scissors beat Paper.";
      play_again = 0;
    }
    else if (player_choice == Paper)
    {
      cout << "It's a Tie. Play again to get a winner." << endl;
      play_again = 1;
    }
    }
    else if (c_choice == Scissors)
    {
    if (player_choice == Rock)
    {
    cout << "You win: Rock beats Scissors.";
    play_again = 0;
    }
    else if (player_choice == Paper)
    {
    cout << "Computer wins: Scissors beats Paper.";
    play_again = 0;
    }
    else if (player_choice == Scissors)
    {
    cout << "It's a Tie. Play again to get a winner." << endl;
    play_again = 1;  
    }
  }
cout << endl;
}