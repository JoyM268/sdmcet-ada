//Implement BFS algorithm on a graph represented as Adjacency matrix
import java.util.LinkedList;
import java.util.Queue;
import java.util.Scanner;

public class BFS {
    private static int count = 0;
    private static Queue<Integer> queue = new LinkedList<>();

    private static void BFS(int[][]graph, int[] visitedNodes){
        for(int v = 0; v < visitedNodes.length; v++){
            if(visitedNodes[v] == 0){
                bfs(v, graph, visitedNodes);
            }
        }
    }

    private static void bfs(int v, int[][]graph, int[] visitedNodes){
        count++;
        visitedNodes[v] = count;
        queue.add(v);
        while(!queue.isEmpty()){
            int frontElement = queue.peek();
            System.out.print(frontElement + " ");
            for(int w = 0; w < visitedNodes.length; w++){
                if(visitedNodes[w] == 0 && graph[frontElement][w] == 1){
                    count++;
                    visitedNodes[w] = count;
                    queue.add(w);
                }
            }
            queue.remove();
        }
    }

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        System.out.print("Enter the number of nodes: ");
        int nodeCount = sc.nextInt();
        int[][] graph = new int[nodeCount][nodeCount];
        int[] visitedNodes = new int[nodeCount];
        System.out.println("Enter the adjacency matrix: ");
        for(int i = 0; i < nodeCount; i++){
            for(int j = 0; j < nodeCount; j++){
                graph[i][j] = sc.nextInt();
            }
        }
        System.out.println("\nThe order in which the nodes are visited is:");
        BFS(graph, visitedNodes);
    }
}
