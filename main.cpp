#include "Edge.h"
#include "Graph.h"
#include "Graph.cpp"
#include "Vertex.h"
#include <iostream>

int main(){

	//testing not connected graph
	Graph g(5,false);	//not connected graph with 5 vertexes
	g.addVertex(30);
	g.addEdge(3,30,100);
	g.addEdge(3,32,100);
	std::cout << g;		//g.printGraph();
	
	try{
		g.search(3,4);
	}
	catch(const GraphNotConnected& gnc){
		std::cerr << gnc.what() <<  '\n';
	}


	//testing connected graph
	std::cout << "\n\n\nConnected graph" <<std::endl;
	Graph gConnected(15,true);
	std::cout << gConnected;
	std::cout << gConnected.isConnected() << std::endl;
	gConnected.search(12,9);



	//testing const graph
	std::cout << "\n\n\nConst graph" <<std::endl;
	const Graph gConst(4,true);
	std::cout << gConst;//gConst.printGraph();

	return EXIT_SUCCESS;
}
