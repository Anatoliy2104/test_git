#pragma once
#include <iostream>
#include <ctime>
#include <iomanip>

using namespace std;

int** CreateArray(int M, int N);
void CreateRandomNumber(int** array, int M, int N);
void Deletearray(int** array, int M, int N);
void Printarray(int** array, int N, int M);
void Search(int M, int N, int** array);

