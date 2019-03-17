#include "pch.h"
#include<iostream>
#include<windows.h>
#include<conio.h>
#include<stdlib.h>
#pragma comment(lib, "user32")
using namespace std;


char choice;



void PlayerName()
{
	cout << "\n\n\n\n\n\n\n______________________________________________________________________________________________\n\n\n\nWhat is you name?";
}

void Welcome()
{
	system("CLS");
	char choice;
	cout << "Welcome to  my attempt at a C ++ Game ";
	cout << "\n\n\n\n\n\n\n_______________________________________________________________________________";
	cout << "_______________\n\n\n\n(N)ew game		(L)oad			(H)elp\n\n";
	choice = _getch();
	system("CLS");
	if (choice == 'n')
	{
		PlayerName();
	}
	if (choice == 'l')
	{
		cout << "Sorry, not in the game yet";
		_getch();
		Welcome();
	}
	if (choice == 'h')
	{
		cout << "Sorry, not in the game yet";
		_getch();
		Welcome();
	}



}

int main()
{
	
	//Sets Font and screen fullscreen
	::SendMessage(::GetConsoleWindow(), WM_SYSKEYDOWN, VK_RETURN, 0x20000000);
	HANDLE Hout = ::GetStdHandle(STD_OUTPUT_HANDLE);
	CONSOLE_FONT_INFOEX Font = { sizeof(Font) };
	::GetCurrentConsoleFontEx(Hout, FALSE, &Font);
	COORD fsize = { 20,50 };
	GetCurrentConsoleFontEx(Hout, 0, &Font);
	Font.dwFontSize = fsize;
	SetCurrentConsoleFontEx(Hout, 0, &Font);


	//Start Program
	Welcome();
	return 0;
}


