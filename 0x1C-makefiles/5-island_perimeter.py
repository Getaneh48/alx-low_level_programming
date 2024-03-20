#!/usr/bin/python3

"""
This function calculates the perimeter of the island in a grid.

Args:
  grid: A list of lists of integers,
  where 0 represents water and 1 represents land.

Returns:
  The perimeter of the island.
"""


def island_perimeter(grid):
    rows, cols = len(grid), len(grid[0])
    perimeter = 0

    for row in range(rows):
        for col in range(cols):
            if grid[row][col] == 1:
                # Count only outward facing edges
                perimeter += (not (row > 0 and grid[row - 1][col] == 1)) + \
                            (not (col > 0 and grid[row][col - 1] == 1)) + \
                            (not (row + 1 < rows and
                             grid[row + 1][col] == 1)) + \
                            (not (col + 1 < cols and grid[row][col + 1] == 1))

    return (perimeter)
