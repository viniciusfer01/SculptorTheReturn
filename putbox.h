#ifndef PUTBOX_H
#define PUTBOX_H
#include <figurageometrica.h>
#include <sculptor.h>

/**
 * @brief The putBox class Cria um cubo a partir de um conjunto de voxels dentro da matriz 3d.
  */

class PutBox: public FiguraGeometrica {
protected:

    /**
     * @brief x0 é o valor inicial de coordenada x.
     */
        int x0;

    /**
     * @brief x1 é o valor final da coordenada x.
     */
        int x1;

    /**
     * @brief y0 é o valor inicial da coordenada y.
     */
        int y0;

    /**
     * @brief y1 é o valor final da coordenada y.
     */
        int y1;

    /**
     * @brief z0 é o valor o inicial da coordenada z.
     */
        int z0;

    /**
     * @brief z1 é o valor final da coordenada z.
     */
        int z1;


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
    PutBox(int _x0, int _x1, int _y0, int _y1, int _z0, int _z1, float _r, float _g, float _b, float _a);

    /**
     * @brief ~PutBox é o destrutor da função <b>PutBox</b>.
     */

    virtual ~PutBox();

    /**
     * @brief draw É o responsável por desenhar a figura desejada.
     * @brief t Ficará responsável por armazenar o objeto desenhado pelo draw.
     */

    void draw(Sculptor &t);
};

#endif // PUTBOX_H

