/*
 * CSC-301
 * project2.cpp
 * Spring 2025
 *
 * Partner 1: Livia Stein Freitas
 * Partner 2: Han Xie
 * Date: March 2nd
 */

#include "project2.hpp"

using namespace std;

ostream & operator<<(ostream & os, stack<Vertex> my_stack) //function header
{
    while(!my_stack.empty()) //body
    {
        os << my_stack.top().label << " ";
        my_stack.pop();
    }
    return os; // end of function
}

/*
 * Depth First Search
 * 
 * An algorithm that performs depth-first search over a maze 
 * represented by a graph.
 * 
 * input: an adjacency list (vector of vertices), a starting vertex,
 * and an ending vertex.
 * 
 * output: a vector of integers representing a path through the maze.
 */
vector<int> DFS(vector<Vertex> &adjList, Vertex &start, Vertex &exit) {
    std::stack<Vertex> st; 
    start.visited = true; // mark root as visited
    st.push(start);
    vector<int> mazePath;
    cout << exit.label;
    while (!st.empty()){
        Vertex curr = st.top();
        st.pop();
        // Pre-op
        curr.visited = true;
        
            for (auto i: curr.neighbors){ //for each neighbor (assuming labels are the natural numbers in order)
            //cout << int(adjList[i]);
                Vertex neighbor = adjList[i]; 
                if(!neighbor.visited){
                    neighbor.visited = true;
                    st.push(neighbor);
                    neighbor.previous = curr.label; //we should be recalling that at some point
            } else {
                mazePath.std::vector<int>::push_back(neighbor.label);
            }
        }
    }
    vector<int> path;
    return path;
}

/*
 * Breadth First Search
 *
 * An algorithm that performs depth-first search over a maze 
 * represented by a graph.
 *
 * input: an adjacency list (vector of vertices), a starting vertex,
 * and an ending vertex.
 * 
 * output: a vector of integers representing a path through the maze.
 */
vector<int> BFS(vector<Vertex> &adjList, Vertex &start, Vertex &exit) {
    vector<int> path;
    return path;
}