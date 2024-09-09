#include<stdio.h>
#include<stdlib.h>
#include<time.h>


char board[3][3];
const char PLAYER='X';
const char COMPUTER='Y';

void resetGame();
void printGame();
int checkSpaces();
void playerMove();
void computerMove();
char checkWinner();
void printWinner(char);



int main(){

  char winner= ' ';
  char response;

  do{

    winner=' ';
    response=' ';

    resetGame();
  while(winner==' ' && checkSpaces()!=0){
    printGame();
    playerMove();
    winner=checkWinner();
    if(winner!=' ' || checkSpaces()==0){
      break;
    }
    computerMove();
    winner=checkWinner();
    if(winner!=' '|| checkSpaces()==0){
      break;
    }

  }
  printGame();
  printWinner(winner);

  printf("Would you like to play again(Y/N):");
  scanf("%c");
  scanf("%c",&response);
  response=toupper(response);

  }while(response=='Y');

  printf("THANKS FOR PLAYING....");

 
  return 0;

}
void resetGame(){
  for(int i=0;i<3;i++){
    for(int j=0;j<3;j++){
      board[i][j]=' ';
    }
  }




}
void printGame(){

  printf(" %c | %c | %c ",board[0][0],board[0][1],board[0][2]);
  printf("\n---|---|---\n");
  printf(" %c | %c | %c ",board[1][0],board[1][1],board[1][2]);
  printf("\n---|---|---\n");
   printf(" %c | %c | %c ",board[2][0],board[2][1],board[2][2]);
   
   printf("\n");




}
int checkSpaces(){
  int freespaces=9;
  for(int i=0;i<3;i++){
    for(int j=0;j<3;j++){
      if(board[i][j]!=' '){
        freespaces--;
      }
    }
  }
  return freespaces;


}
void playerMove(){
  int x;
  int y;
  do{
    printf("Enter row no(1-3):");
  scanf("%d",&x);
  x--;

  printf("Enter coloumn no(1-3):");
  scanf("%d",&y);
  y--;

  if(board[x][y]!=' '){
    printf("Invalid move\n");

  }
  else{
    board[x][y]=PLAYER;
    break;

  }

  }while(board[x][y]!=' ');

}
void computerMove(){

  srand(time(0));
  int x;
  int y;
  if(checkSpaces()>0){
    do{
      x=rand()%3;
      y=rand()%3;


    }while(board[x][y]!=' ');
    board[x][y]=COMPUTER;
  }
  else{
    printWinner(' ');
  }

}
char checkWinner(){
  for(int i=0;i<3;i++){
    if(board[i][0]==board[i][1] &&  board[i][0]==board[i][2]){
      return board[i][0];
    }
  }

 for(int i=0;i<3;i++){
    if(board[0][i]==board[1][i] &&  board[0][i]==board[2][i]){
      return board[0][i];
    }
  }
  if(board[0][0]==board[1][1] &&  board[0][0]==board[2][2]){
    return board[0][0];
  }
    if(board[0][2]==board[1][1] &&  board[0][2]==board[2][0]){
    return board[0][2];
  }
  return ' ';



}
void printWinner(char Winner){
  if(Winner==PLAYER){
    printf("You Win!!!");
  }
  else if(Winner==COMPUTER){
    printf("You Lose!!!");


  }
  else{
    printf("ITS a Tie!!!");
  }

}

