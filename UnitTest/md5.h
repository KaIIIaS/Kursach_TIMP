/**
* @file md5.h
* @author
* @version 1.0
* @date 08.02.2023
* @copyright ИБСТ ПГУ
* @brief Заголовочный файл для модуля md5
*/

#include <cryptopp/hex.h> // HexEncoder
#define CRYPTOPP_ENABLE_NAMESPACE_WEAK 1
#include <cryptopp/md5.h> // md5

using namespace std;

string MD5_hash(string hash);
