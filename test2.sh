#!/bin/bash

# Проверка неверного адреса сервера
echo "Тест 2: Вывод ошибки при неверном ip-адресе"
./client -a 33 -v vector.txt -r rez.txt
