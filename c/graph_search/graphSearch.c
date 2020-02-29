#include <stdio.h>
#include <stdlib.h>
#include "graphSearch.h"

int main()
{
    // Create Adjacency List

    vertex *graph[MAX_VERTEX] = {
        new_vertex('A'), // 0
        new_vertex('B'), // 1
        new_vertex('C'), // 2
        new_vertex('D'), // 3
        new_vertex('E')  // 4
    };

    // Connect the Vertices
    connect(graph[0], graph[2]);
    connect(graph[0], graph[3]);
    connect(graph[0], graph[4]);
    connect(graph[1], graph[4]);

    printf("DFS:");
    dfs(graph);

    printf("\n\n");
    printf("BSF:");
    bfs(graph);
    printf("\n");    
}

vertex *new_vertex(const char name)
{
    vertex *v = (vertex *) malloc(sizeof(vertex));
    v->name = name;
    v->list = 0;
    
    return v;
}

void create_connection(vertex *a, vertex *b)
{
    queue *q = (queue *) malloc(sizeof(queue));
    q->vertex = b;
    q->next = a->list;
    a->list = q;
}

void connect(vertex *a, vertex *b)
{
    create_connection(a, b);
    create_connection(b, a);
}

void visit(vertex *v)
{
    printf("\n%5d. %c", v->visited, v->name);
}

// Depth First Search

void create_dfs(vertex *v, int *count)
{
    queue *q = v->list;
    v->visited = ++(*count);
    visit(v);
    while(q != 0)
    {
        if(!q->vertex->visited)
            create_dfs(q->vertex, count);
        q = q->next;
    }
}

void dfs(vertex *graph[])
{
    int i;
    int count = 0;

    for(i = 0; i < MAX_VERTEX; i++)
        graph[i]->visited = 0;
    for(i = 0; i < MAX_VERTEX; i++)
    {
        if(graph[i]->visited == 0)
            create_dfs(graph[i], &count);
    }
}

// Breadth First Search

void create_bfs(vertex *v, int *count)
{
    queue *initialQueue, *front, *rear, *q, *tmp;
    vertex *w;

    v->visited = ++(*count);
    visit(v);

    initialQueue = (queue *) malloc(sizeof(queue));
    initialQueue->vertex = v;
    initialQueue->next = 0;
    front = initialQueue;
    rear = initialQueue;

    while(front != 0)
    {
        q = front->vertex->list;
        while(q != 0)
        {
            w = q->vertex;
            if(w->visited == 0)
            {
                queue *nextQueue;
                w->visited = ++(*count);
                visit(w);

                nextQueue = (queue *) malloc(sizeof(queue));
                nextQueue->vertex = w;
                nextQueue->next = 0;
                rear->next = nextQueue;
                rear = nextQueue;
            }
            q = q->next;
        }
        tmp = front;
        front = front->next;
        free(tmp);
    }
}
void bfs(vertex *graph[])
{
    int i; 
    int count = 0;

    for(i = 0; i < MAX_VERTEX; i++)
        graph[i]->visited = 0;
    for(i = 0; i < MAX_VERTEX; i++)
    {
        if(graph[i]->visited == 0)
            create_bfs(graph[i], &count);
    }
}