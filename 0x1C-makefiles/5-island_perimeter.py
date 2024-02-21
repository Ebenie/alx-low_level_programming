#!/usr/bin/python3
""" This module helps you to get the total perimeter of the water and land."""

def island_perimeter(grid):
    """
    This function calculates the perimeter of the island described in grid list of lists.

    Args:
        grid (List[List[int]]): a list of lists of integers representing the grid.

    Returns:
        int: The perimeter of the island is represens in integer value.

    """
    perimeter = 0
    height = len(grid)
    width = len(grid[0])

    if height > 100 or width > 100:
        pass
    else:
        for i in range(height):
            for j in range(width):
                if grid[i][j] == 1:
                    if j == 0 or grid[i][j-1] == 0:
                        perimeter += 1
                    if j == width - 1 or grid[i][j+1] == 0:
                        perimeter += 1
                    if i == 0 or grid[i-1][j] == 0:
                        perimeter += 1
                    if i == height - 1 or grid[i+1][j] == 0:
                        perimeter += 1
    return perimeter

