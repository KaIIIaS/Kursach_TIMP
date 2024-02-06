/**
* @file md5.h
* @author Маслинов А.А.
* @version 1.0
* @date 05.02.2023
* @copyright ИБСТ ПГУ
* @brief Заголовочный файл для модуля md5
*/

// @brief Бибилотек Сrypto++
#include <cryptopp/hex.h> 
#define CRYPTOPP_ENABLE_NAMESPACE_WEAK 1
#include <cryptopp/md5.h> 

using namespace std;

string MD5_hash(string hash);
