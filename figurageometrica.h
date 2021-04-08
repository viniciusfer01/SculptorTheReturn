#ifndef FIGURAGEOMETRICA_H
#define FIGURAGEOMETRICA_H
#include <sculptor.h>

    /**
     * @brief The FiguraGeometrica class indica a clase que abarca todas as classes abstratas que, estando associadas a esta, por meio de herança, poderão ser desenhadas.
     */

class FiguraGeometrica{
public:
    FiguraGeometrica();

    /**
     * @brief ~FiguraGeometrica é o destrutor da função <b>FiguraGeometrica</b>.
     */

    virtual ~FiguraGeometrica();

    /**
     * @brief draw É o responsável por desenhar a figura desejada.
     * @brief t Ficará responsável por armazenar o objeto desenhado pelo draw.
     */

    virtual void draw(Sculptor &t)=0;
};

#endif // FIGURAGEOMETRICA_H
