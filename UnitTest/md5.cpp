/**
 * @file md5.cpp
 * @brief Файл для хэширования md5
 */
 
#include "md5.h"

using namespace CryptoPP;

/**
* @brief Получение хэша по алгоритму md5
* @param hash сообщения получаемое для хэширования
* @return Полученный хэш
*/

string MD5_hash(string hash)
{

    
    string massange; 
    
    Weak1::MD5 hashmd4;  
    
    StringSource(hash, true, 
                    new HashFilter(hashmd4, 
                                    new HexEncoder( 
                                        new StringSink(massange)))); 
                                        
    // выводим сообщение и его хэш
    return massange;
}
