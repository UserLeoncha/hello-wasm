#include "quadtree.h"

Quadtree::Quadtree() {
    rootnode =nullptr;
    node1 = nullptr;
    node2 = nullptr;
    node3 = nullptr;
    node4 = nullptr;
}

void Quadtree::createnode(Quadtree *root)
{
    root->rootnode = nullptr;
    return;
}
