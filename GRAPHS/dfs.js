const graph = {
    A: ['B', 'C'],
    B: ['A', 'D'],
    C: ['A', 'E'],
    D: ['B'],
    E: ['C']
};


function dfs(graph, node, visited = new Set()) {
    if (visited.has(node)) return;

    console.log(node);
    visited.add(node);

    for (let neighbor of graph[node]) {
        dfs(graph, neighbor, visited);
    }
}

dfs(graph, "A");