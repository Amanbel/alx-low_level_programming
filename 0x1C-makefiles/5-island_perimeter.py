#!/usr/bin/python3
"""module that contains a function to calculate
the perimeter of an island"""


def island_perimeter(grid):
    """function that calculates the perimeter of
    the given list that represents an island"""
    if grid is None:
        return (0)
    h = 0
    w = 0
    for row in grid:
        temp = 0
        for i in row:
            if (i == 1):
                temp += 1
        if (temp > w):
            w = temp
        if (temp != 0):
            h += 1
    p = (h + w) * 2
    return (p)
