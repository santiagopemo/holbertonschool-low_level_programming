#!/usr/bin/python3
"""
Island Perimeter Module
"""


def island_perimeter(grid):
    """
    Returns the perimeter of the island described in grid
    """
    max_h = -1
    min_h = len(grid[0])
    min_v = len(grid)
    max_v = -1
    for i in range(len(grid)):
        for j in range(len(grid[0])):
            if grid[i][j] == 1 and j < min_h:
                min_h = j
            if grid[i][j] == 1 and j > max_h:
                max_h = j
    for i in range(len(grid[0])):
        for j in range(len(grid)):
            if grid[j][i] == 1 and j < min_v:
                min_v = j
            if grid[j][i] == 1 and j > max_v:
                max_v = j
    if max_h == -1 or max_v == -1:
        return 0
    # print("max_h = {}   min_h = {}".format(max_h, min_h))
    # print("max_v = {}   min_v = {}".format(max_v, min_v))
    h = max_h - min_h + 1
    v = max_v - min_v + 1
    return h + h + v + v
