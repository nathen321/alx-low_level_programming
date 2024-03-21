#!/usr/bin/python3

def island_perimeter(mape):
    """cont the island perimeter"""
    sume = 0
    rang = range(len(mape[0]) - 1)
    for x in rang:
        for y in rang:
            if mape[x][y] == 1:
                if mape[x - 1][y] == 0:
                    sume += 1
                if mape[x + 1][y] == 0:
                    sume += 1
                if mape[x][y - 1] == 0:
                    sume += 1
                if mape[x][y + 1] == 0:
                    sume += 1
    return sume
