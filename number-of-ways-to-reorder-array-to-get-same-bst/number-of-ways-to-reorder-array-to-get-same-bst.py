import operator as op
from functools import reduce


def choose(n, r):
    """https://stackoverflow.com/a/4941932
    """
    r = min(r, n-r)
    numer = reduce(op.mul, range(n, n-r, -1), 1)
    denom = reduce(op.mul, range(1, r+1), 1)
    return numer // denom


class Solution:
    def numOfWays(self, nums: List[int]) -> int:
        def divideAndConquer(sublist):
            if len(sublist) <= 1:  # base case
                return 1
            
            root = sublist[0]
            left = [n for n in sublist if n < root]   # left subarray
            right = [n for n in sublist if n > root]  # right subarray
            
            leftWays = divideAndConquer(left)
            rightWays = divideAndConquer(right)
            
            return choose(len(left)+len(right), len(left)) * leftWays * rightWays
        
        # minus 1 because the answer needs to exclude the input
        return (divideAndConquer(nums) - 1) % 1000000007