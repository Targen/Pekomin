#ifndef _DIJKSTRA_HPP_
#define _DIJKSTRA_HPP

#include <vector>
#include <tuple>
#include <iostream>
#include "Triple.hpp"
#include "Node.hpp"

vector<Node*> dijkstra(Node *begin, Node *end);

double distanceNode(Node *n1, Node *n2);

#endif
