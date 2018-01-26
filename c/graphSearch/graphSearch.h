#ifndef __GRAPHSEARCH__H__
#define __GRAPHSEARCH__H__

#define MAX_VERTEX 5

struct vertex_s
{
    char name;
    int visited;
    struct queue_s* list;
};

struct queue_s 
{
    struct vertex_s* vertex;
    struct queue_s* next;
};

typedef struct vertex_s vertex;
typedef struct queue_s queue;

vertex *new_vertex(const char name);
void create_connection(vertex *a, vertex *b);
void connect(vertex *a, vertex *b);
void visit(vertex *v);
void create_dfs(vertex *v, int *count);
void dfs(vertex *graph[]);
void create_bfs(vertex *v, int *count);
void bfs(vertex *graph[]);

#endif /* __GRAPHSEARCH__H__ */