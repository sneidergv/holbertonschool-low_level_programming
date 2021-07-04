#!/usr/bin/python3
"""
    Compute the perimeter of an island
"""
def island_perimeter(grid):
    """
        Funcition that returns the perimeter of the
        island described in grid
    """
    first_position = []
    last_position = []
    flag = 0
    for i in range(len(grid)):
        for j in range(len(grid[i])):
            if flag == 0 and grid[i][j] != 0:
                first_position.append(i - 1)
                first_position.append(j - 1)
                flag = 1
            if flag == 1 and grid[i][j] != 0:
                    last_position.insert(0, i)
                    last_position.insert(1, j)
            try:
                last_position.pop(2) 
                last_position.pop(3)
            except:
                pass 
    vertical = last_position[0] - first_position[0]
    side = last_position[1] - first_position[1]
    perimeter = (vertical * 2) + (side * 2)
    return perimeter
