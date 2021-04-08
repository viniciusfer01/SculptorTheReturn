#ifndef PUTELLIPSOID_H
#define PUTELLIPSOID_H
#include <figurageometrica.h>
#include <sculptor.h>
#include <cmath>

/**
 * @brief The putellipsoid class adiciona uma figura no formado de elipsoide no desenho.
 */

class putellipsoid: public FiguraGeometrica{
protected:

    /**
     * @brief xcenter indica o centro da elipsoide na coordenada x.
     */
        int xcenter;

    /**
     * @brief ycenter indica o centro da elipsoide na coordenada y.
     */
        int ycenter;

    /**
     * @brief zcenter indica o centro da elipsoide na coordenada z.
     */
        int zcenter;

    /**
     * @brief rx representa o valor do raio da elipsoide no eixo x.
     */
        int rx;

    /**
     * @brief ry representa o valor do raio da elipsoide no eixo y.
     */
        int ry;

    /**
     * @brief rz representa o valor do raio da elipsoide no eixo z.
     */
        int rz;


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
    putellipsoid(int xcenter, int ycenter, int zcenter, int rx, int ry, int rz, float r, float g, float b, float a);

    /**
      * @brief ~putellipsoid é o destrutor da função <b>puteellipsoid</b>.
      */

    ~putellipsoid();

    /**
     * @brief draw É o responsável por desenhar a figura desejada.
     * @brief t Ficará responsável por armazenar o objeto desenhado pelo draw.
     */

    void draw(Sculptor &t);
};

#endif // PUTELLIPSOID_H




