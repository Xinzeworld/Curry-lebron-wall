// бананы
#include <windows.h>
#include "stdafx.h"
#include <iostream>
#include "locale"
using namespace std;
void slp();
int main()
{
	setlocale(LC_ALL, "Rus"); // Язык
	 cout << "Введите ваше имя:\n";
	  string first_name;
	   const string("Stephen Curry"); // const для того чтобы в будущем сделать if
	    cin >> first_name;
	     cout << "hello, " << first_name << endl;
	      cout << "Введите вашего любимого баскетболиста:\n";
	       bool basketball;
	        cin >> basketball;
			string ballers[3] = {
             "Lebron","Curry","Wall"
			 };       
				  if (basketball = 1) {
					  cout << "you suck" << endl;
				  }
				  else {
					  cout << "Curry the best shooter" << endl;					  
				  }
				  {
					  int x;
				  std:cout << "Enter Wall: \n";
					  std::cin >> x;
					  if (x == 2) slp(); 
					  return 0;
				  }
				  void slp();
				  {
					  Sleep(60000);
				  }
     cout << "Отличный выбор, " << first_name << endl;
}

