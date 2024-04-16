//Implement DFS algorithm on a graph represented as Adjacency matrix
import java.util.Scanner;

public class DFS {
    private static int count =  0;

    private static void DFS(int[][] graph, int[] visitedNodes){
        for(int v = 0; v < visitedNodes.length; v++){
            if(visitedNodes[v] == 0){
                dfs(v, graph, visitedNodes);
            }
        }
        System.out.println();
    }

    private static void dfs(int v, int[][] graph, int[] visitedNodes){
        count++;
        visitedNodes[v] = count;
        System.out.print(v + " ");
        for(int w = 0; w < visitedNodes.length; w++){
            if(graph[v][w] == 1 && visitedNodes[w] == 0){
                dfs(w, graph, visitedNodes);
            }
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
        System.out.println("The order in which the nodes are visited is:");
        DFS(graph, visitedNodes);
    }
}