#ifndef CUTSPHERE_H
#define CUTSPHERE_H
#include <figurageometrica.h>
#include <sculptor.h>
#include <cmath>

    /**
     * @brief The cutsphere class faz um corte de formato esférico na figura.
     */

class cutsphere: public FiguraGeometrica{
protected:

    /**
 * @brief xcenter determina o centro da esfera no eixo x.
 */
        int xcenter;

    /**
     * @brief ycenter determina o centro da esfera no eixo y.
     */
        int ycenter;

    /**
     * @brief zcenter determina o centro da esfera no eixo z.
     */
        int zcenter;

    /**
     * @brief radius determina o raio da esfera
     */
        int radius;

public:
    cutsphere(int _xcenter, int _ycenter, int _zcenter, int _radius);

    /**
     * @brief ~cutsphere é o destrutor da função cutsphere
     */

    virtual ~cutsphere();

    /**
     * @brief draw É o responsável por desenhar a figura desejada.
     * @brief t Ficará responsável por armazenar o objeto desenhado pelo draw.
     */

    void draw(Sculptor &t);
};

#endif // CUTSPHERE_H
