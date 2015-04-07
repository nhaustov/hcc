#include <coordinate>
#include "../helper.h"
int main()
{
    bool ret = true;
    {
        std::index<7> idx;
        ret &= IsZero(idx);
    }
    {
        std::index<1> idx(5566);
        ret &= idx[0] == 5566;
        ret &= idx.rank == 1;
    }
    {
        std::index<4> idx({5, 5, 6, 6});
        ret &= idx[0] == 5;
        ret &= idx[1] == 5;
        ret &= idx[2] == 6;
        ret &= idx[3] == 6;
        ret &= idx.rank == 4;
    }
    return !ret;
}
