#include<stdio.h>
#include<windows.h>
#include<conio.h>
#include<stdlib.h>
#include<time.h>
char s1[100], s2[100];
int a[3][3][2] = { { { 0, 0 }, { 0, 0 }, { 0, 0 }, }, { { 0, 0 }, { 0, 0 }, { 0, 0 }, }, { { 0, 0 }, { 0, 0 }, { 0, 0 }} };
char x_s1, x_s2;
/************************************************************RANDOM*****************************************************/
int rand_rand(void)
{
	srand(time(0));
	int t;
	t = rand() % 2;
	return t;
}
/************************************************************GOTOXY*****************************************************/
void gotoxy(int x, int y)
{
	COORD crd;
	crd.X = x;
	crd.Y = y;
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), crd);
}
/************************************************************SCREAN*****************************************************/
void screan(void)
{
	printf("please ENTER your NAME :)\n");
	printf("player 1:%s\n", s1);
	printf("player 2:%s\n", s2);
	printf("\nplayer 1 is '%c'\n", x_s1);
	printf("player 2 is '%c'\n\n", x_s2);
	printf("                                           |                         |                        \n");
	printf("                                           |                         |                        \n");
	printf("                                           |                         |                        \n");
	printf("                                           |                         |                        \n");
	printf("                                           |                         |                        \n");
	printf("                                           |                         |                        \n");
	printf("                   _______________________________________________________________________\n");
	printf("                                           |                         |                        \n");
	printf("                                           |                         |                        \n");
	printf("                                           |                         |                        \n");
	printf("                                           |                         |                        \n");
	printf("                                           |                         |                        \n");
	printf("                                           |                         |                        \n");
	printf("                                           |                         |                        \n");
	printf("                  ________________________________________________________________________\n");
	printf("                                           |                         |                        \n");
	printf("                                           |                         |                        \n");
	printf("                                           |                         |                        \n");
	printf("                                           |                         |                        \n");
	printf("                                           |                         |                        \n");
	printf("                                           |                         |                        \n");

	}
/************************************************************CHEKING****************************************************/
int chek(int c)  
{
	int score_O = 0, score_X = 0;
	if (a[0][0][1] + a[1][1][1] + a[2][2][1] == 3 || a[0][2][1] + a[1][1][1] + a[2][0][1] == 3 || a[0][0][1] + a[0][1][1] + a[0][2][1] == 3 || a[1][0][1] + a[1][1][1] + a[1][2][1] == 3 || a[2][0][1] + a[2][1][1] + a[2][2][1] == 3 || a[0][0][1] + a[1][0][1] + a[2][0][1] == 3 || a[0][1][1] + a[1][1][1] + a[2][1][1] == 3 || a[0][2][1] + a[1][2][1] + a[2][2][1] == 3)
	{
		if (c % 2 == 1)
		{
			score_O++;
			//gotoxy(0, 30);
			printf("\n\n\n\nWoOw!!!\n'O' is winner\n");
		}
		if (c % 2 == 0)
		{
			score_X++;
			//gotoxy(0, 30);
			printf("\n\n\n\nWoOw!!!\n'X' is winner\n");
		}
		gotoxy(0, 30);
		printf("Do yOu wAnT To CoNtiNuE ??\n");
		printf("IF YoU WanT ENTER \"yes\" NOR ENTER \"no\"...\n");
		char h[5];
		fgets(h,500,stdin);
		if (strcmp(h, "yes") == 0)
		{
			a[3][3][2] = { 0 };  //a[3][3][2] = { { { 0, 0 }, { 0, 0 }, { 0, 0 }, }, { { 0, 0 }, { 0, 0 }, { 0, 0 }, }, { { 0, 0 }, { 0, 0 }, { 0, 0 } } };
			system("cls");
			screan();
			return 200;
		}
		if (strcmp(h, "no") == 0)
		{
			printf("the SCORE of 'O' is : %d\n", score_O);
			printf("the SCORE of 'X' is : %d\n", score_X);
			return 100;

		}
	}
	if (a[0][0][0] + a[1][1][0] + a[2][2][0] == 3 || a[0][2][0] + a[1][1][0] + a[2][0][0] == 3 || a[0][0][0] + a[0][1][0] + a[0][2][0] == 3 || a[1][0][0] + a[1][1][0] + a[1][2][0] == 3 || a[2][0][0] + a[2][1][0] + a[2][2][0] == 3 || a[0][0][0] + a[1][0][0] + a[2][0][0] == 3 || a[0][1][0] + a[1][1][0] + a[2][1][0] == 3 || a[0][2][0] + a[1][2][0] + a[2][2][0] == 3)
	{
		if (c % 2 == 1)
		{
			score_O++;
			//gotoxy(0, 30);
			printf("\n\n\n\nWoOw!!!\n'O' is winner\n");
		}
		if (c % 2 == 0)
		{
			score_X++;
			//gotoxy(0, 30);
			printf("\n\n\n\nWoOw!!!\n'X' is winner\n");
		}
		printf("Do yOu wAnT To CoNtiNuE ??\n");
		printf("If YoU WaNt ENTER \"yes\" NOR ENTER \"no\"...\n");
		char h[5];
		fgets(h,500,stdin);
		if (strcmp(h, "yes") == 0)
		{
			a[3][3][2] = { 0 }; //a[3][3][2] = { { { 0, 0 }, { 0, 0 }, { 0, 0 }, } , { { 0, 0 }, { 0, 0 }, { 0, 0 }, }, { { 0, 0 }, { 0, 0 }, { 0, 0 } } };
			system("cls");
			screan();
			return 200;
		}
		if (strcmp(h, "no") == 0)
		{
			printf("the SCORE of 'O' is : %d\n", score_O);
			printf("the SCORE of 'X' is : %d\n", score_X);
			return 100;

		}
	}
	return 300;
}
/*************************************************************PLAY******************************************************/
/*************************************************************MAIN******************************************************/
int main()
{
	//system("color 2F");
	int w;
	int counter;
	printf("please ENTER your NAME :)\n");
	printf("player 1:");
	fgets(s1,500,stdin);
	//scanf("%s",s1[]);
	printf("player 2:");
	fgets(s2,500,stdin);
	w = rand_rand();
	if (w == 0)
	{
		counter = 0;
		x_s1 = 'O';
		x_s2 = 'X';
	}
	if (w == 1)
	{
		counter = 1;
		x_s1 = 'X';
		x_s2 = 'O';
	}
	printf("\nplayer 1 is '%c'\n", x_s1);
	printf("player 2 is '%c'\n", x_s2);

	if (counter == 1)
	{
		//gotoxy(50, 0);
		printf("it is X's TURN\n");
	}
	if (counter == 0)
	{
		//gotoxy(50, 0);
		printf("it is O's TURN\n");
	}
	printf("                                           |                         |                        \n");
	printf("                                           |                         |                        \n");
	printf("                                           |                         |                        \n");
	printf("                                           |                         |                        \n");
	printf("                                           |                         |                        \n");
	printf("                                           |                         |                        \n");
	printf("                   _______________________________________________________________________\n");
	printf("                                           |                         |                        \n");
	printf("                                           |                         |                        \n");
	printf("                                           |                         |                        \n");
	printf("                                           |                         |                        \n");
	printf("                                           |                         |                        \n");
	printf("                                           |                         |                        \n");
	printf("                                           |                         |                        \n");
	printf("                  ________________________________________________________________________\n");
	printf("                                           |                         |                        \n");
	printf("                                           |                         |                        \n");
	printf("                                           |                         |                        \n");
	printf("                                           |                         |                        \n");
	printf("                                           |                         |                        \n");
	printf("                                           |                         |                        \n");

    //XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXx
	int x = 0;
	int y = 0;
	char ch1 = _getch();
	char ch2 = _getch();
	int z;
	gotoxy(56, 17);
	while (1)
	{
		//if (_kbhit())
		//{
		if (ch1 == 'q' || ch2 == 'q')
		{
			printf("Interrupt Key Pressed");
			return 0;
		}
			z = counter % 2;
			/***********************************************RIGHT**************************************************/
			if (ch1 == -32 && ch2 == 77)//right
			{
				x++;
				//____________________________________-
				if (x == 2)
				{
					x = -1;
					if (a[x][y][1] == 1 || a[x][y][0] == 1)
					{
						x = 0;
						if (a[x][y][z] == 1)
							x = -1;
					}
				}
				//_____________________________________-
				if (x == 1)
				{
					if (a[x][y][1] == 1 || a[x][y][0] == 1)
					{
						x = -1;
						if (a[x][y][1] == 1 || a[x][y][0] == 1)
							x = 0;
					}
				}
				//______________________________________-
				if (x == 0)
				{
					if (a[x][y][1] == 1 || a[x][y][0] == 1)
					{
						x = 1;
						if (a[x][y][1] == 1 || a[x][y][0] == 1)
							x = -1;
					}
				}
			}
			/*******************************************LEFT***************************************/
			if (ch1 == -32 && ch2 == 75)//left
			{
				x--;
				if (x == -2)
				{
					x = 1;
					if (a[x + 1][y + 1][1] == 1 || a[x + 1][y + 1][0] == 1)
					{
						x = 0;
						if (a[x + 1][y + 1][1] == 1 || a[x + 1][y + 1][0] == 1)
							x = -1;
					}
				}
				if (x == -1)
				{
					if (a[x + 1][y + 1][1] == 1 || a[x + 1][y + 1][0] == 1)
					{
						x = 1;
						if (a[x + 1][y + 1][1] == 1 || a[x + 1][y + 1][0] == 1)
							x = 0;
					}
				}
				if (x == 0)
				{
					if (a[x + 1][y + 1][1] == 1 || a[x + 1][y + 1][0] == 1)
					{
						x = -1;
						if (a[x + 1][y + 1][1] == 1 || a[x + 1][y + 1][0] == 1)
							x = 1;
					}
				}
			}
			/*******************************************DOWN*******************************************/
			if (ch1 == -32 && ch2 == 80)//down
			{
				y--;
				if (y == -2)
				{
					y = 1;
					if (a[x + 1][y + 1][1] == 1 || a[x + 1][y + 1][0] == 1)
					{
						y = 0;
						if (a[x + 1][y + 1][1] == 1 || a[x + 1][y + 1][0] == 1)
							y = -1;
					}
				}
				if (y == -1)
				{
					if (a[x + 1][y + 1][1] == 1 || a[x + 1][y + 1][0] == 1)
					{
						y = 1;
						if (a[x + 1][y + 1][1] == 1 || a[x + 1][y + 1][0] == 1)
							y = 0;
					}
				}
				if (y == 0)
				{
					if (a[x + 1][y + 1][1] == 1 || a[x + 1][y + 1][0] == 1)
					{
						y = -1;
						if (a[x + 1][y + 1][1] == 1 || a[x + 1][y + 1][0] == 1)
							y = 1;
					}
				}
			}
			/*******************************************UP*****************************************/
			if (ch1 == -32 && ch2 == 72)
			{
				y++;
				//____________________________________-
				if (y == 2)
				{
					y = -1;
					if (a[x + 1][y + 1][1] == 1 || a[x + 1][y + 1][0] == 1)
					{
						y = 0;
						if (a[x + 1][y + 1][1] == 1 || a[x + 1][y + 1][0] == 1)
							y = -1;
					}
				}
				//_____________________________________-
				else if (y == 1)
				{
					if (a[x + 1][y + 1][1] == 1 || a[x + 1][y + 1][0] == 1)
					{
						y = -1;
						if (a[x + 1][y + 1][1] == 1 || a[x + 1][y + 1][0] == 1)
							y = 0;
					}
				}
				//______________________________________-
				else if (y == 0)
				{
					if (a[x + 1][y + 1][1] == 1 || a[x + 1][y + 1][0] == 1)
					{
						y = 1;
						if (a[x + 1][y + 1][1] == 1 || a[x + 1][y + 1][0] == 1)
							y = -1;
					}
				}
			}
			int m, n;
			if (x == -1)
				m = 30;
			else if (x == 0)
				m = 56;
			else if (x == 1)
				m = 82;
			if (y == -1)
				n = 33 - 9;
			else if (y == 0)
				n = 26 - 9;
			else if (y == 1)
				n = 18 - 9;
			gotoxy(m, n);
			/*****************************************SPACE*************************************/
 			ch1 = _getch();
			if (ch1 == -32)
				ch2 = _getch();
			if (ch1 == 'q' || ch2 == 'q')
			{
				printf("Interrupt Key Pressed");
				return 0;
			}
			if (ch1 == 32)
			{
				int m, n;
				if (x == -1)
					m = 30;
				else if (x == 0)
					m = 56;
				else if (x == 1)
					m = 82;
				if (y == -1)
					n = 33 - 9;
				else if (y == 0)
					n = 26 - 9;
				else if (y == 1)
					n = 18 - 9;
				//printf("\n%d%d%d", x, y, z);
				a[x + 1][y + 1][z + 1] = 1;
				//printf("\n^^^^%d\nx:%d y:%d z:%d", a[x][y][z],x,y,z);
				if (counter % 2 == 0)
				{
					gotoxy(m, n);
					printf("O");
				}
				else if (counter % 2 == 1)
				{
					gotoxy(m, n);
					printf("X");
				}
				counter++;
				/*************************************************** CHEK ************************************************/
				int chch;
				chch = chek(counter);
				if (chch == 200)
				{
					x = 0;
					y = 0;
					system("cls");
					screan();
					gotoxy(56, 17);
				}
				if (chch == 300)
				{
					if (z == 0)
					{
						gotoxy(50, 0);
						printf("it's X's TURN!!!!");
						gotoxy(m, n);
					}
					if (z == 1)
					{
						gotoxy(50, 0);
						printf("it's O's TURN!!!!");
						gotoxy(m, n);
					}
				}
			}
		//}
	}
	return 0;
}
