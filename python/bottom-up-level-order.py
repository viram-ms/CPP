# Definition for a binary tree node.
# class TreeNode:
#     def __init__(self, x):
#         self.val = x
#         self.left = None
#         self.right = None

class Solution:
    def levelOrderBottom(self, root: TreeNode) -> List[List[int]]:
        result = []
        if not root:
            return result
        queue = []
        queue.append(root)
        while len(queue) != 0:
            nodecount = len(queue)
            rowresult = []
            while nodecount > 0:
                currentnode = queue.pop(0)
                print(currentnode.val)
                d
                rowresult.append(currentnode.val)
                nodecount -=1
            result.insert(0,rowresult)
            
        return result
        