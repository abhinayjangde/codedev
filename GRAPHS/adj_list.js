const graph = {
    "A": ["B"],
    "B": ["A", "C", "D"],
    "C": ["B", "D"],
    "D": ["B", "D"]
}

// adjacency list

function dfs(graph, start) {
    const visited = new Set();
    const queue = [start]; // Queue Follows: First In First Serve
    const ans = [];

    while (queue.length) {
        const node = queue.shift();

        if (!visited.has(node)) {
            ans.push(node);
            visited.add(node);

            // push all the neighbors of node to queue
            for (let neighbor of graph[node]) {
                queue.push(neighbor);
            }
        }
    }
}

// bfs
const ans = []
function bfs(graph, node, visited = new Set()) {
    // if node is already visited then just return
    if (visited.has(node)) return;

    ans.push(node);
    visited.add(node)

    for (let neighbor of graph[node]) {
        bfs(graph, neighbor, visited);
    }

}