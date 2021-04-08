#include "putsphere.h"
#include "putvoxel.h"
#include "cutbox.h"
#include "cutellipsoid.h"
#include "cutsphere.h"
#include "cutvoxel.h"
#include "interpretador.h"

using namespace std;

int main(){

    Sculptor *s1;

    Interpretador parser;
    std:: vector<FiguraGeometrica*> figs;

    figs = parser.parse("input.txt");

    s1 = new Sculptor(parser.getDimx(), parser.getDimy(), parser.getDimz());
    
    cout << figs.size() << endl;

    for(size_t i=0; i<figs.size(); i++){
                figs[i]->draw(*s1);
    }
    s1->limpaVoxels();
    s1->writeOFF((char*)"exit.off");
    for(size_t i=0; i<figs.size(); i++){
        delete figs[i];
    }
    delete s1;
    
    return 0;
}
