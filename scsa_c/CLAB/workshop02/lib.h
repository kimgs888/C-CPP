#pragma once

void insertBook(char name[10][50], int price[10]);
void printBook(char name[10][50], int price[10]);
void updateBook(char name[10][50], int price[10]);
void deleteBook(char name[10][50], int price[10]);
void findBook(char name[10][50], int price[10]);

void func(void (*fp)(char (*)[50], int*), char (*name)[50], int* price);
