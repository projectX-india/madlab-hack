#include<iostream>
#include<conio.h>
#include<stdio.h>

using namespace std;

#define UP 72
#define DOWN 80
#define LEFT 75
#define RIGHT 77

const char maze[10][10]={{'#','S','#','#','#','#','#','#','#','#'},
                         {'#','.','#','#','#','.','.','.','.','#'},
                         {'#','.','.','.','.','.','#','#','#','#'},
                         {'#','#','#','#','#','.','#','#','#','#'},
                         {'#','.','.','.','.','.','#','#','#','#'},
						 {'#','.','#','#','.','.','.','.','.','#'},
						 {'#','.','#','#','#','#','.','#','#','#'},
						 {'#','.','#','.','.','.','.','.','.','#'},
						 {'#','#','#','.','#','#','#','#','.','#'},
						 {'#','#','#','#','#','#','#','#','F','#'}};

void clear()
{
	system("cls");
}
void move(int move, int &posX, int &posY)
{
 	move=getch();
 	
	switch(move)
	{
		case UP: 
					if(posX-1 >=0)
					{
						if(maze[posX-1][posY] != '#')
							posX--;
					}
					break;
		case DOWN: 
					if(posX+1 <=9)
					{
						if(maze[posX+1][posY] != '#')
							posX++;
					}
					break;
		case LEFT: 
					if(posY-1 >=0)
					{
						if(maze[posX][posY-1] != '#')
							posY--;
					}
					break;
		case RIGHT: 
					if(posY+1 <=9)
					{
						if(maze[posX][posY+1] != '#')
							posY++;
					}
					break;			
	}
}
void displaymaze(int &posX, int &posY)
{
	for(int i=0;i<10;i++)
	{
		for(int j=0;j<10;j++)
		{
			if(i==posX && j==posY)
			{
				cout<<"P  ";
			}
			else
			{
				cout<<maze[i][j]<<"  ";
			}
		}
		cout<<endl;
	}
}
bool win(int &posX, int &posY)
{
	if(posX==9 && posY==8)
		return true;
	else
		return false;
}

int main()
{
	int movement,posX=0,posY=1;
	char name[100];
	
	cout<<"Enter player name: ";
	cin>>name;
	clear();
	while(!win(posX,posY))
	{
		displaymaze(posX,posY);
		move(movement,posX,posY);
		clear();	
	}
	cout<<" CONGRATS "<<name<< " you completed the maze";		
}
