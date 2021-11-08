#include <iostream>
#include <locale.h>
#include <conio.h>
#include <windows.h>
#include "time.h"
using namespace std;
void setcur(int x, int y)//установка курсора на позицию  x y 
{
	COORD coord;
	CONSOLE_CURSOR_INFO info;
	info.bVisible = false;
	info.dwSize = 100;
	SetConsoleCursorInfo(GetStdHandle(STD_OUTPUT_HANDLE), &info);
	coord.X = x;
	coord.Y = y;
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord);
}
void draw(int** area, int x, int y, int* xcx, int* ycy, int* xlx, int* yly, int* collor, int* rrl, int* lll) {
	for (int i = 0; i < y; i++) {
		for (int j = 0; j < x; j++) {
			if (area[i][j] == (char)219) {
				HANDLE h = GetStdHandle(STD_OUTPUT_HANDLE); /////////////////////////////////////////////////////////////
				SetConsoleTextAttribute(h, 15);
				cout << (char)219;
			}
			else if (*xcx - 1 == j && *ycy - 1 == i) {
				HANDLE h = GetStdHandle(STD_OUTPUT_HANDLE);
				SetConsoleTextAttribute(h, 4);
				cout << (char)219;
			}
			else if (*xcx == j && *ycy - 1 == i) {
				HANDLE h = GetStdHandle(STD_OUTPUT_HANDLE);
				SetConsoleTextAttribute(h, 4);
				cout << (char)219;
			}
			else if (*xcx + 1 == j && *ycy - 1 == i) {
				HANDLE h = GetStdHandle(STD_OUTPUT_HANDLE);
				SetConsoleTextAttribute(h, 4);
				cout << (char)219;
			}
			else if (*xcx + 1 == j && *ycy == i) {
				HANDLE h = GetStdHandle(STD_OUTPUT_HANDLE);
				SetConsoleTextAttribute(h, 4);
				cout << (char)219;
			}
			else if (*xcx - 1 == j && *ycy == i) {
				HANDLE h = GetStdHandle(STD_OUTPUT_HANDLE);
				SetConsoleTextAttribute(h, 4);
				cout << (char)219;
			}
			else if (*xcx - 1 == j && *ycy + 1 == i) {
				HANDLE h = GetStdHandle(STD_OUTPUT_HANDLE);
				SetConsoleTextAttribute(h, 4);
				cout << (char)219;
			}
			else if (*xcx + 1 == j && *ycy + 1 == i) {
				HANDLE h = GetStdHandle(STD_OUTPUT_HANDLE);
				SetConsoleTextAttribute(h, 4);
				cout << (char)219;
			}
			else if (*xcx == j && *ycy + 1 == i) {
				HANDLE h = GetStdHandle(STD_OUTPUT_HANDLE);
				SetConsoleTextAttribute(h, 4);
				cout << (char)219;
			}
			else if (*xcx == j && *ycy == i) {
				HANDLE h = GetStdHandle(STD_OUTPUT_HANDLE); /////////////////////////////////////////////////////////////
				SetConsoleTextAttribute(h, 9);
				cout << (char)219;
			}
			/////////////////////////////////////////////////////////
			else if (*xlx - 1 == j && *yly - 1 == i) {
				switch (*collor)
				{
				case 0: {HANDLE h = GetStdHandle(STD_OUTPUT_HANDLE);
					SetConsoleTextAttribute(h, 1); break; }
				case 1: {HANDLE h = GetStdHandle(STD_OUTPUT_HANDLE);
					SetConsoleTextAttribute(h, 2); break; }
				case 2: {HANDLE h = GetStdHandle(STD_OUTPUT_HANDLE);
					SetConsoleTextAttribute(h, 6); break; }
				case 3: {HANDLE h = GetStdHandle(STD_OUTPUT_HANDLE);
					SetConsoleTextAttribute(h, 5); break; }
				default:
					break;
				}
				cout << (char)219;

			}
			else if (*xlx == j && *yly - 1 == i) {
				switch (*collor)
				{
				case 0: {HANDLE h = GetStdHandle(STD_OUTPUT_HANDLE);
					SetConsoleTextAttribute(h, 1); break; }
				case 1: {HANDLE h = GetStdHandle(STD_OUTPUT_HANDLE);
					SetConsoleTextAttribute(h, 2); break; }
				case 2: {HANDLE h = GetStdHandle(STD_OUTPUT_HANDLE);
					SetConsoleTextAttribute(h, 6); break; }
				case 3: {HANDLE h = GetStdHandle(STD_OUTPUT_HANDLE);
					SetConsoleTextAttribute(h, 5); break; }
				default:
					break;
				}
				cout << (char)219;
			}
			else if (*xlx + 1 == j && *yly - 1 == i) {
				switch (*collor)
				{
				case 0: {HANDLE h = GetStdHandle(STD_OUTPUT_HANDLE);
					SetConsoleTextAttribute(h, 1); break; }
				case 1: {HANDLE h = GetStdHandle(STD_OUTPUT_HANDLE);
					SetConsoleTextAttribute(h, 2); break; }
				case 2: {HANDLE h = GetStdHandle(STD_OUTPUT_HANDLE);
					SetConsoleTextAttribute(h, 6); break; }
				case 3: {HANDLE h = GetStdHandle(STD_OUTPUT_HANDLE);
					SetConsoleTextAttribute(h, 5); break; }
				default:
					break;
				}
				cout << (char)219;
			}
			else if (*xlx + 1 == j && *yly == i) {
			switch (*collor)
			{
			case 0: {HANDLE h = GetStdHandle(STD_OUTPUT_HANDLE);
				SetConsoleTextAttribute(h, 1); break; }
			case 1: {HANDLE h = GetStdHandle(STD_OUTPUT_HANDLE);
				SetConsoleTextAttribute(h, 2); break; }
			case 2: {HANDLE h = GetStdHandle(STD_OUTPUT_HANDLE);
				SetConsoleTextAttribute(h, 6); break; }
			case 3: {HANDLE h = GetStdHandle(STD_OUTPUT_HANDLE);
				SetConsoleTextAttribute(h, 5); break; }
			default:
				break;
			}
			cout << (char)219;
			}
			else if (*xlx - 1 == j && *yly == i) {
			switch (*collor)
			{
			case 0: {HANDLE h = GetStdHandle(STD_OUTPUT_HANDLE);
				SetConsoleTextAttribute(h, 1); break; }
			case 1: {HANDLE h = GetStdHandle(STD_OUTPUT_HANDLE);
				SetConsoleTextAttribute(h, 2); break; }
			case 2: {HANDLE h = GetStdHandle(STD_OUTPUT_HANDLE);
				SetConsoleTextAttribute(h, 6); break; }
			case 3: {HANDLE h = GetStdHandle(STD_OUTPUT_HANDLE);
				SetConsoleTextAttribute(h, 5); break; }
			default:
				break;
			}
			cout << (char)219;
			}
			else if (*xlx - 1 == j && *yly + 1 == i) {
			switch (*collor)
			{
			case 0: {HANDLE h = GetStdHandle(STD_OUTPUT_HANDLE);
				SetConsoleTextAttribute(h, 1); break; }
			case 1: {HANDLE h = GetStdHandle(STD_OUTPUT_HANDLE);
				SetConsoleTextAttribute(h, 2); break; }
			case 2: {HANDLE h = GetStdHandle(STD_OUTPUT_HANDLE);
				SetConsoleTextAttribute(h, 6); break; }
			case 3: {HANDLE h = GetStdHandle(STD_OUTPUT_HANDLE);
				SetConsoleTextAttribute(h, 5); break; }
			default:
				break;
			}
			cout << (char)219;
			}
			else if (*xlx + 1 == j && *yly + 1 == i) {
			switch (*collor)
			{
			case 0: {HANDLE h = GetStdHandle(STD_OUTPUT_HANDLE);
				SetConsoleTextAttribute(h, 1); break; }
			case 1: {HANDLE h = GetStdHandle(STD_OUTPUT_HANDLE);
				SetConsoleTextAttribute(h, 2); break; }
			case 2: {HANDLE h = GetStdHandle(STD_OUTPUT_HANDLE);
				SetConsoleTextAttribute(h, 6); break; }
			case 3: {HANDLE h = GetStdHandle(STD_OUTPUT_HANDLE);
				SetConsoleTextAttribute(h, 5); break; }
			default:
				break;
			}
			cout << (char)219;
			}
			else if (*xlx == j && *yly + 1 == i) {
			switch (*collor)
			{
			case 0: {HANDLE h = GetStdHandle(STD_OUTPUT_HANDLE);
				SetConsoleTextAttribute(h, 1); break; }
			case 1: {HANDLE h = GetStdHandle(STD_OUTPUT_HANDLE);
				SetConsoleTextAttribute(h, 2); break; }
			case 2: {HANDLE h = GetStdHandle(STD_OUTPUT_HANDLE);
				SetConsoleTextAttribute(h, 6); break; }
			case 3: {HANDLE h = GetStdHandle(STD_OUTPUT_HANDLE);
				SetConsoleTextAttribute(h, 5); break; }
			default:
				break;
			}
			cout << (char)219;
			}
			else if (*xlx == j && *yly == i) {
			switch (*collor)
			{
			case 0: {HANDLE h = GetStdHandle(STD_OUTPUT_HANDLE);
				SetConsoleTextAttribute(h, 5); break; }
			case 1: {HANDLE h = GetStdHandle(STD_OUTPUT_HANDLE);
				SetConsoleTextAttribute(h, 1); break; }
			case 2: {HANDLE h = GetStdHandle(STD_OUTPUT_HANDLE);
				SetConsoleTextAttribute(h, 2); break; }
			case 3: {HANDLE h = GetStdHandle(STD_OUTPUT_HANDLE);
				SetConsoleTextAttribute(h, 6); break; }
			default:
				break;
			}
			cout << (char)219;
			}
			/////////////////////////////////////////////////////////
			else if (i >= 0 && i < y && j == 14) {
			HANDLE h = GetStdHandle(STD_OUTPUT_HANDLE);
			SetConsoleTextAttribute(h, 8);
			    cout << (char)219;

			}
			else if (i >= 0 && i < y && j == 26) {
				HANDLE h = GetStdHandle(STD_OUTPUT_HANDLE);
				SetConsoleTextAttribute(h, 8);
				cout << (char)219;

			}
			else if (i ==*rrl && j == 18) {
				HANDLE h = GetStdHandle(STD_OUTPUT_HANDLE);
				SetConsoleTextAttribute(h, 15);
				cout << (char)219;

			}
			else if (i == *rrl+1 && j == 18) {
			HANDLE h = GetStdHandle(STD_OUTPUT_HANDLE);
			SetConsoleTextAttribute(h, 15);
			cout << (char)219;

			}
	
			else if (i == *rrl+3 && j == 18) {
			HANDLE h = GetStdHandle(STD_OUTPUT_HANDLE);
			SetConsoleTextAttribute(h, 15);
			cout << (char)219;

			}
			else if (i == *rrl+4 && j == 18) {
			HANDLE h = GetStdHandle(STD_OUTPUT_HANDLE);
			SetConsoleTextAttribute(h, 15);
			cout << (char)219;

			}
		
		
			else if (i == *rrl + 6 && j == 18) {
			HANDLE h = GetStdHandle(STD_OUTPUT_HANDLE);
			SetConsoleTextAttribute(h, 15);
			cout << (char)219;

			}
			else if (i == *rrl + 7 && j == 18) {
			HANDLE h = GetStdHandle(STD_OUTPUT_HANDLE);
			SetConsoleTextAttribute(h, 15);
			cout << (char)219;

			}
		
			else if (i != *rrl && j == 18) {
			HANDLE h = GetStdHandle(STD_OUTPUT_HANDLE);
			SetConsoleTextAttribute(h, 0);
			cout << (char)219;
}
			else if (i ==*lll && j == 22) {
				HANDLE h = GetStdHandle(STD_OUTPUT_HANDLE);
				SetConsoleTextAttribute(h, 15);
				cout << (char)219;

			}
			else if (i == *lll+1 && j == 22) {
			HANDLE h = GetStdHandle(STD_OUTPUT_HANDLE);
			SetConsoleTextAttribute(h, 15);
			cout << (char)219;

			}
			else if (i == *lll+3 && j == 22) {
			HANDLE h = GetStdHandle(STD_OUTPUT_HANDLE);
			SetConsoleTextAttribute(h, 15);
			cout << (char)219;

			}
			else if (i == *lll+4 && j == 22) {
			HANDLE h = GetStdHandle(STD_OUTPUT_HANDLE);
			SetConsoleTextAttribute(h, 15);
			cout << (char)219;

			}
			else if (i == *lll+6 && j == 22) {
			HANDLE h = GetStdHandle(STD_OUTPUT_HANDLE);
			SetConsoleTextAttribute(h, 15);
			cout << (char)219;

			}
			else if (i == *lll+7 && j == 22) {
			HANDLE h = GetStdHandle(STD_OUTPUT_HANDLE);
			SetConsoleTextAttribute(h, 15);
			cout << (char)219;

			}
			else if (i != *lll && j == 22) {
			HANDLE h = GetStdHandle(STD_OUTPUT_HANDLE);
			SetConsoleTextAttribute(h, 0);
			cout << (char)219;
}
			else if (i >= 0 && i < y && (j >14&&j<18)||(j>18&&j<22)||(j>22&&j<26)) {
				HANDLE h = GetStdHandle(STD_OUTPUT_HANDLE);
				SetConsoleTextAttribute(h, 0);
				cout << (char)219;

			}
			
			
			else { 
				HANDLE h = GetStdHandle(STD_OUTPUT_HANDLE); /////////////////////////////////////////////////////////////
				SetConsoleTextAttribute(h, 10);
				cout << (char)177; }
		}
		cout << endl;
	}
}
void move(int* xcx) {
	while (_kbhit()) {
		switch (_getch())
		{
		/*case 'w':{
			yc--;
			break;
		}*/
		case 'd': {
			*xcx+=1;
			break;
		}
	/*	case 's': {
			yc++;
			break;
		}*/
		case 'a': {
			*xcx-=1;
			break;
		}
		default:
			break;
		}
	}
}
void let(bool* spacee, int* wway_temp, int* wway, int* xlx, int* yly, int* collor, int* scr) {

	if (*spacee == true) {
		if (*wway_temp == *wway && *wway_temp == 0) {
			srand(time(NULL));
			*wway =1+rand() % 2;
			
			if (*wway == 1) {
				*xlx = 20;
			}
			if (*wway == 2) {
				*xlx = 24;

			}

		}
		if (*wway_temp == *wway && *wway_temp == 1) {

			srand(time(NULL));
			*wway = rand() % 3;
			if (*wway == 0) {
				*xlx = 16;
			}
			
			if (*wway == 2) {
				*xlx = 24;

			}
		}
		
		if (*wway_temp == *wway&&*wway_temp==2) {

			srand(time(NULL));
			*wway = rand() % 2;
			if (*wway == 0) {
				*xlx = 16;
			}
			if (*wway == 1) {
				*xlx = 20;
			}
			
		}
		srand(time(NULL));
		srand(time(NULL));
	   *collor = rand() % 4;
		*yly = -2;
		*wway_temp = *wway;
		*scr += 100;
		*spacee = false;
	}
	
	
}
void logic(int* xcx, int* yly, int* rrl, int* lll, bool* spacee) {
	if (*xcx == 17) {
		*xcx = 20;
	}
	if (*xcx == 21) {
		*xcx = 24;
	}
	if (*xcx == 23) {
		*xcx = 20;
	}
	if (*xcx == 19) {
		*xcx = 16;
	}
	if (*xcx == 15) {
		*xcx+=1;
	}
	if (*xcx == 25) {
		*xcx-=1;
	}
	if (*yly == 21) {
		*spacee = true;
	}
	if (*rrl == 21) {
		*rrl = -5;
	}
	if (*lll == 21) {
		*lll = -22;
	}
	*yly+=1;
	*rrl+=1;
	*lll+=1;

}
int main()
{
	//////////////////////////////ОБЪЯВЛЕНИЕ ПЕРЕМЕННЫХ
	const int y = 20, x = 40;
	int xc = 20, yc = 11, xl = 16, yl = -2,  way=0, way_temp=0, color=0, rl = -5, ll = -22, score = 0;
	bool space = false;
	int* xcx = &xc;
	int* ycy = &yc;
	int* xlx = &xl;
	int* yly = &yl;
	int** area = new int* [y];
	for (int i = 0; i < y; i++) {
		area[i] = new int[x];
	}
	int* wway = &way;
	int* wway_temp = &way_temp;
	int* collor = &color;
	int* rrl = &rl;
	int* lll = &ll;
	int* scr = &score;
	bool* spacee = &space;
	//////////////////////////////ОБЪЯВЛЕНИЕ ПЕРЕМЕННЫХ
	SetConsoleTitleA("TopRacer");
	HANDLE h = GetStdHandle(STD_OUTPUT_HANDLE);
	CONSOLE_CURSOR_INFO info;
	info.bVisible = false;
	info.dwSize = 100;
	SetConsoleCursorInfo(h, &info);
	system("mode con cols=40 lines=25");
	for (int i = 0; i < y; i++) {
		for (int j = 0; j < x; j++) {
			if (i == 0 &&j>=0&&j<x || i == y - 1 && j >= 0 && j < x || j == x - 1 && i >= 0 && i < y || j == 0 && i >= 0 && i < y) {
				area[i][j] = (char)219;
			}
		}
	}
	int choose = 0;
	int gameover = 0;
	do {
		SetConsoleTextAttribute(h, 2);
		cout << "1)RACE" << endl;
		SetConsoleTextAttribute(h, 4);
		cout << "2)EXIT" << endl;
		cin >> choose;
		int speed = 0;
		if (choose == 1) {
			system("cls");
			SetConsoleTextAttribute(h, 9);
			cout << "SPEED:" << endl;
			SetConsoleTextAttribute(h, 2);
			cout << "1)LIGHT" << endl;
			SetConsoleTextAttribute(h, 6);
			cout << "2)MIDDLE" << endl;
			SetConsoleTextAttribute(h, 4);
			cout << "3)HAAAAARD x(" << endl;
			cin >> speed;
			while (true) {
				setcur(0, 0);
				if (speed == 1) {
					Sleep(250);
				}
				if (speed == 2) {
					Sleep(100);
				}
				if (speed==3){
					Sleep(0);
				}
				draw(area,x,y,xcx,ycy,xlx,yly,collor,rrl,lll);//ФУНКЦИЯ РИСОВАНИЯ ВСЕГО ПОЛЯ(БОТОВ, ПЛЕЕРА, ДОРОГИ)
				let(spacee,wway_temp,wway,xlx,yly,collor,scr);//ФУНКЦИЯ РАССЧЕТА КООРДИНАТ БОТОВИХ ЦВЕТА И ИХ ПЕРЕДВИЖЕНИЯ
				move(xcx);//ФУНКЦИЯ ПЕРЕДВИЖЕНИЯ ИГРОКА
				logic(xcx,yly,rrl,lll,spacee);//ФУНКЦИЯ ПО КОРРЕКТНОМУ ПЕРЕДВИЖЕНИЮ ДОРОГИ И ПЛЕЕРА(КООРДИНАТЫ)
				if (yc - 1 == yl + 1 && xc == xl) {
					gameover = 0;
					break;
				}
				cout << "SCORE: " << *scr;
			}
			//////////////////////////////////////////////////////////GAMEOVER//////////////////////////////////
			system("cls");
			SetConsoleTextAttribute(h, 2);
			cout << (char)219 << (char)219 << (char)219 << (char)219 << " " << (char)219 << (char)219 << (char)219 << (char)219 << " " << (char)219 << "   " << (char)219 << " " << (char)219 << (char)219 << (char)219;
			cout << endl;
			cout << (char)219 << "    " << (char)219 << "  " << (char)219 << " " << (char)219 << (char)219 << " " << (char)219 << (char)219 << " " << (char)219 << endl;
			cout << (char)219 << " " << (char)219 << (char)219 << " " << (char)219 << (char)219 << (char)219 << (char)219 << " " << (char)219 << " " << (char)219 << " " << (char)219 << " " << (char)219 << (char)219 << (char)219 << endl;
			cout << (char)219 << "  " << (char)219 << " " << (char)219 << "  " << (char)219 << " " << (char)219 << "   " << (char)219 << " " << (char)219 << endl;
			cout << (char)219 << (char)219 << (char)219 << (char)219 << " " << (char)219 << "  " << (char)219 << " " << (char)219 << "   " << (char)219 << " " << (char)219 << (char)219 << (char)219 << endl;
			cout << endl;
			cout << (char)219 << (char)219 << (char)219 << (char)219 << " " << (char)219 << " " << (char)219 << " " << (char)219 << (char)219 << (char)219 << " " << (char)219 << (char)219 << (char)219 << (char)219 << endl;
			cout << (char)219 << "  " << (char)219 << " " << (char)219 << " " << (char)219 << " " << (char)219 << "   " << (char)219 << "  " << (char)219 << endl;
			cout << (char)219 << "  " << (char)219 << " " << (char)219 << " " << (char)219 << " " << (char)219 << (char)219 << (char)219 << " " << (char)219 << (char)219 << (char)219 << (char)219 << endl;
			cout << (char)219 << "  " << (char)219 << " " << (char)219 << (char)219 << (char)219 << " " << (char)219 << "   " << (char)219 << " " << (char)219 << endl;
			cout << (char)219 << (char)219 << (char)219 << (char)219 << "  " << (char)219 << "  " << (char)219 << (char)219 << (char)219 << " " << (char)219 << " " << (char)219 << endl;
			SetConsoleTextAttribute(h, 15);
			cout << "SCORE: " << *scr;
			Sleep(2000);
			SetConsoleTextAttribute(h, 15);
			system("cls");
			///////////////////////////////////////GAMEOVER///////////////////////////////////////////////////
			main();
		}
		system("cls");
	} while (choose != 2);

	return 0;
}
