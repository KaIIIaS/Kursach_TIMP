#!/bin/bash

# Проверка корректного ввода данных
echo "Тест 1: Корректный ввод данных"
./client -a 127.0.0.1 -v vector.txt -r rez.txt -l vclient.conf
