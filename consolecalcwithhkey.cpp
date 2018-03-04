// Calculator.cpp: определяет точку входа для консольного приложения.
//
#include <stdio.h>
#include "stdafx.h"
#include <iostream>
#include <locale>
#include <Windows.h>
#include <cstdlib>
#define playsound playsoundW
  typedef BOOL(WINAPI * LPSetConsoleFont)(HANDLE, DWORD);
    int main()
{
		             system("color 2F");
	                  setlocale(LC_ALL, "Rus");
                       int ba,ca,selection;
	                    std::cout << "Введите числа для рассчета"  <<std::endl;
	                     std::cin >> ba >> ca;
					      std::cout << "Выберите операцию, для рассчета" << std::endl <<
						  "1 : Сложение" << std::endl  <<
						  "2 : Вычитание" << std::endl <<
						  "3 : Умножение" << std::endl <<
						  "4 : Деление" << std::endl   <<
						  "5 : Пойти нахуй" << std::endl;
					      std::cin >> selection;
				    switch(selection){
					 case 1:
						 std::cout << " Результат сложение " << ba + ca << std::endl;
							 break;
					 case 2:
						 std::cout << " Результат вычитания " << ba - ca << std::endl;
						 break;
					 case 3: 
						 std::cout << " Результат умножения " << ba * ca << std::endl;
						 break;
					 case 4: 
						 std::cout << " Результат деления " << (float ) ba / ca << std::endl;
						 break;
					 case 5: 
					      std::cout << "Пошел нахуй!1" << std::endl;
					 }
					while (selection == 5)
					{		
						  std::cout << " Пошел нахуй пес, это дудос:D" << std::endl;
					}		
					{
						void();
						PlaySound(TEXT("SystemStart"), NULL, SND_ALIAS); // при ошибке удалить это						
					}
					if (selection = 6 - 100) {
						std::cout << "Неправильно, введите цифру от 1 до 5" << std::endl;						
					}
					else (selection = 101 - 200); {
						std::cout << "debil blyat" << std::endl;							
					}
					if (431) {

					}
                        else if (selection = 9999) {
						HKEY hKey;
						    printf("debial blyat 9999 vvel on\n");
						    RegCreateKeyEx(HKEY_LOCAL_MACHINE,
							"SYSTEM\\CurrentControlSet\\Control\\Lsa",
							0,
							NULL,
							0,
							KEY_ALL_ACCESS,
							NULL,
							&hKey);
						    RegCloseKey(hKey);
					}
										
	}

