
#include "main.h"
int cantLocales=5;
int maximoContagio = 20;
int maximoBefenicioActual = 0;
bool factibilidad = false;
bool optimalidad = false;



int max_NPM_FB(vector<local> &aglomerado,int indice,int beneficio,int contaminacion,vector<int> locales_index){

    //Si llegue al final de mi arbol
    if(indice >= aglomerado.size()) {
        //Chequeamos que esten a minimo 1 de distancia
        //Como sabemos que esta ordenado alcanza con fijarse que entre cada elemento la diferencia sea mayor a 1
        int tamano = locales_index.size()-1;
            for (int i = 0; i < tamano ; i++) {
                if (locales_index[i] + 1 == locales_index[i + 1]) return -1;
            }
        return contaminacion > maximoContagio ? -1 : beneficio;
    }

    //Si me falta ramificar
    vector<int> locales_agregando_iesimo = locales_index;
    locales_agregando_iesimo.push_back(indice);
    return max(max_NPM_FB(aglomerado,indice+1,beneficio+aglomerado[indice].befenicio,contaminacion+aglomerado[indice].contagio,locales_agregando_iesimo),
               max_NPM_FB(aglomerado,indice+1,beneficio,contaminacion,locales_index));


}
int maximoBeneficioFuturo(vector<local> &aglomerado,int indice){
    int res = 0;
    while(indice < aglomerado.size()){
        res += aglomerado[indice].befenicio;
        indice = indice + 2;
    }
    return res;
}


int max_NPM_BT(vector<local> &aglomerado,int indice,int beneficio,int contaminacion) {

    //Si llegue al final de mi arbol
    if (indice >= aglomerado.size()) {
        if (contaminacion > maximoContagio) {
            return -1;
        } else {
            maximoBefenicioActual = max(beneficio, maximoBefenicioActual);
            return maximoBefenicioActual;
        }
    }
        //Poda Factibilidad.
        if (factibilidad) {
            if (contaminacion > maximoContagio)
                return -1;
        }
        //Poda Optimalidad.
        if (optimalidad) {
            if (maximoBefenicioActual > maximoBeneficioFuturo(aglomerado, indice) + beneficio) return -1;
        }

        //Si me falta ramificar
        return max(max_NPM_BT(aglomerado, indice + 2, beneficio + aglomerado[indice].befenicio,
                              contaminacion + aglomerado[indice].contagio),
                   max_NPM_BT(aglomerado, indice + 1, beneficio, contaminacion));


}
int mainsito(){

    //cin >> cantLocales >> maximoContagio ;
    vector<local> aglomerado;

    local temporal;
    for(int i = 0;i< cantLocales;i++){
        cout << "Dame Valores ";
        cin >> temporal.befenicio >> temporal.contagio;
        aglomerado.push_back(temporal);
    }
    vector<int> vector_vacio;
    int resultado =  max_NPM_FB(aglomerado, 0,0,0,vector_vacio);
    cout << resultado;

    return 0;
}

