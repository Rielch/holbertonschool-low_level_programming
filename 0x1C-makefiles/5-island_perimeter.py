#!/usr/bin/python3
"""Returns the perimeter of the island"""


def island_perimeter(grid):
    """Returns the perimeter of the island described in grid"""

    perimeter = 0
    for line in range(len(grid)):
        for i in range(len(grid[line])):
            if grid[line][i] is 1:
                if grid[line][i - 1] is 0:
                    perimeter += 1
                if grid[line][i + 1] is 0:
                    perimeter += 1
                if grid[line - 1][i] is 0:
                    perimeter += 1
                if grid[line + 1][i] is 0:
                    perimeter += 1
    return perimeter
