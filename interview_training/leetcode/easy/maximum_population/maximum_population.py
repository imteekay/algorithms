# https://leetcode.com/problems/maximum-population-year

def maximum_population(logs):
    population_by_year = {}
    
    for [birth, death] in logs:
        for year in range(birth, death):
            if year in population_by_year:
                population_by_year[year] += 1
            else:
                population_by_year[year] = 1
                
    earliest_year = 0
    max_population = 0
    
    for year, population in population_by_year.items():
        if population == max_population:
            earliest_year = min(earliest_year, year)
        
        if population > max_population:
            earliest_year = year
            max_population = population
            
    return earliest_year
