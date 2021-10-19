def busy_student(start_time, end_time, query_time):
    number_of_students = 0

    for index in range(len(start_time)):
        start, end = start_time[index], end_time[index]

        if query_time >= start and query_time <= end:
            number_of_students += 1

    return number_of_students


def busy_student(start_time, end_time, query_time):
    number_of_students = 0

    for start, end in zip(start_time, end_time):
        if query_time >= start and query_time <= end:
            number_of_students += 1

    return number_of_students
