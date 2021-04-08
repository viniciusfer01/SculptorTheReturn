#include "interpretador.h"
#include <fstream>
#include <sstream>
#include <string>
#include <iostream>
#include <string.h>
#include <vector>
#include "putbox.h"
#include "putellipsoid.h"
#include "putsphere.h"
#include "putvoxel.h"
#include "cutbox.h"
#include "cutellipsoid.h"
#include "cutsphere.h"
#include "cutvoxel.h"

using namespace std;

Interpretador::Interpretador(){

}

std::vector<FiguraGeometrica *> Interpretador::parse(std::string filename){


    std::vector<FiguraGeometrica*> figs;
    std::ifstream fin;
    std::stringstream ss;
    std::string s, token;


    ofstream entrada;
        //entrada.open("ler.txt");
        fin.open("ler.txt");
                    if(!fin.is_open()){
                        cout<<"Erro ao abrir o arquivo ou arquivo inexistente"<<endl;
                        exit(0);
    }


    while(fin.good()){
        getline(fin, s);
        if(fin.good()){
            ss.clear();
            ss.str(s);
            ss >> token;
            if(ss.good()){
                if(token.compare("dim") == 0){
                    ss >> dimx >> dimy >> dimz;
                }
                else if(token.compare("putvoxel") == 0){
                    int x, y, z;
                    ss >> x >> y >> z >> r >> g >> b >> a;
                    figs.push_back(new putvoxel(x, y, z, r, g, b, a));
                }
                else if(token.compare("cutvoxel") == 0){
                    int x, y, z;
                    ss >> x >> y >> z;
                    figs.push_back(new cutvoxel(x, y, z));
                }
                else if(token.compare("putbox") == 0){
                    int x0, x1, y0, y1, z0, z1;
                    ss >> x0 >> x1 >> y0 >> y1 >> z0 >> z1 >> r >> g >> b >> a;
                    figs.push_back(new PutBox(x0, x1, y0, y1, z0, z1, r, g, b, a));
                }
                else if(token.compare("cutbox") == 0){
                    int x0, x1, y0, y1, z0, z1;
                    ss >> x0 >> x1 >> y0 >> y1 >> z0 >> z1;
                    figs.push_back(new CutBox(x0, x1, y0, y1, z0, z1));
                }
                else if(token.compare("putsphere") == 0){
                    int xcenter, ycenter, zcenter, radius;
                    ss >> xcenter >> ycenter >> zcenter >> radius >> r >> g >> b >> a;
                    figs.push_back(new putsphere(xcenter, ycenter, zcenter, radius, r, g, b, a));
                }
                else if(token.compare("cutsphere") == 0){
                    int xcenter, ycenter, zcenter, radius;
                    ss >> xcenter >> ycenter >> zcenter >> radius;
                    figs.push_back(new cutsphere(xcenter, ycenter, zcenter, radius));
                }
                else if(token.compare("putellipsoid") == 0){
                    int xcenter, ycenter, zcenter, rx, ry, rz;
                    ss >> xcenter >> ycenter >> zcenter >> rx >> ry >> rz >> r >> g >> b >> a;
                    figs.push_back(new putellipsoid(xcenter, ycenter, zcenter, rx, ry, rz, r, g, b, a));
                }
                else if(token.compare("cutellipsoid") == 0){
                    int xcenter, ycenter, zcenter, rx, ry, rz;
                    ss >> xcenter >> ycenter >> zcenter >> rx >> ry >> rz;
                    figs.push_back(new cutellipsoid(xcenter, ycenter, zcenter, rx, ry, rz));
                }
            }
        }
    }

    return(figs);
}

int Interpretador::getDimx(){
    return dimx;
}

int Interpretador::getDimy(){
    return dimy;
}

int Interpretador::getDimz(){
    return dimz;
}


