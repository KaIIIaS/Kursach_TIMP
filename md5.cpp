/**
* @file md5.cpp
* @author Маслинов А.А.
* @version 1.0
* @date 05.02.2024
* @copyright ИБСТ ПГУ
* @brief Модуль хэширования
*/
 
#include "md5.h"
// @brief Объявление именного пространства CryptoPP
using namespace CryptoPP;

// @param hash сообщения получаемое для хэширования
string MD5_hash(string hash)
{

    // @brief  переменная получаемого сообщения
    string massange; 
    
    Weak1::MD5 hashmd4;  
    // @param Класс, который используется для чтения данных из источника и записи их в приемник
    StringSource(hash, true, 
                    new HashFilter(hashmd4, // @param Класс, который используется для фильтрации данных перед их хешированием
                                    new HexEncoder( // @param Класс, который используется для преобразования двоичных данных в шестнадцатеричную строку
                                        new StringSink(massange)))); // @param Класс, который используется для записи данных в приемник
                                        
    // @return выводим сообщение и его хэш
    return massange;
}
