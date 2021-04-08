#ifndef CUTBOX_H
#define CUTBOX_H
#include <figurageometrica.h>
#include <sculptor.h>

    /**
     * @brief A classe CutBox Remove um conjunto de voxels em formato de Cubo.
     */

class CutBox: public FiguraGeometrica{
protected:

    /**
     * @brief x0 indica  o limite inferior, em x, do cubo a ser retirado da figura.
     */
        int x0;

    /**
     * @brief x1 indica o limite superior, em x, até onde o cubo será retirado.
     */
        int x1;

    /**
     * @brief y0 indica  o limite inferior, em y, do cubo a ser retirado da figura.
     */
        int y0;

    /**
     * @brief y1 indica o limite superior, em y, até onde o cubo será retirado.
     */
        int y1;

    /**
     * @brief z0 indica  o limite inferior, em z, do cubo a ser retirado da figura.
     */
        int z0;

    /**
     * @brief z1 indica o limite superior, em z, até onde o cubo será retirado.
     */
        int z1;

public:
    CutBox(int _x0, int _x1, int _y0, int _y1, int _z0, int _z1);

    /**
     * @brief ~CutBox é o destrutor da classe abstrata <b>CutBox</b>.
     * @sa CutBox
     */

    virtual ~CutBox();

    /**
     * @brief draw É o responsável por desenhar a figura.
     * @brief t Ficará responsável por armazenar o objeto desenhado pelo draw.
     */

    void draw(Sculptor &t);
};

#endif // CUTBOX_H

