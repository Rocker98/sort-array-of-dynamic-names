// less1.cpp: определяет точку входа для консольного приложения.
//

#include "stdafx.h"
#include <iostream>
#include <string>
#include <algorithm>

void setNames(std::string *name, int lenght);
void getNames(std::string *name, int lenght);



int main()
{
	int nmbrOfNames;
	std::cout << "How much you want to enter names" << std::endl;
	std::cin >> nmbrOfNames;

	std::string *names = new std::string[nmbrOfNames];

	for(int i=0;i<nmbrOfNames;i++,names++)
	setNames(names, i);

	for (int i = 0; i < nmbrOfNames; i++, names--);				//return to the first element
	
	for (int i = 0; i<nmbrOfNames; i++,names++)
	getNames(names, i);
	
	for (int i = 0; i < nmbrOfNames; i++, names--);				//return to the first element

	std::sort(names, names + nmbrOfNames);

	std::cout << "After sorting" << std::endl;

	for (int i = 0; i<nmbrOfNames; i++, names++)
		getNames(names, i);

	for (int i = 0; i < nmbrOfNames; i++, names--);				//return to the first element

	delete[] names;

	

	system("pause");

    return 0;
}

void setNames(std::string * name, int index)
{
		std::cout << "Enter name "<<index+1<<":"<< std::endl;
		std::cin >> *name;
}

void getNames(std::string * name, int index)
{
		std::cout<<"The "<<index+1<<" is "<< *name<<std::endl;
}
