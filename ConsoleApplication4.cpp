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
	       string basketball;
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
				  {
					  string basketballers[8] = {
						  "Curry","LeBron","Durant","Leonard","Russel","Bryant",
						  "Irving","George"
					  }
					  cout << "Кто стал MVP в сезоне 2015?" << endl;
					  string vas;
					  if (vas = 0) {
						  cout << "Right!" << endl;
						  }
					  else if (vas = 5){
						  cout << "Old school!" << endl;
					  }
					  else {
						  cout << "wrong!" << endl;
					  }

				  }
				  {					  
					  cout << "Отличный выбор, " << first_name << endl;
					   cout << "Введите любимого центрового :\n";
					    string centrov;
						 string Shaqquille;
					      cin >> centrov;
						  if (centrov = Shaqquille) {
							  cout << "ок" << endl;
					  }					  
						  else {
							  exit(0);
						  }
		
				 }
				  if (FileExists("C:\Users\Артем\Downloads\music\Kizaru – На работе"))
				  {
					  Form1->MediaPlayer1->FileName = "C:\Users\Артем\Downloads\music\Kizaru – На работе";
					  Form1->MediaPlayer1->Open();
					  Form1->MediaPlayer1->Play();
				  }
}