#include <iostream>
#include <fstream>
#include <unistd.h>
#include <arpa/inet.h>

using namespace std;

class Client
{
public:
    int Server(string str1, string str2);
    int port;
    uint16_t summa;
    string massage;
    string vectora;
    string result;
    string autification;
    string username;
    string password;
    string line;
};

class client_error: public invalid_argument
{
public:
    explicit client_error (const string& what_arg):
        invalid_argument(what_arg) {}
    explicit client_error (const char* what_arg):
        invalid_argument(what_arg) {}
};
