def dijkstra(graph,start,goal):
    unvisited = {n : float('inf') for n in graph.keys()}
    unvisited[start] = 0
    visited = {}
    revPath = {}
    while unvisited :
        minNode = min(unvisited,key = unvisited.get)
        visited[minNode] = unvisited[minNode]
        if minNode == goal :
            break
        for neighbour in graph.get(minNode):
            if neighbour in visited :
                continue
            tempdist = unvisited[minNode] + graph[minNode][neighbour]
            if tempdist < unvisited[neighbour] :
                 unvisited[neighbour] = tempdist
                 revPath[neighbour] = minNode

        unvisited.pop(minNode)
    node = goal
    revPathString = node
    while node != start :
        revPathString += revPath[node]
        node  = revPath[node]
    fwdPath = revPathString[::-1]
    print(f'{fwdPath=}')
    return visited[goal]

if __name__ == '__main__' :
    myGraph = {
        'A':{'B':2, 'C':9, 'F' : 4},
        'B':{'F':2, 'E':3 ,'C':6},
        'C':{'D':1},
        'D':{'C':2},
        'E':{'C':2, 'D':5},
        'F':{'E':3}
    }
    startNode = 'B'
    goalNode = 'D'
    cost = dijkstra(myGraph,startNode,goalNode)
    print(f"The cost to reach {goalNode} from {startNode} is {cost}")