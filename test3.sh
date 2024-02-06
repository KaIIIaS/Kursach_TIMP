#!/bin/bash

# Проверка неверного порта сервера
echo "Тест 3: Вывод ошибки при неверном порте"
./client -a 127.0.0.1 -p 7777 -v /home/stud/Desktop/Kursach/vector.txt -r /home/stud/Desktop/Kursach/rez.txt -l /home/stud/Desktop/Kursach/vclient.conf
