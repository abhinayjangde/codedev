from collections import deque

def dfs(graph, start):
    visited = set()
    q = list()
    ans = []

    while len(q):
        node = 