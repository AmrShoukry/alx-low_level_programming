#!/usr/bin/python3
""" permieter problem solving with time complexity O(n^2) """


def island_perimeter(grid):
    """
      calculate permieter of an island
      first/last? => +number of ones
      Above == 0 || below == 0? => +1
    """

    # get the last row index to get our limits
    # our accumulator
    # if one doesn't occur value => 0; if one occurs value => 2
    last = len(grid) - 1
    perimeter = 0
    one_occurence_addition = 0

    for row_indx, row in enumerate(grid):
        one_occurence_addition = 0
        for elemnt_indx, element in enumerate(row):
            if element == 1:
                one_occurence_addition = 2
                if row_indx - 1 < 0 or grid[row_indx - 1][elemnt_indx] == 0:
                    perimeter += 1
                if row_indx + 1 > last or grid[row_indx + 1][elemnt_indx] == 0:
                    perimeter += 1

        perimeter += one_occurence_addition

    return perimeter
