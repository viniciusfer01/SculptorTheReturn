#include "cutvoxel.h"

cutvoxel::cutvoxel(int _x, int _y, int _z){
    x=_x; y=_y; z=_z;
}

cutvoxel::~cutvoxel(){

}

// apagar um voxel
void cutvoxel::draw(Sculptor &t){
    
    t.cutVoxel(x,y,z);


}
