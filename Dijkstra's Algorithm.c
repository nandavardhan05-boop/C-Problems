#include <stdio.h>

#define MAX 10
#define INF 9999

int main() {
    int n, graph[MAX][MAX];
    int dist[MAX], visited[MAX] = {0};
    int src;

    printf("Enter number of vertices: ");
    scanf("%d", &n);

    printf("Enter adjacency matrix:\n");
    for(int i = 0; i < n; i++)
        for(int j = 0; j < n; j++)
            scanf("%d", &graph[i][j]);

    printf("Enter source vertex: ");
    scanf("%d", &src);

    // Initialize distances
    for(int i = 0; i < n; i++)
        dist[i] = INF;

    dist[src] = 0;

    // Dijkstra Algorithm
    for(int count = 0; count < n - 1; count++) {
        int min = INF, u;

        for(int i = 0; i < n; i++) {
            if(!visited[i] && dist[i] < min) {
                min = dist[i];
                u = i;
            }
        }

        visited[u] = 1;

        for(int v = 0; v < n; v++) {
            if(graph[u][v] && !visited[v] &&
               dist[u] + graph[u][v] < dist[v]) {
                dist[v] = dist[u] + graph[u][v];
            }
        }
    }

    printf("\nVertex\tDistance\n");
    for(int i = 0; i < n; i++)
        printf("%d\t%d\n", i, dist[i]);

    return 0;
}
