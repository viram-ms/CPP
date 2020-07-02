class Solution:
    
    def findrotten(self,grid):
        queue = []
        count = 0
        for i,r in enumerate(grid):
            for j,c in enumerate(r):
                if c == 2:
                    queue.append((i,j))
                if c == 1:
                    count += 1
        return queue, count
    
    def orangesRotting(self, grid: List[List[int]]) -> int:
        answer = 0
        queue,count = self.findrotten(grid)
        while queue and count != 0:
            nextqueue = []
            for (i,j) in queue:
                traverse = [
                    (i-1,j),
                    (i+1,j),
                    (i,j-1),
                    (i,j+1)
                ]
                for (x,y) in traverse:
                    # print((x,y))
                    if (x >= 0 and x < len(grid)) and (y >= 0 and y < len(grid[0])):
                        if grid[x][y] == 1:
                            nextqueue.append((x,y))
                            count -=1
                            grid[x][y] = 2
            queue = nextqueue
            answer += 1
        queue, count = self.findrotten(grid)
        if count == 0:
            return answer
        else:
            return -1
                    
            
        # print(queue)
        # return count
        