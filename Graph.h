#ifndef GRAPH_H_INCLUDED
#define GRAPH_H_INCLUDED

#include <string>
#include <cstdio>
#include <list>
#include <map>
#include <map>
#include "Vertex.h"
#include "Edge.h"

class Graph{
	public:
		Graph();
		Graph(unsigned n, bool isConnected);
		virtual ~Graph();
		void printGraph();
		void printGraph() const;
		bool vertexExists(int node);			//existNode
		bool edgeExists(int firstVertex,int secondVertex);
		void addVertex(int id);
		std::map<int,Vertex>& getVertices();
		Vertex& getVertexById(int id);
		std::vector<Edge>& getEdges();
		void addEdge(int firstVertex, int secondVertex, int dist);
		bool isConnected();
		void search(int firstVertex, int secondVertex);
		friend std::ostream& operator<<(std::ostream& os, const Graph& g);		//needs to be friend cuz it's defined outside of class and needs to access ajacencyList
	protected:
	private:
		std::map<int,Vertex> vertices;
		std::vector<Edge> edges;
		std::map<int,std::list<std::pair<int, int>>> adjacencyList;			//map instead of vector so user can choose id
};


#endif // GRAPH_H_INCLUDED