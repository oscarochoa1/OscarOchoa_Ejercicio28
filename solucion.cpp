#include <iostream>
#include <fstream>
#include <cmath>

using namespace std;


int main(){
    int deltax=0.01;
     ofstream outfile;
    int i,j;
    int k = 200;
    int c= 900;
    int p=2700;
    int t;
    int deltat=0.5;
    int l=202;   
    int puntos;
    int T[202][202];
    double deTdex;
    double temp;
    double deTdet;
    int n = 0.041;
    
    for (i=0; i<201 ; i++){
        for (j=0; j<201; j++){
            if (i<80 && i>120 && i<201){
                temp = 300;
                if (i>81 && i<119){
                    temp = 500;               
                }
            }
        }
    }
    
    while (t<100){

    for (i=0; i<201 ; i++){
        for (j=0; j<201; j++){
            deTdex = (T[i+deltax][j] + T [i-deltax][j] - 2*T[i][j]) / (deltax*deltax);
            
            deTdet = (T[i][j+deltat] - T[i][j])/deltat;
        }
    }
        for (i=0; i < 201 ; i++){
            for (j=0; j<201; j++){
            T[i][j+1] = T[i][j] + n*((deTdex)*(deltax*deltax));
            }
        }
    }
    return 0;
}