/**
* @file interface.cpp
* @author Маслинов А.А.
* @version 2.0
* @date 05.02.2024
* @copyright ИБСТ ПГУ
* @brief Интерфейс программы
*/

// Наш клиент, который отвечает за взаимодействие с сервером и обработку ошибок
#include "Client.h"
// Библиотека для изменения цвета в консоли (выбрано для более удобного взаимодействия пользователя с интерфейсом)
#include "termcolor.h"

using namespace std;

// @brief Основная функция интерфейса
int main (int argc, char *argv[])
{
	// Соединение
    Client Soedinenie;
	// Справка при запуске программы без параметров
    if(argc == 1) {
        cout << termcolor::bold << termcolor::blue << "-help или -h — справка -> рекомендуем при первом использовании ознакомиться)" << termcolor::reset << endl;
       	cout << termcolor::bold << termcolor::red << "-a — адрес сервера -> обязательный"  << termcolor::reset << endl;
        cout << termcolor::bold << termcolor::blue << "-p — порт сервера -> необязательный (33333)" << termcolor::reset << endl;
        cout << termcolor::bold << termcolor::red << "-v — имя файла с исходными данными -> обязательный"<< termcolor::reset  << endl;
        cout << termcolor::bold << termcolor::red << "-r — имя файла в который необходимо сохранить результат -> обязательный" << termcolor::reset << endl;
        cout << termcolor::bold << termcolor::blue << "-l — имя файла для авторизации -> необязательный" << termcolor::reset << endl;
        return 0;
    }

    string str1;
    string str2;

    int opt;
    // @brief Кейсы с параметрами, которые доступны для ввода
    
    while ((opt=getopt (argc,argv,"ha:p:v:r:l:"))!=-1) {

        switch(opt) {
        
		// @brief Кейс со справкой об использовании программы
        case 'h':
        	cout << termcolor::bold << termcolor::blue << "-help или -h — справка -> рекомендуем при первом использовании ознакомиться)" << termcolor::reset << endl;
       		cout << termcolor::bold << termcolor::red << "-a — адрес сервера -> обязательный"  << termcolor::reset << endl;
        	cout << termcolor::bold << termcolor::blue << "-p — порт сервера -> необязательный (33333)" << termcolor::reset << endl;
        	cout << termcolor::bold << termcolor::red << "-v — имя файла с исходными данными -> обязательный"<< termcolor::reset  << endl;
        	cout << termcolor::bold << termcolor::red << "-r — имя файла в который необходимо сохранить результат -> обязательный" << termcolor::reset << endl;
        	cout << termcolor::bold << termcolor::blue << "-l — имя файла для авторизации -> необязательный" << termcolor::reset << endl;
            return 0;
        
        // @brief Кейс для установки адреса сервера
        case 'a':
            str1 = string(optarg);
            break;
            
		// @brief Кейс для установки порта сервера
        case 'p':
                str2 = string(optarg);
            break;
            
        // @brief Кейс для входного текстового файла    
        case 'v':
            Soedinenie.vectora = string(optarg);
            break;
            
		// @brief Кейс для выходного текстового файла
        case 'r':
            Soedinenie.result = string(optarg);
            break;
            
		// @brief Кейс для файла с логином и паролем
        case 'l':
            Soedinenie.autification = string(optarg);
            break;
            
		// @brief Кейс для неизвестных параметров -> выдаёт ошибку
        case '?':
            cout << termcolor::bold << termcolor::red << "Неверный параметр -> ознакомьтесь со справкой (-h или -help)" << termcolor::reset << endl;
            return 0;
        };
    };

    Soedinenie.Server(str1, str2);
    return 0;
};
