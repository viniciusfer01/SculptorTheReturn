#ifndef SCULPTOR_H
#define SCULPTOR_H
/**
 * @brief The Voxel struct
 */

struct Voxel {

  /**
   * @brief r define a tonalidade vermelha da figura.
   * @brief g define a tonalidade azul da figura.
   * @brief b define a tonalidade azul da figura.
   * @brief alpha Armazena o valor escolhido para cada cor, como também para opacidade.
   * @brief isOn Determina se o voxel é ativo ou não.
   */

  float r,g,b;
  float alpha;
  bool isOn;
};

/**
 * @brief The Sculptor class torna-se responsável por desenvolver a figura.
 */

class Sculptor{
protected:
  Voxel ***v;
  int nx,ny,nz;
  float r,g,b,a;
public:

  /**
   * @brief Sculptor
   * @brief _nx será a dimensão da figura em x.
   * @brief _ny será a dimensão da figura em y.
   * @brief _nz será a dimensão da figura em z.
   */

  Sculptor(int _nx, int _ny, int _nz);
  ~Sculptor();

  /**
   * @brief setColor Define a cor da figura
   * @brief r Determina, variando de 0 a 1, a tonalidade da cor red(vermelho) que será atribuida.
   * @brief g Determina, variando de 0 a 1, a tonalidade da cor green(verde) que será atribuida.
   * @brief b Determina, variando de 0 a 1, a tonalidade da cor blue(azul) que será atribuida.
   * @brief alpha Determina a opacidade da figura, variando também de 0 a 1.
   */

  void setColor(float r, float g, float b, float alpha);

  /**
   * @brief putBox Cria um conjunto de voxels dentro da matriz 3d
   * @brief x0 valor inicial de coordenada x.
   * @brief x1 valor final da coordenada x.
   * @brief y0 valor inicial da coordenada y.
   * @brief y1 valor final da coordenada y.
   * @brief z0 valor inicial da coordenada z.
   * @brief z1 valor final da coordenada z.
   */

  void putVoxel(int x, int y, int z);

  /**
   * @brief cutVoxel Corta uma unidade de voxel.
   * @brief x Atribui o valor a coordenada x.
   * @brief y Atribui o valor a coordenada y.
   * @brief z Atribui o valor a coordenada z.
   */

  void cutVoxel(int x, int y, int z);
  void limpaVoxels(void);

  /**
   * @brief writeOFF escreve o aquivo que contém o executável da figura desenhada..
   * @brief filename Recebe o que foi indicado, abre esse arquivo e escreve dentro dele os vertices e faces.
   */

  void writeOFF(char* filename);
};

#endif // SCULPTOR_H



