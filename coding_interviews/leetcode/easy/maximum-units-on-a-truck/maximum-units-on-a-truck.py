# https://leetcode.com/problems/maximum-units-on-a-truck

def maximum_units(box_types, truck_size):
    sorted_by_units_per_box = sorted(box_types, key=lambda box_type: box_type[1], reverse=True)
    
    units = 0
    
    for [num_of_boxes, num_of_units] in sorted_by_units_per_box:
        num_of_boxes_to_put_on_the_truck = min(truck_size, num_of_boxes)
        truck_size -= num_of_boxes_to_put_on_the_truck
        units += num_of_boxes_to_put_on_the_truck * num_of_units
        if truck_size <= 0: break
            
    return units
