#include "SnakeBuilder.h" 


void SnakeBuilder::BuildBody(Ilist* &body) {
    DataNode newNode = DataNode();
    for(int i = 0 ; i < bodyLong ; i++ ) {
        newNode.position = startPosition;
        body->pushBack(newNode);
        startPosition.addInX(-1);
    }
}