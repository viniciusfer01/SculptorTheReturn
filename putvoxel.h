#ifndef PUTVOXEL_H
#define PUTVOXEL_H
#include <figurageometrica.h>
#include <sculptor.h>

/**
 * @brief The putvoxel class adiciona uma unidade de voxel no desenho.
 */

class putvoxel: public FiguraGeometrica{
protected:

    /**
     * @brief x indica a localização do voxel em x.
     */
    int x;

    /**
     * @brief y indica a localização do voxel em y.
     */
    int y;

    /**
     * @brief z indica a localização do voxel em z.
     */
    int z;

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
    putvoxel(int _x, int _y, int _z, float _r, float _g, float _b, float _a);

    /**
     * @brief ~putvoxel é o destrutor da função <b>putvoxel</b>
     */

    virtual ~putvoxel();

    /**
     * @brief draw É o responsável por desenhar a figura desejada.
     * @brief t Ficará responsável por armazenar o objeto desenhado pelo draw.
     */

    void draw(Sculptor &t);
};

#endif // PUTVOXEL_H
