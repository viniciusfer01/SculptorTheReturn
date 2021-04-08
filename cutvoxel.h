#ifndef CUTVOXEL_H
#define CUTVOXEL_H
#include <figurageometrica.h>
#include <sculptor.h>

    /**
     * @brief The cutvoxel class exclui uma unidade de voxel determinada pelo usuário.
     */

class cutvoxel: public FiguraGeometrica{
protected:

    /**
     * @brief x determina a localização do voxel na coordenada x.
     */
        int x;

    /**
     * @brief y determina a localização do voxel na coordenada y.
     */
        int y;

    /**
     * @brief z determina a localização do voxel na coordenada z.
     */
        int z;

public:
    cutvoxel(int _x, int _y, int _z);

    /**
     * @brief ~cutvoxel é o destrutor da função <b>cutvoxel</b>.
     */

    virtual ~cutvoxel();

    /**
     * @brief draw É o responsável por desenhar a figura desejada.
     * @brief t Ficará responsável por armazenar o objeto desenhado pelo draw.
     */

    void draw(Sculptor &t);
};

#endif // CUTVOXEL_H

