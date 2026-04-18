const graph = {
    A: ['B', 'C'],
    B: ['A', 'D'],
    C: ['A', 'E'],
    D: ['B'],
    E: ['C']
};


function bfs(graph, start) {
    const visited = new Set();
    const q = [start];

    while (q.length) {
        const node = q.shift();

        if (!visited.has(node)) {
            visited.add(node);
            console.log(node);

            for (let neighbor of graph[node]) {
                q.push(neighbor);
            }
        }
    }
}

bfs(graph, "A")
