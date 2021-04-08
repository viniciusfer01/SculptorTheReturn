#ifndef CUTELLIPSOID_H
#define CUTELLIPSOID_H
#include <figurageometrica.h>
#include <sculptor.h>
#include <cmath>

    /**
     * @brief The cutellipsoid class fará um corte de formato elipsoidal na figura, a partir das coordenadas estabelecidas.
     */

class cutellipsoid: public FiguraGeometrica{
protected:

    /**
     * @brief xcenter determina o centro da elipse que será cortada, na coordenada x.
     */
        int xcenter;

    /**
     * @brief ycenter determina o centro da elipse que será cortada, na coordenada y.
     */
        int ycenter;

    /**
     * @brief zcenter determina o centro da elipse que será cortada, na coordenada z
     */
        int zcenter;

    /**
     * @brief rx determina o raio da elipse no eixo x.
     */
        int rx;

    /**
     * @brief ry determina o raio da elipse no eixo y.
     */
        int ry;

    /**
     * @brief rz determina o raio da elipse no eixo z.
     */
        int rz;


public:
    cutellipsoid(int _xcenter, int _ycenter, int _zcenter, int _rx, int _ry, int _rz);

    /**
     * @brief ~cutellipsoid é o destrutor da da função <b>cuteEllipsoid</b>.
     */

    virtual ~cutellipsoid();

    /**
     * @brief draw É o responsável por desenhar a figura desejada.
     * @brief t Ficará responsável por armazenar o objeto desenhado pelo draw.
     */

    void draw(Sculptor &t);
};

#endif // CUTELLIPSOID_H

