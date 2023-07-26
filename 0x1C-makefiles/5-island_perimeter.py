#!/usr/bin/python3
""" permieter problem solving with time complexity O(n^2) """


def island_perimeter(grid):
    """
      calculate permieter of an island 
      first/last? => +number of ones
      Above == 0 || below == 0? => +1
    """

    last_row_index = len(grid) - 1     # get the last row index to get our limits because we are going to test grid[row_index + 1]
    perimeter = 0                      # our accumulator
    one_occurence_addition = 0         # if one doesn't occur value => 0; if one occurs value => 2  ((row boundaries))


    for row_index, row in enumerate(grid):
        one_occurence_addition = 0
        for element_index, element in enumerate(row):
            if element == 1:
                one_occurence_addition = 2
                if row_index - 1 < 0 or grid[row_index - 1][element_index] == 0:
                    perimeter += 1
                if row_index + 1 > last_row_index or grid[row_index + 1][element_index] == 0:
                    perimeter += 1

        perimeter += one_occurence_addition

    return perimeter
