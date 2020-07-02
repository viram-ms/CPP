
#include <stdio.h>
#include <conio.h>
#include <malloc.h>
#include <stdlib.h>

void bellmanford(int distMat[20][20], int edge[20][2], int k, int numVert);

void main(){
    int distMat[20][20], edge[20][2], k=0 , numVert;
    printf("Enter number of vertex");
    scanf("%d", &numVert);
    printf("Enter distance matrix:");
    for(int i=0;i<numVert;i++){
        for(int j=0;j<numVert;j++){
            scanf("%d", &distMat[i][j]);
            if(distMat[i][j] != 0){
                edge[k][0] = i;
                edge[k++][1] = j;
            }
        }
    }
    bellmanford(distMat,edge,k,numVert);
}

void bellmanford(int distMat[20][20], int edge[20][2], int k, int numVert){
    int distance[20],parent[20],s,u,v,flag=1;
    for(int i=0;i<numVert;i++){
        distance[i]=1000;
        parent[i]=-1;
    }
    printf("enter source vertex");
    scanf("%d", &s);
    distance[s-1]=0;
    for(int i=0;i<numVert-1;i++){
        for(int j=0;j<k;j++){
            u=edge[j][0];
            v=edge[j][1];
            if(distance[u] + distMat[u][v] < distance[v]){
                distance[v] = distance[u] + distMat[u][v];
                parent[v] = u;
            }
        }
    }
    for(int j=0;j<k;j++){
        u=edge[j][0];
        v=edge[j][1];
        if(distance[u] + distMat[u][v] < distance[v]){
            flag=0;
        }   
    }
    if(flag){
        for(int i=0;i<numVert;i++){
            printf("%d \t %d \t %d \n ", i+1, distance[i],parent[i]+1);
        }
    }
    else{
        printf("Graph contains negative cycle");
    }
}





