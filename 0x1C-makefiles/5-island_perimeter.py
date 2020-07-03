#!/usr/bin/python3
"""
Island Perimeter Module
"""


def island_perimeter(grid):
    """
    Returns the perimeter of the island described in grid
    """
    max_h = 0
    max_v = 0
    h_flag = False
    v_flag = False
    for row in grid:
        tmp_h = 0
        for col in row:
            if col == 1 and h_flag is False:
                h_flag = True
            if col == 0 and h_flag is True:
                h_flag = False
                if tmp_h > max_h:
                    max_h = tmp_h
                tmp_h = 0
            if h_flag:
                tmp_h += 1
    for i in range(len(grid[0])):
        tmp_v = 0
        for j in range(len(grid)):
            if grid[j][i] == 1 and v_flag is False:
                v_flag = True
            if grid[j][i] == 0 and v_flag is True:
                v_flag = False
                if tmp_v > max_v:
                    max_v = tmp_v
                tmp_v = 0
            if v_flag:
                tmp_v += 1
    return 2 * max_h + 2 * max_v
