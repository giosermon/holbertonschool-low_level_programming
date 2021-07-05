#!/usr/bin/python3
"""
Technical interview preparation:
"""


def island_perimeter(grid):
    """island_perimeter function
    the perimeter of the island described in grid
    Args:
        grid (list of list int): Matrix
    Returns:
        int: island perimeter
    """

    perimeter = 0
    for i in range(len(grid)):
        for l in range(len(grid[i])):
            if grid[i][l] == 1:
                perimeter += 4
                if i > 0 and grid[i-1][l] == 1:
                    perimeter -= 2
                if l > 0 and grid[i][l-1] == 1:
                    perimeter -= 2
    return perimeter
