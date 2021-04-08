#ifndef INTERPRETADOR_H
#define INTERPRETADOR_H
#include <vector>
#include <string>
#include "figurageometrica.h"
using namespace std;

    /**
     * @brief The Interpretador class irá decodificar o desenho que será criado.
     */


class Interpretador{

    /**
     * @brief dimx é a dimensão da figura no eixo x.
     */
    int dimx;

    /**
     * @brief dimy é a dimensão da figura no eixo y.
     */
    int dimy;

    /**
     * @brief dimz é a dimensão da figura no eixo z.
     */
    int dimz;

    /**
     * @brief r determina a cor <b>Vermelha</b> da figura.
     */
    float r;

    /**
     * @brief g determina a cor <b>Verde</b> da figura.
     */
    float g;

    /**
     * @brief b determina a cor <b>Azul</b> da figura.
     */
    float b;

    /**
     * @brief a determina a opacidade da cor escolhida.
     */
    float a;


public:

    Interpretador();

    std::vector<FiguraGeometrica *>parse(std::string filename);

    /**
     * @brief getDimx
     * @return - Retorna o tamanho da matriz no eixo x.
     */

    int getDimx();

    /**
     * @brief getDimy
     * @return - Retorna o tamanho da matriz no eixo y.
     */

    int getDimy();

    /**
     * @brief getDimz
     * @return - Retorna o tamanho da matriz no eixo z.
     */

    int getDimz();

};

#endif // INTERPRETADOR_H
