#!/usr/bin/python3

""" This module contains a function that calculates permiter of island"""


def island_perimeter(grid):
    """ this function calcualtes the perimeter of island.
        Args:
            grind (list of lists): this represnets the grid.

	Returns:
            (int): Perimeter of the calculated grid.
    """


    per = 0
    for i in range(len(grid)):
        for j in range(len(grid[0])):
            if grid[i][j] == 1:
                per += 4
                if i > 0 and grid[i - 1][j] == 1:
                    per -= 2
                if j > 0 and grid[i][j - 1] == 1:
                    per -= 2

    return per
