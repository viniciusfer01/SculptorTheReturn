#ifndef PUTSPHERE_H
#define PUTSPHERE_H
#include <figurageometrica.h>
#include <sculptor.h>
#include <cmath>

/**
 * @brief The putsphere class Adiciona uma esfera dentro da matriz que contém a figura.
 */

class putsphere: public FiguraGeometrica{
protected:

    /**
     * @brief xcenter indica o centro da esfera na coordenada x do plano.
     */
    int xcenter;

    /**
     * @brief ycenter indica o centro da esfera na coordenada y do plano.
     */
    int ycenter;

    /**
     * @brief zcenter indica o centro da esfera na coordenada z do plano.
     */
    int zcenter;

    /**
     * @brief radius indica o raio da esfera.
     */
    int radius;

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
    putsphere(int _xcenter, int _ycenter, int _zcenter, int _radius, float r, float g, float b, float a);

    /**
     * @brief ~putsphere é o destrutor da função <b>putsphere</b>
     */

    virtual ~putsphere();

    /**
     * @brief draw É o responsável por desenhar a figura desejada.
     * @brief t Ficará responsável por armazenar o objeto desenhado pelo draw.
     */

    void draw(Sculptor &t);
};

#endif // PUTSPHERE_H

