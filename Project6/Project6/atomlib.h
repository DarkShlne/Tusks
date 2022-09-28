#include <iostream>
#include <vector>
#include <string>
#include <fstream>
#include <cstdlib>
#define _USE_MATH_DEFINES
#include <cmath>
using namespace std;

struct atom;
// обработка запросов
void start();
void request(string rq);
void command(string cmd);
string substr(string cmd);
string fullreq(string rq);
void rules(vector <string> rq);
// команды
void list(string dir);
void show(string filename);
void load();
void loadwin();
void calc_bonds();
void bond(int num);
void distances(int first, int second);
void angle(int first, int second, int third);
void torsion(int first, int second, int third, int four);
void printfile(string name);