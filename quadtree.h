#ifndef QUADTREE_H
#define QUADTREE_H

#include <QPoint>
#include <QColor>

class Quadtree
{
public:
    Quadtree();
    struct node {
        QPoint point1;
        QPoint point2;

        QColor color;
    };

private:
    void createnode(Quadtree *rootnode);

    node* rootnode;

    node* node1;
    node* node2;
    node* node3;
    node* node4;

};

#endif // QUADTREE_H
