//
// Created by sebasbocaccio on 6/9/20.
//
#include <iostream>
#include <vector>
using namespace std;


struct local{
    int befenicio;
    int contagio;
};

int max_NPM_FB(vector<local> &aglomerado,int indice,int beneficio,int contaminacion,vector<int> locales_index);
int max_NPM_FB_anterior(vector<local> &aglomerado,int indice,int beneficio,int contaminacion);
int main();


