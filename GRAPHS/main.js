const s = new Set();

/**
 * @param {number[][]} adj
 * @returns {number[]}
 */

class Solution {
    dfs(adj) {
        let ans = [];
        let visited = new Set();

        const traverse = (curr) => {
            visited.add(curr);
            ans.push(curr);

            for (let n of adj[curr]) {
                if (!visited.has(n)) {
                    traverse(n);
                }
            }
        }

        traverse(0);
        return ans;


    }
}